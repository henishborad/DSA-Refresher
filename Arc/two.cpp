// COMPARE TWO
#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>

using namespace std;

string solution(vector<string> commands) {
    unordered_map<string, unordered_set<string>> buckets;
    string current_bucket;

    for (const string& command : commands) {
        if (command.substr(0, 5) == "goto ") {
            // Extract the bucket name
            current_bucket = command.substr(5);
        } else if (command.substr(0, 7) == "create ") {
            // Extract the file name
            string filename = command.substr(7);
            // Create the file in the current bucket
            buckets[current_bucket].insert(filename);
        }
    }

    // Determine the bucket with the largest number of files
    string largest_bucket;
    size_t max_files = 0;

    for (const auto& pair : buckets) {
        if (pair.second.size() > max_files) {
            max_files = pair.second.size();
            largest_bucket = pair.first;
        }
    }

    return largest_bucket;
}

int main() {
    vector<string> commands1 = {
        "goto bucketA",
        "create fileA",
        "create fileB",
        "create fileA",
        "goto bucketB",
        "goto bucketC",
        "create fileA",
        "create fileB",
        "create fileC"
    };
    vector<string> commands2 = {
        "goto bar",
        "create foo",
        "goto foo",
        "create bar",
        "create bar",
        "goto bar",
        "create bar"
    };

    cout << solution(commands1) << endl; // Output: "bucketC"
    cout << solution(commands2) << endl; // Output: "bar"

    return 0;
}
