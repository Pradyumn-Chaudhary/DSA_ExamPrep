#include<stdio.h>
#include<stdlib.h>

void towersOfHanoi(int n,char source,char helper,char destination){
    if(n==1){
        printf("Move disk %d from %c to %c\n", n, source, destination);
        return;
    }
    towersOfHanoi(n - 1, source, destination, helper);
    printf("Move disk %d from %c to %c\n", n, source, destination);
    towersOfHanoi(n - 1, helper, source, destination);
}
int main(){
    towersOfHanoi(3, 'A', 'B', 'C');
}