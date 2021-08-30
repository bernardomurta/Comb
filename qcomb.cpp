#include <iostream>
using namespace std;

int comb(int n, int k){
  if(k==1){
    return n;
  }
  else if(k==n){
    return 1;
  }
  else if(1<k<n){
    return comb(n-1,k-1)+comb(n-1,k);
  }
}


int main(){
  int x,y;
    cin>>x;
    cin>>y;
  int Combb=comb(x,y);
    cout<<Combb;
    return 0;
  }