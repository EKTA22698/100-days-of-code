//5.WAP using ternary operator, the user should input the length and breadth of a rectangle, one has to find out which rectangle has the highest perimeter. The minimum number of rectangles should be three.
#include <stdio.h>
int main() {
          int l1,b1,l2,b2,l3,b3,p1,p2,p3,max;
          printf ("Enter the lengths and breadths of three rectangles:");
          scanf ("%d %d %d %d %d %d",&l1,&b1,&l2,&b2,&l3,&b3);
          p1=2*(l1+b1);
          p2=2*(l2+b2);
          p3=2*(l3+b3);
          max=(p1>p2)?((p1>p3)?p1:p3):((p2>p3)?p2:p3);
          if (max==p1)
          printf ("Highest perimeter %d of rectangle1",max);
          else if (max==p2)
          printf  ("Highest perimeter %d of rectangle2",max);
          else
           printf ("Highest perimeter %d of rectangle3",max);
  return 0;
}

