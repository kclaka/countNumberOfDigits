#include <iostream>
#include <math.h>

using namespace std;

int countDigit(long long n){
    if(n == 0)
        return  0;

    return (1 + countDigit(n/10));
}

int countDigitusingLog(long long n){
    return float(log10(n) + 1);
}

int countDigitusingIter(long long n){
    int count = 0;

    while(n != 0){
        n = n/10;
        ++count;
    }

    return count;
}

int main() {
    cout<<countDigit(49393023208203)<<'\n';
    cout<<countDigitusingLog(49393023208203)<<'\n';
    cout<<countDigitusingIter(49393023208203);
    return 0;
}