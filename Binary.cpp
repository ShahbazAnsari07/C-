#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int key) {
    int start = 0;
    int end = n-1;

    int mid = start + (end-start)/2;

    while(start <= end) {

        if(arr[mid] == key) {
            return mid;
        }
        
    
        if(key > arr[mid]) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }

        mid = start + (end-start)/2;
    }

    //Key present hi nhi hai;
    return -1;
}


int main() {

    int even[6] = {9,15,18,24,30,35};
    int odd[5] = {8,10,15,19,21};

    int evenindex = binarySearch(even, 6, 30);
    int oddindex = binarySearch(odd, 5, 15);

    cout << "Index of 30 is: " << evenindex << endl;

    cout << endl;

    cout << "Index of 15 is: " << oddindex << endl;


    return 0;

}