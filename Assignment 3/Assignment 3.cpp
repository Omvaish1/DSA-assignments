//OM VAISH
//SID:21105087

#include <iostream>                    
using namespace std;         

/*
QUESTION:How would you search for an element in an array/list whose size is unknown?
SOLUTION: We can search an element in an array whose size is unknown in O(logn) time complexity provided that the array is in sorted order .We can do this by making some modification in binary search technique.
The concept behind this approach is:
  ->Take inital value of i as 0 and j as 1.
  ->Now increase j to j*2 until arr[j] exceed the key to be searched.
  ->Now search the key using binary search between i and j.
*/

//Simple Binary Search Function
int binary_search(int arr[],int i,int j,int key){
    int m=(i+j)/2; 
    while(i<=j){   
    if(arr[m]==key){return m;}  // if key to be searched is present it will return index of the key
    else{
        if(arr[m]<key){i=m+1;}
        else{j=m-1;}
    }
    m=(i+j)/2;
    }
    return -1;  // when element is not present it will return -1
}
//Binary search for array with unknown length
int binary_search_unknown(int arr[],int key){
    int i=0,j=1;
    while(arr[j]<key){
        i=j;
        j=2*j;
    }
    //Now calling Simple Binary Search on range i to j.
    return binary_search(arr,i,j,key);
}