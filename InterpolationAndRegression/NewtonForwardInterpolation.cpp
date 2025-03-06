#include<iostream>
#include<math.h>
using namespace std;
int main(){
    float x[100][100],fx[100][100],n,ip,h,s,s1,res;
    int fact;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter the value of x:"<<i<<endl;
        cin>>x[i][0];
        cout<<"Enter the value of f(x):"<<i<<endl;
        cin>>fx[i][1];
    }
for(int j=2;j<=n;j++){
    for(int i=0;i<n-j+1;i++){
        fx[i][j]=fx[i+1][j-1]-fx[i][j-1];
    }
}
for(int i=0;i< n;i++)
 {
  cout << x[i][0];
  for(int j=1;j<n-i+1;j++)
  {
   cout<<"\t"<< fx[i][j];
  }
  cout<< endl;
 }
  cout<<"Enter the interpolation point"<<endl;
    cin>>ip;
 h=x[1][0]-x[0][0];
cout<<"The difference is:"<<h<<endl;
s=(ip-x[0][0])/h;
cout<<"The value of s is:"<<s<<endl;
res=fx[0][1];
s1=s;
fact=1;
for(int b=2;b<=n;b++){
   res =res+(s1*fx[0][b])/fact;
   fact=fact*b;
   s1=s1*(s-(b-1));
}
cout<<"Result is :"<<res;
    return 0;
}