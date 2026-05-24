//find the length of an array 
#include <iostream>
using namespace std;
int main(){
    // int arr[] = {1, 2, 3, 4, 5};
    // int n = sizeof(arr) / sizeof(arr[0]);
    // cout << "Length of the array is: " << n << endl;
    // return 0;


    // int arr[5];
    // for (int i=0;i<5;i++){
    //     cout << "Enter element " << i+1 << ": ";
    //     cin >> arr[i];
    // }
    int arr[5];
    for (int i=0;i<5;i++){
        cout << "enter the element"<< i+1 << ":" ;
        cin>> arr[i];
    }
    int i=arr[0];
    for (int j=0;j<5;j++)if (arr[j]<i)i=arr[j];
    cout << "Minimum element in the array is: " << i << endl;
    cout << "the array is " <<endl;
    int n=sizeof(arr)/sizeof(arr[0]);
    for (int i=0;i<n;){
        
        cout << arr[i]<<" "<< ends;
        i++;
    }
    
    //bubble sort
    // This code sorts an array in ascending order using bubble sort.
    // int arr[]={12,45,67,89,34,23,56,78,90,11};
    // int n = sizeof(arr) / sizeof(arr[0]);
    // for (int j=0;j<n;j++){
    //     for (int i=0;i<n-1;i++){
    //         if (arr[i]>arr[i+1]){
    //             int temp=arr[i];
    //             arr[i]=arr[i+1];
    //             arr[i+1]=temp;
    //         }
    //     }
    // }
    
    // cout<< "Sorted array is: ";
    // for (int i=0;i<n;i++){
    //     cout << arr[i] << " ";
    // }
     
    // rewriting the code for bubble sort.
    for (int j=0;j<n;j++){
        for (int i=0;i<n-1;i++){
            if (arr[i+1]<arr[i]){
                int temp=arr[i+1];
                arr[i+1]=arr[i];
                arr[i]=temp;
            }
        }

    }
    cout << "the sorted array is :" <<endl;
    for (int i=0;i<n;i++){
        cout<< arr[i]<<" "<<ends;
    }
    //most occuring element in an array
    // int arr[] = {1, 2, 3, 4, 5, 1, 2, 1, 2, 2, 1};
    // int n = sizeof(arr) / sizeof(arr[0]);
    // int maxCount = 0, mostOccurringElement = 0;
    // for (int i=0;i<n;i++){
    //     int count= 0;
    //     for (int j=0;j<n;j++)if (arr[j]==arr[i]) count++;
    //     if (count > maxCount) {
    //         maxCount = count;
    //         mostOccurringElement = arr[i];
    //     }
    // }
    // cout << "Most occurring element is: " << mostOccurringElement << endl;
    // cout << "It occurs " << maxCount << " times." << endl;
    // return 0;


    //2D array
    int arr1[3][3];
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            cout << "Enter element at position (" << i+1 << "," << j+1 << "): ";
            cin >> arr1[i][j];
        }
    }
    cout << "the entered array is:" << endl;
    for (int k=0 ;k<3;k++){
        for (int j=0;j<3;j++){
            cout<< arr1[k][j]<<" "<<ends;
        }
        cout <<endl;
    }
    // for (int i=0;i<3;i++){
    //     for (int j=0;j<3;j++){
    //         cout << "Element at position (" << i+1 << "," << j+1 << ") is: ";
    //         cout << arr[i][j] << endl;
    //     }
    // }
}