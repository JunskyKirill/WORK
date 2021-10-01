// написать программу, определяющую, площадь какой фигуры больше : круга радиуса R, равностороннего треугольника с длиной стороны a или квадрата со стороной d

#include <stdio.h>
#include <math.h>
int main()
{
    float r;

    printf("Please Enter raduis: ");

    scanf( "%fr", &r );

    double sr = r*r*M_PI; //Площадь круга

    printf("Result Circle %f\n", sr);



    float a;

    printf("Please Enter a: ");

    scanf("%fa", &a );

     double hisl = sqrt(3);
     double znam = 4;
     double sa = (hisl / znam) * a * a; // Площадь треугольника

     printf("Result Triangle %f\n", sa);


     float d;

     printf("Please Enter d: ");

     scanf("%fa", &d );

     double sd = d * d; // Площадь квадрата

     printf("Result Square %f\n", sd);

     if (sr>sa & sr>sd){
         printf("S of Circle won!");

     }

     if (sa>sr & sa>sd){
         printf("S of Triangle won!");
     }


     if (sd>sr & sd>sa){
         printf("S of Square won!");
     }





    return 0;
}
