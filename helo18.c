#include <stdio.h>

 int main(){
    int i;
    int nota;
    int total;
    float media = 0;
   
    printf("qual o total de alunos?");
    scanf("%d", &total);
    

    for(i=1; i<=total; i++){
        printf("qual a nota do %d alunos?",i);
        scanf("%d", &nota);
        media = media + nota;
        
    }
      media = media/total;
      printf("sua media e: %f", media );
      


 }