// Four

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

// Function to find the common prefix length between two strings
int commonPrefixLength(const string &a, const string &b) {
    int len = min(a.length(), b.length());
    for (int i = 0; i < len; ++i) {
        if (a[i] != b[i]) {
            return i;
        }
    }
    return len;
}

int solution(vector<int> firstArray, vector<int> secondArray) {
    int maxLength = 0;

    for (int i = 0; i < firstArray.size(); ++i) {
        string firstStr = to_string(firstArray[i]);
        for (int j = 0; j < secondArray.size(); ++j) {
            string secondStr = to_string(secondArray[j]);
            int currentLength = commonPrefixLength(firstStr, secondStr);
            maxLength = max(maxLength, currentLength);
        }
    }

    return maxLength;
}

int main() {
    vector<int> firstArray = {25, 288, 2655, 54546, 54, 555};
    vector<int> secondArray = {2, 255, 266, 244, 26, 5, 54547};

    cout << "Length of the longest common prefix: " << solution(firstArray, secondArray) << endl;
    return 0;
}
