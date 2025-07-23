#include <iostream>
using namespace std;

void towerofhanoi(int n,int a,int b,int c){
  if(n==0){return;}
  towerofhanoi(n-1,a,c,b);
  cout<<a<<" "<<c<<endl;
  towerofhanoi(n-1,b,a,c);
}
int main() 
{
    int n;
    cin>>n;
    towerofhanoi(n,1,2,3);
}