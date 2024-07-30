#include<iostream>
using namespace std;
void printpairs(int a[], int n, int X){
   for(int i =0; i<n; i++){

    int no1 = a[i];
    int no2 = X-no1;
    for(int j= i+1; j<n; j++){
        if(a[j] == no2){
            cout << "("<< no1 << ","<< no2 << ")" ;
        }
    }
}
}
//using 1 loop
void printPairsOptimised(int a[], int n, int X) {
	int freq[10000] = {0};
	// Freq array create karo using array a[]
	for (int i = 0; i < n; ++i)
	{
		freq[a[i]]++;
	}

	for (int i = 0; i < n; ++i)
	{
		int no1 = a[i];
		int no2 = X - a[i];
		// Dono numbers frequency array mei hone chahiye!
		if (freq[no1] > 0 and freq[no2] > 0) {
			freq[no1]--; // no1 and no2 same hote hai and agar 1 hi baar occur krte hai
			// toh merko vo print nahi krne dono numbers
			if (freq[no2] <= 0) {
				continue;
			}
			freq[no2]--;
			cout << "(" << no1 << ", " << no2 << ") ";
		}
	}
}

int main(){
int a[] ={1,2,9,8,6,4,3,2,5};
int n= sizeof(a)/sizeof(int);

printpairs(a, n, 10);

    return 0;
}