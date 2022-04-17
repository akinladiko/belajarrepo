#include <iostream>
using namespace std;
// Akinla Diko
// 120510210036
// Pemrograman Komputer B

int main() {
    int awal = 1;
    int akhir = 20;
    cout << "bilangan prima di antara 1 sampai 20 adalah: \n";
    for (int i = awal; i <= akhir; i++){
        int j = 1;
        int counter = 0;
        do {
            if (i % j == 0) {
                counter++;
                if (counter > 2){
                    j = i;
                }
            } j++;
        }
        while (j <= i);
        if (counter == 2){
            cout << i << "\n";
        }
        }
return 0;
}





