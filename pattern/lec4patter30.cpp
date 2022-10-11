#include<iostream>
using namespace std;
int main(){
  /*
            1 
          1 2 1 
        1 2 3 2 1 
      1 2 3 4 3 2 1
  */
  
 cout<<"enter the number"<<endl;
  int n;
  cin>>n;
  int i=1,count=1;
  while(i<=n){
    int j=1;
    while(j<=n-i){
      cout<<"  ";
      j++;
    }
    j=1;
    while(j<=i){
      cout<<j<<" ";
      j++;
    }
    j=1;
    while(j<i){
      cout<<i-j<<" ";
      j++;
    }
    cout<<endl;
    i++;
  }
  return 0;
}
