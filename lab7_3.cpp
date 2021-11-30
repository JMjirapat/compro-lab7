#include<iostream>
#include<cmath>
using namespace std;

int adiff(int A, int B){
  int X = A%360;
  int Y = B%360;
  if(X < 0)
    X = 360+X;
  if(Y < 0)
    Y = 360+Y;
  if(X-Y < 0){
    if(Y-X > 180){
      return 360 - (Y-X);
    }
    return Y-X;
  }else{
    return X-Y;
  }
    
}

int main(){
  cout << adiff(180,270)<< endl;
  cout << adiff(210,45)<< endl;
  cout << adiff(0,360)<< endl;
  cout << adiff(10,350)<< endl;
  cout << adiff(95,260)<< endl;
  cout << adiff(90,-90)<< endl;
  cout << adiff(1000,280)<< endl;
  cout << adiff(60,244)<< endl;
}
