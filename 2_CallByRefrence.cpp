#include<iostream>
using namespace std;
void update(int &x){
    x = x+ 1;
     cout << "inside calling : " << x << endl; //2
}
int main(){
    int a= 1;
     cout << "Before update: " << a << endl; //1
     update(a);
      cout << "after update: " << a << endl; //2
      return 0;
}