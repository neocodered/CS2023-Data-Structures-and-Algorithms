#include <iostream>
#include <cmath>

using namespace std;

int recpower(int X, int N, int num_present){
    int val = X - pow(num_present,N);

    if (val<=0){
        if (val == 0){
            return 1;
        }
        return 0;
    }

    return recpower(val, N, num_present+1) + recpower(X, N, num_present+1);
}

int powerSum(int X,int N){
    return recpower(X,N,1);
}

int main(){

    cout << powerSum(13,2);
    return 0;
}
