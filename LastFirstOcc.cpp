#include<iostream>
using namespace std;

int FirstOcc(int arr[], int n, int key) {
    int s=0, e= n-1;;
    int mid = s + (e-s)/2;
    int ans = -1;

    while(s<=e) {
        if(arr[mid] == key) {
            ans =  mid;
            e = mid -1;  // end ko peeche laye q ki uski first occurence check krni thi..
        }
        else if(key > arr[mid]) {  //Right me jao... 
            s = mid + 1; 
        } else {   //Left me jao...
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int LastOcc(int arr[], int n, int key) {
    int s=0, e= n-1;;
    int mid = s + (e-s)/2;
    int ans = -1;

    while(s<=e) {
        if(arr[mid] == key) {
            ans =  mid;
            s = mid + 1; // start ko forward krenge mid se tab jake last occ niklega... 
        }
        else if(key > arr[mid]) {
            s = mid + 1;
        } else {
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}


int main() {

    int even[11] = {1,2,4,4,4,5,6,7,8,9,10};

    cout << "The first occurence of 4 is at index: " << FirstOcc(even, 11, 4) << endl;
    cout << "The Last occurence of 4 is at index: " << LastOcc(even, 11, 4) << endl;

    return 0;

}


