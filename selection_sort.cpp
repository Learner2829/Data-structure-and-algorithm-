#include<iostream>
using namespace std;
void selection_sort(int *arr,int size){
    for(int i=0;i<size;i++){ 
        int min=i;
        for(int j=i;j<size;j++){
            if(arr[min]>arr[j]){
                int temp=arr[min];
                arr[min]=arr[j];
                arr[j]=temp;
            }
        }
        arr[i]=arr[min];
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<"  ";
        }
}
main(){
 int arr[]={6,2,4,10,11,1,100,99};
int size=sizeof(arr)/sizeof(arr[0]);   
selection_sort(arr,size);
}