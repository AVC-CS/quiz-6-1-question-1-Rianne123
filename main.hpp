#include <iostream>
using namespace std;
void getTwoValues(int, int);
int getNextPrime(int);
int getPrevPrime(int);
    
void getTwoValues (int begin, int end) {
    do {
    cout << "Enter two integers: " << endl;  
    cin >> begin >> end;
    } while (begin > end);
}

int getNextPrime (int begin) {
    for (int i = begin; i < i+1; i++) {
		int prime=1;
		for (int j = 2; j < (i/2) + 1; j++) {
			if (i % j == 0) {
				prime = 0;
				break;
			}	
		}
		if (prime) { 
				cout << i << " is the next Prime Number" << endl;
                break;
		}
	}
}

int getPrevPrime (int end) {

}
