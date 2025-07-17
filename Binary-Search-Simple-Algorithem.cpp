#include <iostream>
#include <vector>
using namespace std;

int binSearch(vector<int> arr, int target) {
    int str = 0, end = arr.size()-1;

    while(str <= end) {
        int mid = str + ((str + end) / 2); // We are using this formula so that if there is any max_int we can resolve it.
        if (arr[mid] < target) {
            str = mid +1;
        }
        else if (arr[mid] > target) {
            end = mid -1;
        }
        else {
            return mid;
        }
    }
    return -1;

}


int main() {
    vector<int> arr1 = {-1, 0, 3, 4, 5, 9, 12};
    int target1 = 12;

    vector<int> arr2 = {-1, 0, 3, 5, 9, 12};
    int target2 = 0;

    cout << "Answer = " << binSearch(arr2, target2) << endl;
    return 0;
}