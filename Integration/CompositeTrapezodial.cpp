#include<iostream>
using namespace std;

double f(double x){
  return x*x+5*x-9;
}

int main(){
double high,low,integration = 0, ans=0;
int in;

cout<<"Enter the lower bound : ";
cin>>low;

cout<<"Enter the higher bound : ";
cin>>high;

cout<<"Enter the number of trapezoids : ";
cin>>in;


ans=(high-low)/in;

integration = f(low)+f(high);
for(int i=1;i<=in-1;++i){
  integration+=2*f(low+i*ans);
}
integration*= ans/2;

cout<<"The required integration is : "<<integration<<endl;
}