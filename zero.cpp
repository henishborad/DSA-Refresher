//ONE

#include <iostream>
#include <vector>

using namespace std;

int solution(vector<int>& numbers) {
    if (numbers.size() == 0) {
        return 0;
    }

    int target1 = numbers[0];
    int target2 = (numbers.size() > 1) ? numbers[1] : target1;
    
    int count = 0;
    for (int num : numbers) {
        if (num != target1 && num != target2) {
            count++;
        }
    }
    
    return count;
}

int main() {
    // Test cases from the example
    vector<int> numbers1 = {4, 3, 2, 3, 2, 5, 4, 3};
    vector<int> numbers2 = {3, 3, 1, 1, 3};
    vector<int> numbers3 = {2};
    vector<int> numbers4 = {}; // Edge case: empty array
    vector<int> numbers5 = {2, 2}; // Edge case: two identical elements
    vector<int> numbers6 = {1, 2, 3, 4}; // General case with all different elements
    
    cout << solution(numbers1) << endl;  // Output: 3
    cout << solution(numbers2) << endl;  // Output: 2
    cout << solution(numbers3) << endl;  // Output: 0
    cout << solution(numbers4) << endl;  // Output: 0
    cout << solution(numbers5) << endl;  // Output: 0
    cout << solution(numbers6) << endl;  // Output: 2
    
    return 0;
}