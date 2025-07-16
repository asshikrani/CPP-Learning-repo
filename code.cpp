#include <iostream>
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
    return 0;
}