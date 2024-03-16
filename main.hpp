#include <iostream>
using namespace std;
int getTwoValues(int, int);
int getNextPrime(int);
int getPrevPrime(int);
    
int begin=0, end=0;
int prime1, prime2;
int getTwoValues (int begin, int end) {
    do {
    cout << "Enter two integers: " << endl;  
    cin >> begin >> end;
    } while (begin > end);
}

int getNextPrime(int begin) {
    for (int i = begin + 1;; i++) { // Start searching from begin + 1
        int prime = 1;
        for (int j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                prime = 0;
                break;
            }
        }
        if (prime) {
            return i;
        }
    }
}

int getPrevPrime(int end) {
    for (int i = end - 1;; i--) { // Start searching from end - 1
        int prime = 1;
        for (int j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                prime = 0;
                break;
            }
        }
        if (prime) {
            return i;
        }
    }
}
