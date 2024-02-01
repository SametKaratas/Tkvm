#include <stdio.h>

int main(){

    int yil,ay;

    while(1){
        printf("Which year: ");
        scanf("%d", &yil);
        printf("Which mounth: ");
        scanf("%d", &ay);

        if(((yil >= 1990 && yil <= 2100) && (ay >= 1 && ay <= 12))){
            break;
        }else{
            
        }
    }

    int gunSayisi;
    // gün sayısı belli aylar
    if(ay == 4){
        gunSayisi = 30;
    }else if(ay == 6){
        gunSayisi = 30;
    }else if(ay == 9){
        gunSayisi = 30;
    }else if(ay == 11){
        gunSayisi = 30;
    }else if(ay == 1){
        gunSayisi = 31;
    }else if(ay == 3){
        gunSayisi = 31;
    }else if(ay == 5){
        gunSayisi = 31;
    }else if(ay == 7){
        gunSayisi = 31;
    }else if(ay == 8){
        gunSayisi = 31;
    }else if(ay == 10){
        gunSayisi = 31;
    }else if(ay == 12){
        gunSayisi = 31;
    }

    // artık yıl hesaplama   
    if(yil % 4 == 0 && !(yil % 100 == 0)){
            printf("artik yil");
        }else if(yil % 400 == 0){
            printf("artik yil");
        }else{
            printf("artik yil degildir");
        }       

    

    return 0;
}