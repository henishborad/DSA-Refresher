//Sorry, write this for Q3

#include <vector>
#include <algorithm>

using namespace std;

struct Meeting {
    int start;
    int end;
    Meeting(int s, int e) : start(s), end(e) {}
};

int solution(vector<vector<vector<int>>> schedules, int length) {
    vector<Meeting> all_meetings;
    
    // Flatten the schedules into a single list of meetings
    for (const auto& employee_schedules : schedules) {
        for (const auto& meeting : employee_schedules) {
            all_meetings.push_back(Meeting(meeting[0], meeting[1]));
        }
    }
    
    // Sort meetings by start time
    sort(all_meetings.begin(), all_meetings.end(), [](const Meeting& a, const Meeting& b) {
        return a.start < b.start;
    });
    
    // Merge overlapping meetings
    vector<Meeting> merged_meetings;
    for (const auto& meeting : all_meetings) {
        if (merged_meetings.empty() || merged_meetings.back().end < meeting.start) {
            merged_meetings.push_back(meeting);
        } else {
            merged_meetings.back().end = max(merged_meetings.back().end, meeting.end);
        }
    }
    
    // Find the first available time slot
    int start_of_day = 0;
    int end_of_day = 24 * 60;
    
    // Check before the first meeting
    if (merged_meetings.front().start >= length) {
        return 0;
    }
    
    // Check between merged meetings
    for (size_t i = 1; i < merged_meetings.size(); ++i) {
        int gap_start = merged_meetings[i - 1].end;
        int gap_end = merged_meetings[i].start;
        if (gap_end - gap_start >= length) {
            return gap_start;
        }
    }
    
    // Check after the last meeting
    if (end_of_day - merged_meetings.back().end >= length) {
        return merged_meetings.back().end;
    }
    
    // No suitable time slot found
    return -1;
}
//TELL ONCE DONE!!!