#include <iostream>
using namespace std;

int main() {
    int currentSub = 0, maxSub = INT_MIN;
    int sz = 5;
    int arr[] = {1, 2, 3 , 4, 5};
    for (int i = 0; i < sz; i++){
        currentSub += arr[i];
        maxSub = max(maxSub, currentSub);
        if (currentSub < 0) {
            currentSub = 0;
        }
    }
    cout << "THe maximum sum is = " << maxSub;
    return 0;
}

