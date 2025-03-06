#include<iostream>
using namespace std;

double f(double x){
  return x*x+5*x-9;
}

int main(){
  double high,low,integration=0,ans,diff;
  int intervals;


  cout<<"Enter the higher bound : ";
  cin>>high;

  cout<<"Enter the lower bound : ";
  cin>>low;

  cout<<"Enter the  even number of trapezoids : ";
  cin>>intervals;


  diff=(high-low)/intervals;

  integration = f(low)+f(high);
  for(int i=1;i<intervals;++i){
    if(i%2==1){
      integration+=4*f(low+i*diff);
    }else{
      integration+=2*f(low+diff*i);
    }
  }
  integration*=diff/3;

  cout<<"The required integration is : "<<integration<<endl;
}