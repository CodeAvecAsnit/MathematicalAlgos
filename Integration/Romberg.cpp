#include<iostream>
using namespace std;

double f(double x){
  return x*x+5*x-9;
}


int getpower( int a,int b){
  if(b==0){
    return 1;
  }else{
    return a*getpower(a,b-1);
  }
}


double Integrate(double b,double a,int vi){
  double diff=(b-a)/vi;
  double inte= f(a)+f(b);
  for(int i=1;i<vi;++i){
    inte+=2*f(vi*i+a);
  }
  inte *=diff/2;
  return inte; 
}

int main(){
  try{
    int n;
  double I[10][10];
  double diff,high,low;


  cout<<"Enter the upper bound : ";
  cin>>high;

  cout<<"Enter the lower bound : ";
  cin>>low;

  I[0][0]=((high-low)/2)*(f(low)+f(high));

 


  cout<<"Enter the R that you want to calculate the romberg integration till : ";
  cin>>n;


  for(int i=1;i<=n;++i){
    for(int j=1;j<=i;++j){
        if (j==1){
          I[1][i]=Integrate(high,low,getpower(2,i));
        }else{
          I[j][i]=((getpower(4,i-1)*I[j-1][i])-I[j-1][i-1])/(getpower(4,i)-1);
        }
    }
  }

  cout<<"The required Romberg Integration at R("<<n<<","<<n<<"is : "<<I[n][n];
  return 0;
  }catch(exception e){
    cout<<"Error"<<endl;
  }


}