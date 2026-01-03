#include<iostream>
using namespace std;
void bsort(int arr[],int size){
    if(size==0 || size==1) return;
    for(int i=0;i<size-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    bsort(arr,size-1);
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    bsort(arr,n);
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout <<"\n\n";
}