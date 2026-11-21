#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

int main (){

  char questions[][100] = {"Which is the largest planet in the solar system?\n",
                            "Which is the hottest planet?\n",
                           "Which planet has the most moons?\n",
                           "Is the Earth flat?\n"};
  
  char options[][100] = {"A. Jupiter\nB. Saturn\nC. Uranus\nD. Neptune",
                         "A. Mercury\nB. Venus\nC. Earth\nD. Mars",
                         "A. Earth\nB. Mars\nC. Jupiter\nD. Saturn",
                          "A. Yes\nB. No\nC. Maybe\nD. Sometimes"};

  char answerkey[]= { 'A', 'B', 'D' ,'B'};
  
  int score =0;
  char guess =0;

  int questioncount = sizeof(questions) / sizeof(questions[0]);

  for(int i =0; i < questioncount; i++){
    printf("%s",questions[i]);
    printf("%s",options[i]);
    printf("\nSelect your option :");
    scanf(" %c",&guess);

    guess = toupper(guess);

    if(guess == answerkey[i]){
      printf("CORRECT!\n");
      score++;
    }
    else{
      printf("WRONG! The correct option was %c\n",answerkey[i  ]);
    }


  }
  printf("YOU GOT A SCORE OF : %d out of %d questions",score,questioncount);
    return 0;
}
 
