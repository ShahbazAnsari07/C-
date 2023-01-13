#include<iostream>
using namespace std;

int Largest(int arr[], int n) {

    int max = arr[0];

    for(int i = 0; i < n; i++) {
        if(arr[i] > max) {
            max =  arr[i];
        }
    }
    return max;
}

int Smallest(int arr2[], int n2) {

    int min = arr2[0];

    for(int i = 0; i < n2; i++) {
        if(arr2[i] < min) {
            min =  arr2[i];
        }
    }
    return min;
}

int main() {
    int arr[] = {45, 52, 63, 25, 12};
    int n = sizeof(arr)/sizeof(arr[0]);

    int arr2[] = {21, 32, 15, 9, 10};
    int n2 = sizeof(arr2)/sizeof(arr2[0]);

    cout << "The largest element in arr is: " << Largest(arr, n);

    cout << endl;

    cout << "The smallest element in arr2 is: " << Smallest(arr2, n2);

    return 0;
}