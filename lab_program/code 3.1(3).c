//3.WAP to check if three points (x1,y1), (x2,y2) and (x3,y3) are collinear or not.
#include <stdio.h>
int main() {
          int x1,y1,x2,y2,x3,y3,area;
          printf ("Enter points");
          scanf ("%d %d %d %d %d %d",&x1,&y1,&x2,&y2,&x3,&y3);
          area = (x1*(y2-y3)) + (x2*(y3-y1)) + (x3*(y1-y2));
          if (area == 0)
          {
              printf ("Points are collinear");
          }
          else
          {
              printf ("Points are not collinear");
          }
          return 0;
}

