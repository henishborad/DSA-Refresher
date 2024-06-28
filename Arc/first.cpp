// FIRST
//DONT WASTE TIME WRITING COMMENTS...
#include <iostream>
#include <vector>
using namespace std;
int solution(vector<int> numbers)
{
    // Handle edge cases where the array is empty or has only one element
    if (numbers.size() == 0)
        return 0;
    if (numbers.size() == 1)
        return 0;

    // Get the values of numbers[0] and numbers[1]
    int first = numbers[0];
    int second = numbers[1];

    // Initialize a counter
    int count = 0;

    // Iterate through the array and count the numbers that are not equal to first or second
    for (int i = 2; i < numbers.size(); ++i)
    {
        if (numbers[i] != first && numbers[i] != second)
        {
            ++count;
        }
    }

    return count;
}

int main()
{
    vector<int> numbers1 = {4, 3, 2, 3, 2, 5, 4, 3};
    vector<int> numbers2 = {3, 3, 1, 1, 3};
    vector<int> numbers3 = {2};

    cout << solution(numbers1) << endl;
    cout << solution(numbers2) << endl;
    cout << solution(numbers3) << endl;

    return 0;
}