#include<stdio.h>

int main(){
for(int i = 1; i<=9 ; i++){
    for(int j=1; j<=9 ; j++){
        if(i==j || j==10-i || i==1 || i==9){
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