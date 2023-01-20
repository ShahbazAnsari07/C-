#include<iostream>
using namespace std;

bool search(int arr[], int size, int key) {

    for(int i = 0; i<=size; i++) {   // yha pe ham traversing kr rhe hai!

        if(arr[i] == key) {

            return 1;
        }

    }
    return 0;

}

int main() {

    int arr[10] = {5, 8, 6, -7, 6, 1, 3, 14};

    cout << "Enter the element to be searched: ";

    int key;

    cin >> key;

    bool found = search(arr, 10, key);

    if (found) {

        cout << "Key is present" << endl;

    }

    else {

        cout << "Key is absent" << endl;
    }

    return 0;

}

