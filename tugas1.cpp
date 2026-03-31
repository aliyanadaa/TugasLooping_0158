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
    int a = 0, b = 1, c;

    while (a <= n) {
        if (a == n) {
            return true;
        }
        c = a + b;
        a = b;
        b = c;
    }
    return false;
}

void proses() {
    switch (menu) {
        case 1:
            input();
            if (cekPrima(angka)) {
        cout << "Bilangan prima" << endl;
    } else {
        cout << "Bukan bilangan prima" << endl;
    }
            break;
        case 2:
            input();
            input();
    if (cekFibonacci(angka)) {
        cout << "Termasuk Fibonacci" << endl;
    } else {
        cout << "Bukan Fibonacci" << endl;
    }
            break;
        case 0:
            input();
            break;
        default:
            break;
    }
}

