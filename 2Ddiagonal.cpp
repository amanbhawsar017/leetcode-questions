#include<iostream>
#include<vector>
using namespace std;

int diagonalsum(int mat[][3], int n) {
   int sum=0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i==j){
            sum += mat[i][j];
            }
           else if(j==n-i-1) {
            sum += mat[i][j];
           }
        }
    }
    return sum;   //o(n^2) complexity
}

int main() {
    int mat[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    cout << "Diagonal sum is :" << diagonalsum(mat, 3) << endl;
    return 0;
}



// for(int i=0;i<n;i++){
//     sum+=mat[i][j];   O(n) time cpmlexity
//          if(j !=n-i-1){
//             sum+=mat[i][n-i-1]
//                  }
// }