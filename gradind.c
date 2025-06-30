#include <stdio.h>
   int main () {
int grade,Q,W,S,X,V,H,J,N,M,Y,tcp,tlu,a;
char name[25],department[15];
float score, GPA;
printf("RESULT PROCESSING SYSTEM WITH C TO COMPUTE ANY STUDENT GPA");
printf("\n\n");
printf("ENTER STUDENT NAME: ");
scanf("%s", &name);
printf("\n\n");
printf("ENTER STUDENT DEPARTMENT:");
scanf("%s", &department);
printf("\n\n");
printf("ENTER YOUR SCORE FOR MTH 111:");
scanf("%f", &score);

printf("\n\n");

if (score>=70 && score<=100)    {
printf("YOUR GRADE IS A AND GRADE POINT IS 5");
Q=3*5;
}
else if  (score>=60 && score<=69)      {
printf("YOUR GRADE IS B AND GRADE POINT IS 4");
Q=3*4;
}
else if  (score>=50 && score<=59)   {
printf("YOUR GRADE IS C AND GRADE POINT IS 3");
Q=3*3;
}
else if  (score>=45 && score<=49)  {
printf("YOUR GRADE IS D AND GRADE POINT IS 2");
Q=3*2;
}
else if  (score>=40 && score<=44)  {
printf("YOUR GRADE IS E AND GRADE POINT IS 1");
Q=3*1;
}
else if  (score>=0 && score<=39)   {
    printf("YOUR GRADE IS F AND GRADE POINT IS 0");
Q=3*0;
}

printf("\n\n");

printf("ENTER YOUR SCORE FOR MTH 113: ");
scanf("%f", &score);
printf("\n\n");

if (score>=70 && score<=100)   {
printf("YOUR GRADE IS A AND GRADE POINT IS 5");
W=3*5;
}

else if(score>=60 && score<=69)  {
printf("YOUR GRADE IS B AND GRADE POINT IS 4");
W=3*4;
}
else if(score>=50 && score<=59)   {
printf("YOUR GRADE IS C AND GRADE POINT IS 3");
W=3*3;
}
else if(score>=45 && score<=49)  {
printf("YOUR GRADE IS D AND GRADE POINT IS 2");
W=3*2;
}
else if(score>=40 && score<=44)  {
printf("YOUR GRADE IS E AND GRADE POINT IS 1");
W=3*1;
}
else if(score>=0 && score<=39)   {
    printf("YOUR GRADE IS F AND GRADE POINT IS 0");
W=3*0;
}
  printf("\n\n");
printf("ENTER YOUR SCORE FOR BIO 111: ");
    scanf("%f", &score);
printf("\n\n");

if (score>=70 && score<=100)    {
printf("YOUR GRADE IS A AND GRADE POINT IS 5");
S=3*5;
}
else if  (score>=60 && score<=69)      {
printf("YOUR GRADE IS B AND GRADE POINT IS 4");
S=3*4;
}
else if  (score>=50 && score<=59)   {
printf("YOUR GRADE IS C AND GRADE POINT IS 3");
S=3*3;
}
else if  (score>=45 && score<=49)  {
printf("YOUR GRADE IS D AND GRADE POINT IS 2");
S=3*2;
}
else if  (score>=40 && score<=44)  {
printf("YOUR GRADE IS E AND GRADE POINT IS 1");
S=3*1;
}
else if  (score>=0 && score<=39)   {
printf("YOUR GRADE IS F AND GRADE POINT IS 0");
S=3*0;
}

printf("\n\n");

printf("ENTER YOUR SCORE FOR PHY 111: ");
scanf("%f", &score);
printf("\n\n");

if (score>=70 && score<=100)   {
printf("YOUR GRADE IS A AND GRADE POINT IS 5");
X=3*5;
}
else if  (score>=60 && score<=69)      {
printf("YOUR GRADE IS B AND GRADE POINT IS 4");
X=3*4;
}
else if  (score>=50 && score<=59)   {
printf("YOUR GRADE IS C AND GRADE POINT IS 3");
X=3*3;
}
else if  (score>=45 && score<=49)  {
printf("YOUR GRADE IS D AND GRADE POINT IS 2");
X=3*2;
}
else if  (score>=40 && score<=44)  {
printf("YOUR GRADE IS E AND GRADE POINT IS 1");
X=3*1;
}
else if  (score>=0 && score<=39)   {
    printf("YOUR GRADE IS F AND GRADE POINT IS 0");
X=3*0;
}
 printf("\n\n");
printf("ENTER YOUR SCORE FOR CSC 111:");
scanf("%f", &score);
printf("\n\n");

if (score>=70 && score<=100)    {
printf("YOUR GRADE IS A AND GRADE POINT IS 5");
V=3*5;
}
else if  (score>=60 && score<=69)      {
printf("YOUR GRADE IS B AND GRADE POINT IS 4");
V=3*4;
}
else if  (score>=50 && score<=59)   {
printf("YOUR GRADE IS C AND GRADE POINT IS 3");
V=3*3;
}
else if  (score>=45 && score<=49)  {
printf("YOUR GRADE IS D AND GRADE POINT IS 2");
V=3*2;
}
else if  (score>=40 && score<=44)  {
printf("YOUR GRADE IS E AND GRADE POINT IS 1");
V=3*1;
}
else if(score>=0 && score<=39)   {
    printf("YOUR GRADE IS F AND GRADE POINT IS 0");
V=3*0;
}
printf("\n\n");

printf("ENTER YOUR SCORE FOR GNS111:");
scanf("%f", &score);

 printf("\n\n");
 
if (score>=70 && score<=100)    {
printf("YOUR GRADE IS A AND GRADE POINT IS 5");
H=2*5;
}
else if (score>=60 && score<=69)      {
printf("YOUR GRADE IS B AND GRADE POINT IS 4");
H=2*4;
}
else if  (score>=50 && score<=59)   {
printf("YOUR GRADE IS C AND GRADE POINT IS 3");
H=2*3;
}
else if  (score>=45 && score<=49)  {
printf("YOUR GRADE IS D AND GRADE POINT IS 2");
H=2*2;
}
else if  (score>=40 && score<=44)  {
printf("YOUR GRADE IS E AND GRADE POINT IS 1");
H=2*1;
}
else if  (score>=0 && score<=39)   {
    printf("YOUR GRADE IS F AND GRADE POINT IS 0");
H=2*0;
}

printf("\n\n");
printf("ENTER YOUR SCORE FOR LIB 111:");
scanf("%f", &score);

printf("\n\n");
if (score>=70 && score<=100)    {
printf("YOUR GRADE IS A AND GRADE POINT IS 5");
M=2*5;
}
else if  (score>=60 && score<=69)      {
     printf("YOUR GRADE IS B AND GRADE POINT IS 4");
M=2*4;
}
else if  (score>=50 && score<=59)   {
printf("YOUR GRADE IS C AND GRADE POINT IS 3");
M=2*3;
}
else if  (score>=45 && score<=49)  {
printf("YOUR GRADE IS D AND GRADE POINT IS 2");
M=2*2;
}
else if  (score>=40 && score<=44)  {
printf("YOUR GRADE IS E AND GRADE POINT IS 1");
M=2*1;
}
else if  (score>=0 && score<=39)   {
    printf("YOUR GRADE IS F AND GRADE POINT IS 0");
M=2*0;
}

printf("\n\n");

    printf("ENTER YOUR SCORE FOR PHY 117: ");
scanf("%f",&score);

printf("\n\n");

if (score>=70 && score<=100)    {
printf("YOUR GRADE IS A AND GRADE POINT IS 5");
N=1*5;
}
else if  (score>=60 && score<=69)      {
printf("YOUR GRADE IS B AND GRADE POINT IS 4");
N=1*4;
}
else if  (score>=50 && score<=59)   {
     printf("YOUR GRADE IS C AND GRADE POINT IS 3");
N=1*3;
}
else if  (score>=45 && score<=49)  {
printf("YOUR GRADE IS D AND GRADE POINT IS 2");
N=1*2;
}
else if  (score>=40 && score<=44)  {
printf("YOUR GRADE IS E AND GRADE POINT IS 1");
N=1*1;
}
else if  (score>=0 && score<=39)   {
printf("YOUR GRADE IS F AND GRADE POINT IS 0");
N=1*0;
}

   printf("\n\n");
printf("ENTER SCORE FOR CHM 117: ");
scanf("%f", &score);
printf("\n\n");


if (score>=70 && score<=100)    {
printf("YOUR GRADE IS A AND GRADE POINT IS 5");
J=1*5;
}
else if  (score>=60 && score<=69)      {
printf("YOUR GRADE IS B AND GRADE POINT IS 4");
J=1*4;
}
else if  (score>=50 && score<=59)   {
printf("YOUR GRADE IS C AND GRADE POINT IS 3");
J=1*3;
}
else if  (score>=45 && score<=49)  {
printf("YOUR GRADE IS D AND GRADE POINT IS 2");
J=1*2;
}
else if  (score>=40 && score<=44)  {
printf("YOUR GRADE IS E AND GRADE POINT IS 1");
J=1*1;
}
else if  (score>=0 && score<=39)   {
    printf("YOUR GRADE IS F AND GRADE POINT IS 0");
    J=1*0;
}

printf("\n\n");
printf("ENTER YOUR SCORE FOR BIO 117: ");
scanf("%f", &score);
printf("\n\n");

if (score>=70 && score<=100)    {
printf("YOUR GRADE IS A AND GRADE POINT IS 5");
Y=1*5;
}
else if  (score>=60 && score<=69)      {
printf("YOUR GRADE IS B AND GRADE POINT IS 4");
Y=1*4;
}
else if  (score>=50 && score<=59)   {
printf("YOUR GRADE IS C AND GRADE POINT IS 3");
Y=1*3;
}
else if  (score>=45 && score<=49)  {
    printf("YOUR GRADE IS D AND GRADE POINT IS 2");
Y=1*2;
}
else if  (score>=40 && score<=44)  {
printf("YOUR GRADE IS E AND GRADE POINT IS 1");
Y=1*1;
}
else if  (score>=0 && score<=39)   {
printf("YOUR GRADE IS F AND GRADE POINT IS 0");
Y=1*0;
}



tlu=21;
tcp=Q+S+W+X+V+H+J+M+N+Y;
GPA=tcp/tlu;
printf("\n\n");
printf("your GPA is:  ");
printf("%.2f", GPA);

printf("\n\n");
if(GPA>=4.5 && GPA<=5.0)   {
printf("FIRST CLASS STUDENT");
}
else if(GPA>=3.5 && GPA<=4.49)   {
    printf("SECOND CLASS UPPER");
}
else if(GPA>=3.0 && GPA<=3.49)   {
printf("SECOND CLASS LOWER");
}
else if(GPA>=2.5 && GPA<=2.99)   {
printf("THIRD CLASS");
}
else if(GPA>=2.0 && GPA<=2.49)   {
printf("PASS STUDENT");
}
else        {
    printf("FAIL");
}
return 0;
}

