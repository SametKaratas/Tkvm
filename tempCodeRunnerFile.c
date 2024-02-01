int yil;
    printf("Which year: ");
    scanf("%d", &yil);
    if(yil % 4 == 0 && !(yil % 100 == 0) && yil % 400 == 0){
        printf("artik yil");
    }else{
        printf("artik yil değildir");
    }