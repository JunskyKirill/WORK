// написать программу решающую математическую функцию
// условие в телеграмме

#include <stdio.h>
#include <math.h>

int main()
{
   double x;
   printf ( "Plese enter x: ");
   scanf ( "%1x", &x );



   const double hisl = (2 * cos( x - M_PI / 6.)) + sqrt( 2 );
   const double znam = (1 /( 2 * log (x))) + pow(sin (x*x),2 );
   const double result = exp(3*x)*(hisl/znam);

   printf("Result Y= %f\n", result);


    return 0;
}
