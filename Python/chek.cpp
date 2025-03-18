#include<iostream>

using namespace std;

int sum ( const int a[], int n)
    {
        if (n<0) return 0;
        if (n==0) return a[0];
        return sum(a,n-1)+a[n];
    }

int main(){
    int a[5];
    for (int i=0; i<5; i++) a[i]=i;
    cout<<sum(a,4);
    return 0;
}