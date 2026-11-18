#include <iostream>
using namespace std;

const int MAX = 5;

int stackData[MAX];
int top = -1;

void push(int value) {
    if (top == MAX - 1) {
        cout << "Stack Overflow!" << endl;
    } else {
        top++;
        stackData[top] = value;
        cout << value << " inserted successfully." << endl;
    }
}

void pop() {
    if (top == -1) {
        cout << "Stack Underflow!" << endl;
    } else {
        cout << stackData[top] << " removed successfully." << endl;
        top--;
    }
}

void peek() {
    if (top == -1) {
        cout << "Stack is empty." << endl;
    } else {
        cout << "Top element: " << stackData[top] << endl;
    }
}

void display() {
    if (top == -1) {
        cout << "Stack is empty." << endl;
    } else {
        cout << "Stack elements: ";

        for (int i = top; i >= 0; i--) {
            cout << stackData[i] << " ";
        }

        cout << endl;
    }
}

int main() {
    int choice = 0, value;

    while (choice != 5) {
        cout << "\n===== STACK MENU =====" << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Peek" << endl;
        cout << "4. Display" << endl;
        cout << "5. Exit" << endl;
        cout << "Choose operation: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter value: ";
            cin >> value;
            push(value);
        }
        else if (choice == 2) {
            pop();
        }
        else if (choice == 3) {
            peek();
        }
        else if (choice == 4) {
            display();
        }
        else if (choice == 5) {
            cout << "Program terminated." << endl;
        }
        else {
            cout << "Invalid choice!" << endl;
        }
    }

    return 0;
}