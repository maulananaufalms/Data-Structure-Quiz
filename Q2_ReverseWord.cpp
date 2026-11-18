#include <iostream>
using namespace std;

const int MAX = 100;

char stackData[MAX];
int top = -1;

void push(char value) {
    if (top == MAX - 1) {
        cout << "Stack Overflow!" << endl;
    } else {
        top++;
        stackData[top] = value;
    }
}

char pop() {
    if (top == -1) {
        cout << "Stack Underflow!" << endl;
        return '\0';
    } else {
        char value = stackData[top];
        top--;
        return value;
    }
}

int main() {
    char word[MAX];

    cout << "Enter a word: ";
    cin >> word;

    for (int i = 0; word[i] != '\0'; i++) {
        push(word[i]);
    }

    cout << "\nOriginal word: " << word << endl;
    cout << "Reversed word: ";

    while (top != -1) {
        cout << pop();
    }
    cout << endl;

    return 0;
}
