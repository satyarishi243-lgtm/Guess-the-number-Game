
#include<stdio.h>
int main(){
  int random=55,guess,noofattempts=1;
  printf("welcome to guess the number game!\n\n ");
  printf("please enter your guess between (1 to 100): ");
 scanf("%d", &guess);
while(1){if(random==guess){
    printf("\nCongratulations you have guessed the correct number!\n");
    break;
}
else if(guess<random){
  printf("\nguess a larger number between (1 to 100): ");
scanf("%d", &guess);}
  else if(guess>random){
    printf("\nguess a smaller number between (1 to 100): ");
    scanf("%d", &guess);
  }
 noofattempts++;
}
printf("\nyou guessed the number in %d attempts\nDeveloped by Rishita.R\n", noofattempts);
return 0;
}