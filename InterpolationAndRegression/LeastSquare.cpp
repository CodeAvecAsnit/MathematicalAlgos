#include<iostream>
#include<math.h>
using namespace std;
int main(){
float x[100],fx[100],loga,b,a,p;
float xsum=0,ysum=0,sumly=0,xxsum=0,sumxly=0;
int n;
cout<<"Enter the value of n"<<endl;
cin>>n;
for(int i=1;i<=n;i++){
cout<<"Enter the value of a["<<i<<"]"<<endl;
cin>>x[i];
cout<<"Enter the value of b["<<i<<"]"<<endl;
cin>>fx[i];
}
for(int i=1;i<=n;i++){
xsum=xsum+x[i];
ysum=ysum+fx[i];
sumly=sumly+log(fx[i]);
xxsum=xxsum+x[i]*x[i];
sumxly=sumxly+x[i]*(log(fx[i]));
}
b=(n*sumxly-xsum*sumly)/(n*xxsum-xsum*xsum);
loga=sumly/n-b*(xsum/n);
cout<<"The value of b is "<<b<<" and log a is "<<loga<<endl<<endl;
a=exp(loga);
cout<<"The value of a is "<<a<<endl<<endl;

cout<<"The regression equation becomes y="<<a<<"+"<<b<<"x"<<endl<<endl;

cout<<"Enter value of x for calculation of equation"<<endl;
cin>>p;
cout<<"The value is given by y="<<a+b*p<<endl;
return 0;
}
