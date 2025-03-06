
#include<iostream>
#include<math.h>
using namespace std;
int main(){
  
int n;
cout<<"Enter the value of n"<<endl;
cin>>n;
float x[n],y[n],a,b,c;
float xsum=0,ysum=0,xxsum=0,xxxsum=0,xxxxsum=0,xysum=0,xxysum=0;
for(int i=1;i<=n;i++){
cout<<"Enter the value of x["<<i<<"]"<<endl;
cin>>x[i];
cout<<"Enter the value of y["<<i<<"]"<<endl;
cin>>y[i];
}
for(int i=1;i<=n;i++){
xsum=xsum+x[i];
ysum=ysum+y[i];
xxsum=xxsum+x[i]*x[i];
xxxsum=xxxsum+x[i]*x[i]*x[i];
xxxxsum=xxxxsum+x[i]*x[i]*x[i]*x[i];
xysum=xysum+x[i]*y[i];
xxysum=xxysum+x[i]*x[i]*y[i];
}
cout<<"Augmented matrix is given below:"<<endl;
cout<<n<<"  "<<xsum<<"  "<<xxsum<<"  "<<"a0"<<"  "<<ysum<<endl;
cout<<xsum<<"  "<<xxsum<<"  "<<xxxsum<<"  "<<"a1"<<"  "<<xysum<<endl;
cout<<xxsum<<"  "<<xxxsum<<"  "<<xxxxsum<<"  "<<"a2"<<"  "<<xxysum<<endl;
cout<<"Now please solve this matrix by yourself and enter the value of a,b and c"<<endl;
cin>>a>>b>>c;
cout<<"Value of a is "<<a<<" b is "<<b<<" and c is "<<c<<endl<<endl;

cout<<"The quadratic curve is y="<<a<<"+"<<b<<"x"<<c<<"x^2"<<endl;
return 0;
}