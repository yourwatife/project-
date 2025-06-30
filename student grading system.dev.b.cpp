#include <iostream>
using namespace std;
int main()
{
int score , grade,q,w,s,x,v,h,j,n,m,y,tcp,tlu,GPA,a;
char name[25],department[15];
cout<< "This program is to compute any students cgpa" <<endl;
cout<<"\nenter the student's name:  " <<endl;
cin>>  name;
cout<< "\nenter the student's department:  " <<endl;
cin>>  department;
cout<< "\nenter student score for MTH111: " <<endl;
cin>> score;


if (score>=70 && score<=100)    {
cout<< "\nYour grade is A which is 5 points" <<endl;
q=3*5;
}
else if  (score>=60 && score<=69)      {
cout<< "\nYour grade is B which is 4 points" <<endl;
q=3*4;
}
else if  (score>=50 && score<=59)   {
cout<< "\nYour grade is C which is 3 points" <<endl;
q=3*3;
}
else if  (score>=45 && score<=49)  {
cout << "\nYour grade is D which is 2 points" <<endl;
q=3*2;
}
else if  (score>=40 && score<=44)  {
cout<< "\nYour grade is E which is 1 points" <<endl;
q=3*1;
}
else if  (score>=0 && score<=39)   {
    cout<< "\nYour grade is F which is 0 points" <<endl;
q=3*0;
}
cout<< "\nenter student score for MTH113: " <<endl;
cin>> score;


if (score>=70 && score<=100)   {
cout<< "\nYour grade is A which is 5 points" <<endl;
w=3*5;
}

else if(score>=60 && score<=69)  {
cout<< " \nYour grade is B which is 4 points" <<endl;
w=3*4;
}
else if(score>=50 && score<=59)   {
cout<< "\nYour grade is C which is 3 points" <<endl;
w=3*3;
}
else if(score>=45 && score<=49)  {
cout<< "\nYour grade is D which is 2 points" <<endl;
w=3*2;
}
else if(score>=40 && score<=44)  {
cout<< "\nYour grade is E which is 1 points" <<endl;
w=3*1;
}
else if(score>=0 && score<=39)   {
    cout<< "\nYour grade is F which is 0 points" <<endl;
w=3*0;
}
cout<< "\nenter student score for bio111: " <<endl;
cin>> score;


if (score>=70 && score<=100)    {
cout<< "\nYour grade is A which is 5 points" <<endl;
s=3*5;
}
else if  (score>=60 && score<=69)      {
cout<< "\nYour grade is B which is 4 points" <<endl;
s=3*4;
}
else if  (score>=50 && score<=59)   {
cout<< "\nYour grade is C which is 3 points" <<endl;
s=3*3;
}
else if  (score>=45 && score<=49)  {
cout<< "\nYour grade is D which is 2 points" <<endl;
s=3*2;
}
else if  (score>=40 && score<=44)  {
cout<< "\nYour grade is E which is 1 points" <<endl;
s=3*1;
}
else if  (score>=0 && score<=39)   {
cout<< "\nYour grade is F which is 0 points" <<endl;
s=3*0;
}
cout<< "\nenter student score for phy111: " <<endl;
cin>> score;


if (score>=70 && score<=100)   {
cout<< "\nYour grade is A which is 5 points" <<endl;
x=3*5;
}
else if  (score>=60 && score<=69)      {
cout<< "\nYour grade is B which is 4 points" <<endl;
x=3*4;
}
else if  (score>=50 && score<=59)   {
cout<< "\nYour grade is C which is 3 points" <<endl;
x=3*3;
}
else if  (score>=45 && score<=49)  {
cout<< "\nYour grade is D which is 2 points" <<endl;
x=3*2;
}
else if  (score>=40 && score<=44)  {
cout<< "\nYour grade is E which is 1 points" <<endl;
x=3*1;
}
else if  (score>=0 && score<=39)   {
    cout<< "\nYour grade is F which is 0 points" <<endl;
x=3*0;
}
cout<< "\nenter student score for CSC111: " <<endl;
cin>> score;


if (score>=70 && score<=100)    {
cout<< "\nYour grade is A which is 5 points" <<endl;
v=3*5;
}
else if  (score>=60 && score<=69)      {
cout<< "\nYour grade is B which is 4 points" <<endl;
v=3*4;
}
else if  (score>=50 && score<=59)   {
cout<< "\nYour grade is C which is 3 points" <<endl;
v=3*3;
}
else if  (score>=45 && score<=49)  {
cout<< "\nYour grade is D which is 2 points" <<endl;
v=3*2;
}
else if  (score>=40 && score<=44)  {
cout<< "\nYour grade is E which is 1 points" <<endl;
v=3*1;
}
else if(score>=0 && score<=39)   {
    cout<< "\nYour grade is F which is 0 points" <<endl;
v=3*0;
}
cout<< "\nenter student score for GNS111: " <<endl;
cin>> score;


if (score>=70 && score<=100)    {
cout<< "\nYour grade is A which is 5 points" <<endl;
h=2*5;
}
else if (score>=60 && score<=69)      {
cout<< "\nYour grade is B which is 4 points" <<endl;
h=2*4;
}
else if  (score>=50 && score<=59)   {
cout<< "\nYour grade is C which is 3 points" <<endl;
h=2*3;
}
else if  (score>=45 && score<=49)  {
cout<< "\nYour grade is D which is 2 points" <<endl;
h=2*2;
}
else if  (score>=40 && score<=44)  {
cout<< "\nYour grade is E which is 1 points" <<endl;
h=2*1;
}
else if  (score>=0 && score<=39)   {
    cout<< "\nYour grade is F which is 0 points" <<endl;
h=2*0;
}
cout<< "\nenter student score for lib11: " <<endl;
cin>> score;


if (score>=70 && score<=100)    {
cout<< "\nYour grade is A which is 5 points" <<endl;
m=2*5;
}
else if  (score>=60 && score<=69)      {
cout<< "\nYour grade is B which is 4 points" <<endl;
m=2*4;
}
else if  (score>=50 && score<=59)   {
cout<< "\nYour grade is C which is 3 points" <<endl;
m=2*3;
}
else if  (score>=45 && score<=49)  {
cout<< "\nYour grade is D which is 2 points" <<endl;
m=2*2;
}
else if  (score>=40 && score<=44)  {
cout<< "\nYour grade is E which is 1 points" <<endl;
m=2*1;
}
else if  (score>=0 && score<=39)   {
    cout<< "\nYour grade is F which is 0 points" <<endl;
m=2*0;
}
cout<< "\nenter student score for phy117: " <<endl;
cin>> score;


if (score>=70 && score<=100)    {
cout<< "\nYour grade is A which is 5 points" <<endl;
n=1*5;
}
else if  (score>=60 && score<=69)      {
cout<< "\nYour grade is B which is 4 points" <<endl;
n=1*4;
}
else if  (score>=50 && score<=59)   {
cout<< "\nYour grade is C which is 3 points" <<endl;
n=1*3;
}
else if  (score>=45 && score<=49)  {
cout<< "\nYour grade is D which is 2 points" <<endl;
n=1*2;
}
else if  (score>=40 && score<=44)  {
cout<< "\nYour grade is E which is 1 points" <<endl;
n=1*1;
}
else if  (score>=0 && score<=39)   {
cout<< "\nYour grade is F which is 0 points" <<endl;
n=1*0;
}
cout<< "\nenter student score for chm117: "<<endl;
cin>> score;


if (score>=70 && score<=100)    {
cout<< "\nYour grade is A which is 5 points" <<endl;
j=1*5;
}
else if  (score>=60 && score<=69)      {
cout<< "\nYour grade is B which is 4 points" <<endl;
j=1*4;
}
else if  (score>=50 && score<=59)   {
cout<< "\nYour grade is C which is 3 points" <<endl;
j=1*3;
}
else if  (score>=45 && score<=49)  {
cout<< "\nYour grade is D which is 2 points" <<endl;
j=1*2;
}
else if  (score>=40 && score<=44)  {
cout<<"\nYour grade is E which is 1 points" <<endl;
j=1*1;
}
else if  (score>=0 && score<=39)   {
    cout<< "\nYour grade is F which is 0 points" <<endl;
    j=1*0;
}
cout<< "\nenter student score for bio117: " <<endl;
cin>> score;


if (score>=70 && score<=100)    {
cout<< "\nYour grade is A which is 5 points" <<endl;
y=1*5;
}
else if  (score>=60 && score<=69)      {
cout<<"\nYour grade is B which is 4 points" <<endl;
y=1*4;
}
else if  (score>=50 && score<=59)   {
cout<< "\nYour grade is C which is 3 points" <<endl;
y=1*3;
}
else if  (score>=45 && score<=49)  {
    cout<< "\nYour grade is D which is 2 points" <<endl;
y=1*2;
}
else if  (score>=40 && score<=44)  {
cout<< "\nYour grade is E which is 1 points" <<endl;
y=1*1;
}
else if  (score>=0 && score<=39)   {
cout<< "\nYour grade is F which is 0 points" <<endl;
y=1*0;
}



tlu=21;
tcp=q+s+w+x+v+h+j+m+n+y;
GPA=tcp/tlu;
cout<< "\n\nyour GPA is:  ";
cout<< "the result is"<<GPA;

if(GPA>=4.5 && GPA<=5.0)   {
cout<< "\nYou are first class student" <<endl;
}
else if(GPA>=3.5 && GPA<=4.49)   {
    cout<< "\nYou are a second class upper student" <<endl;
}
else if(GPA>=3.0 && GPA<=3.49)   {
cout<< "\nYou are a second class lower student" <<endl;
}
else if(GPA>=2.5 && GPA<=2.99)   {
cout<< "\nYou are third class student" <<endl;
}
else if(GPA>=2.0 && GPA<=2.49)   {
cout<< "\nYou are a pass student" <<endl;
}
else        {
    cout<< "\nYou failed" <<endl;
}
return 0;
} 
#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	return 0;
}
