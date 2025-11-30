//4.According to the gregorian calendar, it was Monday on the date 01/01/01. If Any year is input through the keyboard write a program to find out what is the day on 1st January of this year.
#include <stdio.h>
int main() {
          int year,i,day=1;
          printf ("Enter year");
          scanf ("%d",&year);
          for (i=1; i<year; i++)
          {
              if ((i%400==0)||(i%4==0 && i%100!=0))
              {
                  day = (day+2)%7;
              }
              else
              {
                  day = (day+1)%7;
              }
          }
          printf ("On 01/01/%d it was",year);
          switch (day)
          {
              case 0:printf ("Sunday\n");
                     break;
              case 1:printf ("Monday\n");
                     break;
              case 2:printf ("Tuesday\n");
                     break;
              case 3:printf ("Wednesday\n");
                     break;
              case 4:printf ("Thursday\n");
                     break;         
              case 5:printf ("Friday\n");
                     break;
              case 6:printf ("Saturday\n");
                     break;             
          }
          return 0;
}

