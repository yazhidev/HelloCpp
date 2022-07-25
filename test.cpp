#include <iostream>
using namespace std;

void test_pointer()
{
    int i = 12;
    int * ip = &i;
    cout << i << endl; //12
    cout << ip << endl; //0x16f15b68c
    cout << *ip << endl; //12，等效于 i
}

int main(int argc, char* argv[])
{
   cout << "HelloWorld" << endl;
   test_pointer();
}