#include <iostream>
<<<<<<< HEAD
#include <vector>
using namespace std;

int binSearch(vector<int> arr, int target) {
    int str = 0, end = arr.size()-1;

    while(str <= end) {
        int mid = (str + end) / 2;
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
=======
using namespace std;

// int main() {
//     int a = 34;
//     cout << "Adress of A = " << & a << endl;
//     int *ptr = &a;
//     int ** ptr2 = &ptr;
    
//     cout << "value of ptr = " << ptr << endl;
//     cout << "value of ptr2 = " << **(ptr2) << endl;
//     cout << "Adress of ptr2 = " << *(&ptr2) << endl;
//     cout << *(&a)<< endl;
//     return 0;
// }


// Pass by Refference 

// void changeA(int* ptr) {
//     *ptr = 20;
// }

// int main() {

//     int a = 10; 
//     changeA(&a);
//     cout << a << endl;
//     return 0;
// }

// Array Pointer 

int main() {
    int arr[] = {1, 2, 3,6, 4, 2, 6};
    cout << *arr << endl;
    cout << *(arr + 4) << endl;
    cout << *(&arr + 4) << endl;
>>>>>>> b23dc942943e365889a07aecfded4d408d171728
    return 0;
}