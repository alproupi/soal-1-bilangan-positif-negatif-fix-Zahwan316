#include <stdio.h>
#include <stdlib.h>

int main(){
    int tahun;

    printf("Masukan tahun : " );
    scanf("%d", &tahun);

    if(tahun % 4 == 0 && tahun % 100 != 0 || tahun % 400 == 0){
      printf("%d adalah tahun kabisat", tahun);
    }
    else{
      printf("%d bukan tahun kabisat", tahun);
    }

    return 0;
}