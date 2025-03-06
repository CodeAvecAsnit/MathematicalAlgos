#include<iostream>
using namespace std;

double f(double x,double y){
  return x*x+x*y+y*y;
}

int main(){
  double a,b,c,d,I;

  cout<<"Enter the higher bound for dy : ";
  cin>>d;

  cout<<"Enter the lower bound for dx : ";
  cin>>c;

  cout<<"Enter the higher bound for dx : ";
  cin>>b;

  cout<<"Enter the lower bound for dx : ";
  cin>>a;

  cout<<"The required Integration is : "<<((d-c)/2)*((b-a)/2)*(f(b,d)+f(b,c)+f(a,d)+f(a,c))<<endl;

}