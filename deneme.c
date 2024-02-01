#include <stdio.h>

int main(){

    int yil;

    printf("Which year: ");
    scanf("%d", &yil);

    if(yil % 4 == 0 && !(yil % 100 == 0)){
            printf("artik yil");
        }else if(yil % 400 == 0){
            printf("artik yil");
        }else{
            printf("artik yil degildir");
        }       
}
