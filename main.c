#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#define PI 3.1415

void design();
void operation();
void addition();
void subtraction();
void multiplication();
void division();
void average();
void square_root();
void power();
void quad_eqn();
void sin_function();
void cosine_function();
void tan_function();
void inverse_sin();
void inverse_cos();
void inverse_tan();
void ln_function();
void log_function();
void exponential();
void factorial();
double fact(double);
void permutation();
void combination();
void is_odd_even();
void is_prime();
void degree_radian();

int main()
{

    while(1)
    {   int choice;
        system("cls");
        design();
        operation();
        printf("\n\n\tPLEASE ENTER A CORRESPONDING NUMBER TO PERFORM A PARTICULAR OPERATION: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                {
                    addition();
                    break;
                }
            case 2:
                {
                    subtraction();
                    break;
                }
            case 3:
                {
                    multiplication();
                    break;
                }
            case 4:
                {
                    division();
                    break;
                }
            case 5:
                {
                    average();
                    break;
                }
            case 6:
                {
                    square_root();
                    break;
                }
            case 7:
                {
                    power();
                    break;
                }
            case 8:
                {
                    quad_eqn();
                    break;
                }
            case 9:
                {
                    sin_function();
                    break;
                }
            case 10:
                {
                    cosine_function();
                    break;
                }
            case 11:
                {
                    tan_function();
                    break;
                }
            case 12:
                {
                    inverse_sin();
                    break;
                }
            case 13:
                {
                    inverse_cos();
                    break;
                }
            case 14:
                {
                    inverse_tan();
                    break;
                }
            case 15:
                {
                    ln_function();
                    break;
                }
            case 16:
                {
                    log_function();
                    break;
                }
            case 17:
                {
                    exponential();
                    break;
                }
            case 18:
                {
                    permutation();
                    break;
                }
            case 19:
                {
                    combination();
                    break;
                }
            case 20:
                {
                    factorial();
                    break;
                }
            case 21:
                {
                    is_odd_even();
                    break;
                }
            case 22:
                {
                    is_prime();
                    break;
                }
            case 23:
                {
                    degree_radian();
                    break;
                }

            case 24:
                {
                    printf("\n\n\t\t\t   THANK YOU FOR BEING HERE..\n\t\t\t\tPLEASE ENTER ANY KEY TO EXIT.\n\n\n");
                    getch();
                    exit(0);
                }
            default:
                printf("\n\t\tIt is an Invalid Choice! Please Enter any key to enter a valid choice.. ");
                getch();
        }
    }
    getch();
}

void design()
{
    int j,k;
    printf("\n\t\t\t\t<<<! WELCOME !>>>");
    printf("\n\t\t   ###### The Scientific Calculator ######");
    printf("\n\t\t\t**352**| pps project |**329***");
    printf("\n\t\t\t **335**| **353** |**343**");
    printf("\n\t\t\t *>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<*");
    printf("\n\t\t\t******************<>*****************");
    printf("\n\t\t     ~~~~~~~~~~~~~~~~~~>()<~~~~~~~~~~~~~~~~~");
}

void operation()
{
   printf("\n\n\n\t\t\t\t  <<- OPERATIONS ->>");
        printf("\n\t\t  -------------------------------------------------");
        printf("\n\t\t  | 1.Addition | 2.Subtraction | 3.Multiplication |");
        printf("\n\t\t  | 4.Division | 5.Average     | 6.Square Root    |");
        printf("\n\t\t  | 7.Power    | 8.quad eqn    | 9.sin()          |");
        printf("\n\t\t  | 10.cos()   | 11.tan()      | 12.sin^-1()      |");
        printf("\n\t\t  | 13.cos^-1()| 14.tan^-1()   | 15.ln()          |");
        printf("\n\t\t  | 16.log()   | 17.e^x        | 18.nPr           |");
        printf("\n\t\t  | 19.nCr     | 20.x!         | 21.Is odd or even|");
        printf("\n\t\t  | 22.Is prime| 23.deg <=> rad| 24.exit          |");
        printf("\n\t\t  -------------------------------------------------");

}

void addition()
{
    int sum=0,n,i;
    printf("\n\t\tEnter how many number you want to add: ");
    scanf("%d",&n);
    int add[n];
    printf("\n\t\tEnter %d numbers: ",n);
    for(i=0;i<n;i++)
        scanf("%d" ,&add[i]);
    for(i=0;i<n;i++)
        sum = sum + add[i];
    printf("\n\t\tAddition of the %d numbers is %d\n",n,sum);
    getch();
}

void subtraction()
{

    int diff,n,i;

    printf("\n\t\tEnter how many number you want to subtract: ");
    scanf("%d",&n);
    int sub[n];
    printf("\n\t\tEnter %d numbers: ",n);
    for(i=0;i<n;i++)
        scanf("%d" ,&sub[i]);
    diff=sub[0]-sub[1];
    for(i=2;i<n;i++)
        diff=diff-sub[i];
    printf("\n\t\tsubtraction of the %d numbers is %d\n",n,diff);
    getch();
}

void multiplication()
{
    int i,mult=1,n;
    printf("\n\t\tEnter, how many number you want to multiply: ");
    scanf("%d",&n);
    int product[n];
    printf("\n\t\tEnter %d numbers: ",n);
    for(i=0;i<n;i++)
        scanf("%d",&product[i]);
    for(i=0;i<n;i++)
        mult = mult*product[i];
    printf("\n\t\tProduct of the given numbers is %d",mult);
    getch();
}

void division()
{
    int value;
    float n;
    float div;
    printf("\n\t\tEnter the value you want to divide: ");
    scanf("%d",&value);
    printf("\n\t\tEnter the value of divider: ");
    scanf("%f",&n);
    div = value/(n+0.0);
    printf("\n\t\tAnswer for division is %.2f",div);
    getch();
}

void average()
{
    int i;
    int sum=0;
    float avg;
    int n;

    printf("\n\t\tEnter, how many numbers you want to find average: ");
    scanf("%d",&n);
    int av[n];
    printf("\n\t\tEnter %d numbers: ",n);
    for(i=0;i<n;i++)
        scanf("%d",&av[i]);
    for(i=0;i<n;i++)
        sum=sum+av[i];

    avg=sum/(n+0.0);
    printf("\n\t\tAverage of the given numbers is %.2f",avg);
    getch();
}

void square_root()
{
    int n;
    double sqare;
    printf("\n\t\tEnter a number you want to find square root: ");
    scanf("%d",&n);
    sqare = sqrt(n);
    printf("\n\t\tSquare root of %d is %.3lf",n,sqare);
    getch();
}

void power()
{
    int n,i,pwr;
    long int result=1;
    printf("\n\t\tEnter a number you want to find power of: ");
    scanf("%d",&n);
    printf("\n\t\tEnter value of power %d^n,  n = ",n);
    scanf("%d",&pwr);
    for(i=1;i<=pwr;i++)
    {
        result = result * n;
    }
    printf("\n\t\tAnswer for %d to the Power %d is %ld",n,pwr,result);
    getch();
}

void quad_eqn()
{

    double a, b, c, discriminant, root1, root2, realPart, imagPart;
    printf("Enter coefficients a, b and c of the quadratic equation: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    // condition for real and different roots
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("root1 = %.2lf and root2 = %.2lf", root1, root2);
    }

    // condition for real and equal roots
    else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        printf("root1 = root2 = %.2lf;", root1);
    }

    // if roots are not real
    else {
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("root1 = %.2lf+%.2lfi and root2 = %.2f-%.2fi", realPart, imagPart, realPart, imagPart);
    }
getch();

}

void sin_function()
{
   long int angle_degree;

    float angle_radian;
    printf("\n\t\tEnter the angle in degree: ");
    scanf("%ld",&angle_degree);
    angle_degree = (angle_degree +0.0);
    angle_radian = (angle_degree*PI)/180;
    float result = angle_radian;
    printf("\n\t\tValue of sin(%ld) is %.4f",angle_degree,sin(angle_radian));


    getch();

}

void cosine_function()
{
   long int angle_degree,i;
    float angle_radian,result;
    printf("\n\t\tEnter the angle in degree: ");
    scanf("%ld",&angle_degree);
    angle_degree = (angle_degree +0.0);
    angle_radian = (angle_degree*PI)/180;
    result = cos(angle_radian);
    printf("\n\t\tResult for cos(%ld) is : %.4f",angle_degree,result);

    getch();
}

void tan_function()
{
    long int angle_degree;
    float angle_radian;
    printf("\n\t\tEnter the angle in degree: ");
    scanf("%ld",&angle_degree);
    angle_radian = angle_degree*PI/180;
    printf("\n\t\tResult for tan(%ld) is %.4f",angle_degree,tan(angle_radian));
    getch();
}

void inverse_sin()
{
    double j,result;
    printf("\n\t\tEnter a value between 1 and -1: ");
    scanf("%lf",&j);
    result = asin(j)*(180/PI);
    printf("\n\t\tResult for sin^-1(%.2lf) is %.3lf degrees",j,result);
    getch();
}

void inverse_cos()
{
    double j,result;
    printf("\n\t\tEnter a value between 1 and -1: ");
    scanf("%lf",&j);
    result = acos(j)*(180/PI);
    printf("\n\t\tResult for cos^-1(%.2lf) is %.3lf degrees",j,result);
    getch();
}

void inverse_tan()
{
    double j,result;
    printf("\n\t\tEnter a value between 1 and -1: ");
    scanf("%lf",&j);
    result = atan(j)*(180/PI);
    printf("\n\t\tResult for tan^-1(%.2lf) is %.3lf degrees",j,result);
    getch();
}

void ln_function()
{
    double result,n;
    printf("\n\t\tEnter a number you want to find ln() of: ");
    scanf("%lf",&n);
    result = log(n);
    printf("\n\t\tResult for ln(%.2lf) is %.3lf",n,result);
    getch();
}

void log_function()
{
    double n;
    double result;
    printf("\n\t\tEnter a number you want to find log() of : ");
    scanf("%lf",&n);
    result = log10(n);
    printf("\n\t\tThe result for log(%.1lf) is %.3lf",n,result);
    getch();
}

void exponential()
{
    double n,result;
    printf("\n\t\tEnter the value you want to find e^x of: ");
    scanf("%lf",&n);
    result = exp(n);
    printf("\n\t\tResult for e^%.1lf is %.3lf",n,result);
    getch();
}

void permutation()
{

    double n,r;
    double result;
   printf("\n\t\tEnter the value of 'n' for nPr : ");
   scanf("%lf",&n);
   printf("\n\t\tEnter the value of 'r' for nPr : ");
   scanf("%lf",&r);
   result = fact(n)/(fact(n-r));
   printf("\n\t\tResult for   %.lfP%.0lf = %.2lf",n,r,result);
   getch();

}

double fact( double x)
{
    int i;
   double fact=1;
   for(i=x;i>=1;i--)
    fact=fact*i;
   return(fact);

}


void combination()
{
     double n,r;
    double ncr;
   printf("\n\t\tEnter the value of 'n' for nCr : ");
   scanf("%lf",&n);
   printf("\n\t\tEnter the value of 'r' for nCr : ");
   scanf("%lf",&r);
   ncr = fact(n)/(fact(r)*fact((n-r)));
   printf("\n\t\tResult for   %.lfC%.0lf = %.2lf",n,r,ncr);
   getch();

}

void factorial()
{
    int i;
    double n;
    double fact =1;
    printf("\n\t\tEnter the value of n you want to find the factorial of: ");
    scanf("%lf",&n);
    for(i=n;i>=1;i--)
    {
        fact = fact*i;
    }
    printf("\n\t\tThe result of factorial %.0lf! is %.2lf",n,fact);
    getch();
}

void is_odd_even()
{
    int n;
    printf("\n\t\tEnter a number to check whether even or odd: ");
    scanf("%d",&n);
    if(n%2==0)
        printf("\n\t\t%d is an even number.",n);
    else
        printf("\n\t\t%d is an odd number.",n);
    getch();

}


void is_prime()
{
    int n, i;
    printf("\n\t\tEnter a number to check prime or not: ");
    scanf("%d",&n);
    for(i=2; i<n; i++)
        if(n%i==0)
            break;

           if(i==n)
           {
               printf("\n\t\t%d is a prime number.\n\n" ,n);

           }
        else
           {
               printf("\n\t\t%d is not a Prime number\n\n" ,n);
           }
    getch();
}

void degree_radian()
{

    int select;
    char option;
    do
    {
        system("cls");
        design();
        printf("\n\n\n\t\tChoose from the following: ");
        printf("\n\n\t\t\t1.To Convert from Degree to Radian.");
        printf("\n\n\t\t\t2.To Convert from Radian to Degree.\n\n\t\t\tEnter your Choice: ");
        scanf("%d",&select);

           switch(select)
             {
               case 1:
                {
                    double n,rad;
                    printf("\n\t\t   Enter value of angle in degree:  ");
                    scanf("%lf",&n);
                    rad = (n*PI)/180;
                    printf("\n\t\t   %.2lf degree is = %.2lf radian",n,rad);
                    break;

                }

               case 2:
                {
                    double n, degree;
                    printf("\n\t\t   Enter value of angle in Radian: ");
                    scanf("%lf",&n);
                    degree = (180*n)/PI;
                    printf("\n\t\t   %.2lf radian is = %.2lf degree",n ,degree);
                    break;
                }
               default:
                {
                    printf("Invalid Choice! Press any key to continue..");
                    getch();
                }
             }
        printf("\n\n\t\t\tDo you want to continue. y/n?  ");
        option=getch();
    }while(option=='y' || option=='Y');
    getch();
}
