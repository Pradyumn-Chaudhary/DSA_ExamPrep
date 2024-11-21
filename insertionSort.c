#include<stdio.h>

int main(){
    int arr[] = {9, 5, 2, 4, 6, 1};
    int n = 6;
    for (int i = 1; i < 6;i++){
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j]>key){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
    for (int i = 0; i < 6;i++){
        printf("%d\t", arr[i]);
    }
        return 0;
}