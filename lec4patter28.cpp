#include<iostream>
using namespace std;
int main(){
  /*
        1 2 3 4 5 
          2 3 4 5 
            3 4 5 
              4 5 
                5 
  */
  
 cout<<"enter the number"<<endl;
  int n;
  cin>>n;
  int i=1;
  while(i<=n){
    int j=1;
    while(j<=n){
      if(j<=i-1)
        cout<<"  ";
      else
        cout<<j<<" ";
      j++;
    }

    cout<<endl;
    i++;
  }
  return 0;
}