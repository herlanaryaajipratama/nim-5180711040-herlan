#include<iostream>
#include<math.h>
using namespace ::std;
double pangkatdesimal(int a,double b){

 return exp(b*log(a));
}int main (){

double a,b;
cout<<"masukan angka :";
cin>>a;
cout<<"masukan nilai pangkat:";
cin>>b;
cout<<endl;
cout<<"hasil :"<<pangkatdesimal(a,b);
return 0;
}
