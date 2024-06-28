#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <unordered_set>

using namespace std;

string solution(vector<string> commands) {
    unordered_map<string, unordered_set<string>> buckets;
    string current_bucket;
    
    for (const string& command : commands) {
        if (command.rfind("goto ", 0) == 0) {
            current_bucket = command.substr(5);
        } else if (command.rfind("create ", 0) == 0) {
            string filename = command.substr(7);
            buckets[current_bucket].insert(filename);
        }
    }
    
    string largest_bucket;
    size_t max_files = 0;
    
    for (const auto& bucket : buckets) {
        if (bucket.second.size() > max_files) {
            largest_bucket = bucket.first;
            max_files = bucket.second.size();
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
    cout << solution(commands1) << endl; // should output "bucketC"
    
    vector<string> commands2 = {
        "goto bar",
        "create foo",
        "goto foo",
        "create bar",
        "create bar",
        "goto bar",
        "create bar"
    };
    cout << solution(commands2) << endl; // should output "bar"
    
    return 0;
}
