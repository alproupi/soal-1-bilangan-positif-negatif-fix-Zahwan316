#include <stdio.h>
#include <stdlib.h>

int main(){
    int bilangan ;

    printf("Masukan bilangan");
    scanf("%d", &bilangan);

  if( bilangan > 0){
    printf("%d adalah bilangan positif", bilangan);
  }
  else if(bilangan == 0){
    printf("%d adalah bilangan 0", bilangan);
  }
  else{
    printf("%d adalah bilangan negatif.", bilangan);
  }

    return 0;
}