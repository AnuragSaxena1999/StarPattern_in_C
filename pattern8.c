#include<stdio.h>

int main(){
for(int i = 1; i<=9 ; i++){
    for(int j=1; j<=5 ; j++){
        if(j<=i && j<=10-i){
            printf("*");
        }
        else{
            printf(" ");
        }
    }
    printf("\n");
}
    return 0;
}