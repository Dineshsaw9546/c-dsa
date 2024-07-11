   #include <iostream>

using namespace std;

int main() {
    int num = 3; // Number for which you want the multiplication table

    cout << "Multiplication table of " << num << ":" << endl;

    for (int i = 1; i <= 10; i++) {
        cout << num << " x " << i << " = " << num * i << endl;
    }

    return 0;
}