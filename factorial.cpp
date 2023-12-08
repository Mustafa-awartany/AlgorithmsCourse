#include <iostream>

using namespace std;
long recursive_fact(long x){
  if(x==1)
  return 1;
  else
  return x*recursive_fact(x-1);
}
long iterative(long n){
long f=1;
  for(long i=1;i<=n;i++)
  f=f*i;
  return f;
}
int main()
{

cout<<"iterative methode"<<endl;
cout<<iterative(10000)<<endl;
cout<<"recursive methode"<<endl;
cout<<recursive_fact(10000)<<endl;
  }

