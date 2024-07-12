#include<iostream>
using namespace std ;
 int main(){ 
    int n = 3;
    int m  =3;
int arr[n][m] = {{1,3,6},{2,3,3},{2,5,3}};
int sum = 0;
for(int i=0;i<n;i++){
    for(int j =0;j<m;j++){
        sum += arr[i][j];
    }
}
    cout<<sum;
 }
