#include<bits/stdc++.h>
using namespace std;
int quicksort(int arr[],int l,int h){
int p= partition(arr,l,h);
quicksort(arr,l,p-1);
quicksort(arr,p,h);
}
int partition(int arr[],int l ,int h){
    int mid= (l+h)/2;
    int pivot = arr[mid];
    int i=l-1;
    for(int j=l;j<h;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],pivot);
    return i+1;
}

