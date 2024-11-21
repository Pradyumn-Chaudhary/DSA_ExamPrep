#include<stdio.h>

int main(){
    int arr[] = {9, 5, 2, 4, 6, 1};
    for (int i = 0; i < 6 - 1;i++){
        int k = i;
        for (int j = i+1;  j < 6;j++){
            if(arr[k]>arr[j]){
                k = j;
            }
        }
        if(k == i){
            break;
        }
        int temp = arr[k];
        arr[k] = arr[i];
        arr[i] = temp;
    }
    for (int i = 0; i < 6;i++){
        printf("%d\t", arr[i]);
    }
}