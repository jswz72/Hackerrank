#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void partition(int n, int *arr){
    
    if(n < 2){
        return;     //array marked sorted if only 1 element
    }
    
    int pivot = arr[n-1];   //pivot is last element in array
    int temp = 0;
    int j = 0;  //marks 
    for(int i = 0; i < n - 1; i++){
        //swap with first element of 'greater than' subarr 
        if(arr[i] < pivot){
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            j++;
        }
    }
    //put pivot in middle: left is lesser, right is greater
    arr[n - 1] = arr[j];
    arr[j] = pivot;
    
    
    
    return;
}

int main() {
  
    int n = 0;
    cin >> n;
    int *arr = (int *)malloc(n*sizeof(int));
    for(int i = 0; i < n ; i++){
        cin >> arr[i];
    }
    
    partition(n, arr);
    for(int arr_i = 0; arr_i < n; arr_i++){
        cout << arr[arr_i] << " ";
    }
    
    return 0;
}

