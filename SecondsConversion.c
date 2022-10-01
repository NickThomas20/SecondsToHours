#include <stdio.h>
#include <stdlib.h>

/*
1- Kyle Geerts - Participation: 20%
2- Tyler Weberski - Participation: 20%
3- Matt Graham - Participation: 20%
4- Nick Thomas - Participation: 20%	
5- Carter Everts - Participation: 20%
*/

typedef struct time {
    int hr;
    int min;
    int sec;
} time;

void convTime(time *t);
void printTime(time *t);

int main() {
    time *mileTime;
    mileTime = (time*)malloc(sizeof(time));
    convTime(mileTime);
    printTime(mileTime);

    return 0;
}


void convTime(time *t) {
    int seconds;
    printf("Total seconds: ");
    scanf(" %d" , &seconds);
    t->hr = seconds / 3600;
    t->min = (seconds % 3600) / 60;
    t->sec = ((seconds % 3600) % 60);
    
}


void printTime(time *t) {
  printf("%d seconds = %d hr %d min %d sec", (t->sec + (t->min * 60) + t->hr * 3600), t->hr, t->min, t->sec);
}
