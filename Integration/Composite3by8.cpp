#include<iostream>
using namespace std;

double f(double x){
  return x*x + 5*x - 9;
}

int main(){
  double high, low, integration = 0,diff;
  int intervals;

  cout << "Enter the higher bound : ";
  cin >> high;

  cout << "Enter the lower bound : ";
  cin >> low;

  cout << "Enter the number of intervals (must be divisible by 3): ";
  cin >> intervals;


  diff = (high - low) / intervals;

  
  for(int i = 0; i <= intervals; ++i){
    double x = low + i * diff;
    if(i == 0 || i == intervals){
      integration += f(x); 
    }else if(i % 3 == 0){
      integration += 2 * f(x); 
    }else{
      integration += 3 * f(x); 
    }
  }

  integration *= (3 * diff) / 8;

  cout << "The required integration is : " << integration << endl;

  return 0;
}
