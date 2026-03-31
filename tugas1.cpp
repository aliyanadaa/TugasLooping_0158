#include <iostream>
using namespace std;

int angka;
int menu;

void input() {
    cout << "Masukkan angka: ";
    cin >> angka;
}

bool cekPrima(int n) {
    if (n <= 1) return false;

    int i = 2;
    while (i <= n / 2) {
        if (n % i == 0) {
            return false;
        }
        i++;
    }
    return true;
}

bool cekFibonacci(int n) {
    return false;
}