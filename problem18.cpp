#include<iostream>
using namespace std;

bool isPrime(int n){
    bool prime = true;
    for(int i = 2; i < n; i++){
        if (n%i == 0){
            prime = false;
        }
    } 
    return prime;
}

int main(){
    int n;
    cin >> n;
    int primes[1000];
    int prime_index = 0;
    for (int i = 2; i < n; i++){
        if (isPrime(i)){
            primes[prime_index] = i;
            prime_index++;
        }
    }
    for (int i = 0; i < prime_index-1; i++){
        if (primes[i+1] - primes[i] == 2){
            cout << primes[i] << ' ' << primes[i+1] << endl;
        }
    }
}
