//boolean
#include<iostream>
using namespace std;
bool checkMember(int n){
    int a=0,b=1,sum=0;
    // sum=a+b;
    // for(int i=2;i<=n;i++)
    while(a<n)
    {
        sum=a+b;
        a=b;
        b=sum;
    }
    if(a==n){
        return true;
    }
    return false;
}
int main()
{
    int n;
  cin >> n ;
  if(checkMember(n)){
    cout << "true" << endl;
  }else{
    cout << "false" << endl;
  }
}
