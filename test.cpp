#include <iostream>

using namespace std;

void test_pointer() {
    int i = 12;
    int *ip = &i;
    cout << i << endl; //12
    cout << ip << endl; //0x16f15b68c
    cout << *ip << endl; //12，等效于 i

    int *p, q;
    q = 10;
    p = &q;
    cout << q << endl;
    cout << p << endl;
    *p = 100;
    cout << q << endl;
}

void func(int *p) {
    cout << "int func" << endl;
}

void func(char *p) {
    cout << "char func" << endl;
}

int main(int argc, char *argv[]) {
    cout << "HelloWorld" << endl;
    test_pointer();
//   func(nullptr); //nullptr 可以转换为任意指针类型和bool
    func(0);
}