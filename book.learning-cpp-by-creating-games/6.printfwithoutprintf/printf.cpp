#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "What is your name?" << endl;
    string name;
    cin >> name;
    cout << "How old are you?" << endl; 
    int age;
    cin >> age;
    cout << "Hello " << name << " I see you have attained " << age << " years. Congrats." << endl;
}

