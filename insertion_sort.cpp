#include<iostream>
using namespace std;

void insertion_sort(int *arr,int size){
    for(int i=1;i<size;i++){
        int key=arr[i];
        int j=i-1;
        while(key<arr[j] && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key; 
    }

}
void print_arr(int *arr,int size){
        for(int i=0;i<size;i++){
        cout<<arr[i]<<"  ";
        }
}
int main()
{
    int arr[6]={20,30,10,60,40,55};
    insertion_sort(arr,6);
    print_arr(arr,6);
    return 0;
}