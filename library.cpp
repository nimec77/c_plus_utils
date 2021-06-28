#include "library.h"
#include <iostream>
#include <cstring>

using namespace std;

char str_buffer[1024];

int main() {
    cout << "Test Add: " << add(40, 2) << endl;

    string str = "Hello! И по русски!";
    cout << "Test ReverseStr " << copy_str(str.c_str()) << endl;
}

void hello() {
    cout << "Hello, World!" << endl;
}

int add(int a, int b) {
    cout << "Add: " << a << " + " << b << endl;

    return a + b;
}

char *copy_str(const char *c) {
    if (strlen(c) >= sizeof str_buffer) {
        throw invalid_argument("String size must be less than 1000");
    }

    string str(c);

    cout << "ReverseStr: " << str << endl;

    copy(str.begin(), str.end(), str_buffer);

    return str_buffer;
}
