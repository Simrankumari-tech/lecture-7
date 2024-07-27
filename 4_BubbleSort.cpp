#include<iostream>
using namespace std;
void printarray(int a[] ,int n){
for(int i= 0; i< n ;i++){
    cout << a[i]<< "  ";
}
cout << endl;
}
void bubblesort(int a[] ,int n){
    for(int i= 0; i<n-1 ; i++){
for(int j= 0; j<n-1-i ; j++){
    if(a[j] > a[j+1]){
        swap(a[j], a[j+1]);
    }
}
}
}
int main(){
    int a[]= {5,4,3,2,1};
    int n= sizeof(a) / sizeof(int);
 
 printarray(a, n);
    bubblesort(a,n);
     printarray(a,n);
    return 0;
}