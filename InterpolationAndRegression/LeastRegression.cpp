#include<iostream>
using namespace std;
class lregression{
    private:
    int i,n,v;
    float x[100],y[100],a,b;
    float xsum;
    int ysum;
    int xxsum;
    int xysum;
    public:
    
    void getdata(){
        cout<<"Enter the value of n"<<endl;
        cin>>n;
        for(i=0;i<n;i++){
            cout<<"Enter the value of x["<<i<<"]"<<endl;
            cin>>x[i];
            cout<<"Enter the value of y["<<i<<"]"<<endl;
            cin>>y[i];
        }
    }
    
    void process(){
        for(i=0;i<=n;i++){
            xsum=xsum+x[i];
            ysum=ysum+y[i];
            xxsum=xxsum+x[i]*x[i];
            xysum=xysum+x[i]*y[i];
        }
b=(n*xysum-xsum*ysum)/(n*xxsum-(xsum*xsum));
a=ysum/n-b*xsum/n;
        
 cout<<"Value of a is "<<a<<" and b is "<<b<<endl;
cout<<"The least square equation is Y="<<a<<"x+"<<b<<endl;
    }
    
    void value(){
        cout<<"Enter the value of x"<<endl;
        cin>>v;
        cout<<"Value is "<<a*v+b<<endl;
    }
};
int main(){
    lregression l1;
    l1.getdata();
    l1.process();
    l1.value();
    return 0;
}