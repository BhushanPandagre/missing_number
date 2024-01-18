// #include <iostream>
// #include <vector>

// using namespace std;

// int fmnum(const vector<int>& nums) {
//     int n = nums.size() + 1; 
//     // Since one number is missing
//     int eSum = (n * (n + 1)) / 2; 
//     // Sum of all numbers from 1 to n

//     int aSum = 0;
//     for (int num : nums) {
//         aSum += num;
//     }

//     return eSum - aSum;
// }

// int main() {
//     vector<int> array = {1, 2, 4, 5, 6};
//     int missingNumber = fmnum(array);

//     cout << "Missing Number: " << missingNumber << endl;

//     return 0;
// }

//========================for multiple missing numbers ==================================//
#include <iostream>
#include <vector>
using namespace std;

vector<int> fmnum(const vector<int>& nums) {
    vector<int> result;
    int n = nums.size();

    for (int i = 0; i < n - 1; ++i) {
        int current = nums[i];
        int next = nums[i + 1];

        // Check if there is a gap between current and next
        if (next - current > 1) {
            // Add all missing numbers in the range (current + 1) to (next - 1)
            for (int missing = current + 1; missing < next; ++missing) {
                result.push_back(missing);
            }
        }
    }

    return result;
}

int main() {
    vector<int> array = {10, 11, 12, 13, 15, 17};
    vector<int> missingNumbers =fmnum(array);

    cout << "Missing Numbers: ";
    for (int num : missingNumbers) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}


