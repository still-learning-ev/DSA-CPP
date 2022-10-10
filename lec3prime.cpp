#include<iostream>
using namespace std;
int main(){
//check prime naive method

  cout<<"enter the number "<<endl;
  int n=0;
  cin>>n;
  if(n==1)
    cout<< "number is 1 please enter valid number"<<endl;
  else if(n==2 || n==3)
    cout<<" this is only even prime no"<<endl;
  else if(n%2==0 )
    cout<<"not a prime number"<<endl;
  else{
    for(int i=3;i<n;i++){
      if(n%i==0){
        cout<<"number is not prime"<<endl;
        break;
      }
    }
    cout<<"number is prime : "<<n<<endl;
  }
  return 0;
}