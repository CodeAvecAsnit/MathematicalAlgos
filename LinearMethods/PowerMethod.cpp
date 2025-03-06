#include<iostream>
#include<math.h>
#define max 10
using namespace std;
int main()
{
	 float a[max][max], x[max],x_new[max];
	 float temp,newval, oldval, error;
	 int i,j,n, step=1;
	 cout<<"Enter Order of Matrix: ";
	 cin>>n;
	 cout<<"Enter error: ";
	 cin>>error;
	 cout<<"Enter the augmented matrix "<< endl;
	 for(i=1;i<=n;i++)
	 {
		  for(j=1;j<=n;j++)
		  {
			   cout<<"a["<< i<<"]"<< j<<"]= ";
               cin>>a[i][j];
		  }
	 }
	 cout<<"Enter Initial Guess:"<< endl;
	 for(i=1;i<=n;i++)
	 {
		  cout<<"x["<< i<<"]= ";
		  cin>>x[i];
	 }
	 oldval = 1;
	 up:
	 for(i=1;i<=n;i++)
	 {
		  temp = 0.0;
		  for(j=1;j<=n;j++)
		  {
		   	temp = temp + a[i][j]*x[j];
		  }
		  x_new[i] = temp;
	 }
	 for(i=1;i<=n;i++)
	 {
	  	x[i] = x_new[i];
	 }
	 newval = fabs(x[1]);
	 for(i=2;i<=n;i++)
	 {
		  if(fabs(x[i])>newval)
		  {
		   newval = fabs(x[i]);
		  }
	 }
	 for(i=1;i<=n;i++)
	 {
	  	x[i] = x[i]/newval;
	 }
	 cout<< endl<< endl<<"STEP-"<< step<< endl;
	 cout<<"Eigen Value = "<< newval<< endl;
	 cout<<"Eigen Vector: "<< endl;
	 cout<<"[";
	 for(i=1;i<=n;i++)
	 {
	  	cout<< x[i]<<" ";
	 }
     cout<<"]";
	 if(fabs(newval-oldval)>error)
	 {
		  oldval=newval;
		  step++;
		  goto up;
	 }
	 return 0;
}