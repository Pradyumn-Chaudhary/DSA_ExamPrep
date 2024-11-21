#include<stdio.h>

int main(){
    int arr[] = {9, 5, 2, 4, 6, 1};
    for (int i = 0; i < 5;i++){
        for (int j = i+1;  j < 6;j++){
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int i = 0; i < 6;i++){
        printf("%d\t", arr[i]);
    }
}