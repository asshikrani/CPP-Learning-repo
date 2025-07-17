#include <iostream>
using namespace std;

int main() {
    int n = 7;
    int max_sub = 0;
    int arr[7] = {3, -4, 5, 4, -1, 7, -8};
    for(int st = 0; st < n; st++) {
        int current_sum = 0;
        for (int end = st; end < n; end++) {
            current_sum += arr[end];
            max_sub = max(current_sum, max_sub);
        }
    }
    cout << "The maximum sum = " << max_sub << endl;
    return 0;
}