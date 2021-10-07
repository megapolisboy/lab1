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
    int current_prime = 1;
    int i = 2;
    int primes[1000];
    while (current_prime <= n){
        if (isPrime(i)){
            primes[current_prime-1] = i;
            current_prime++;
            
        }
        i++;
    }
    int product = 1;
    for (int i = 0; i < n; i++){
        product*=primes[i];
    }

    int numerator = 0;
    for (int i = 0; i < n; i++){
        numerator += product/primes[i];
    }

    cout << numerator << '/' << product;
}