#include <iostream>
using namespace std;

const int MAX = 5;

int queueData[MAX];
int frontIndex = 0;
int rearIndex = -1;

void enqueue(int value) {
    if (rearIndex == MAX - 1) {
        cout << "Queue Overflow!" << endl;
    } else {
        rearIndex++;
        queueData[rearIndex] = value;
        cout << value << " inserted successfully." << endl;
    }
}

void dequeue() {
    if (frontIndex > rearIndex) {
        cout << "Queue Underflow!" << endl;
    } else {
        cout << queueData[frontIndex]
             << " removed successfully." << endl;

        frontIndex++;

        if (frontIndex > rearIndex) {
            frontIndex = 0;
            rearIndex = -1;
        }

        display();
    }
}

void front() {
    if (frontIndex > rearIndex) {
        cout << "Queue is empty!" << endl;
    } else {
        cout << "Front element: "
             << queueData[frontIndex] << endl;
    }
}

void display() {
    if (frontIndex > rearIndex) {
        cout << "Queue is empty!" << endl;
    } else {
        cout << "Queue: ";

        for (int i = frontIndex; i <= rearIndex; i++) {
            cout << queueData[i] << " ";
        }

        cout << endl;
    }
}

int main() {
    int choice, value;

    do {
        cout << "\n===== QUEUE MENU =====" << endl;
        cout << "1. Enqueue" << endl;
        cout << "2. Dequeue" << endl;
        cout << "3. Front" << endl;
        cout << "4. Display" << endl;
        cout << "5. Exit" << endl;

        cout << "Choose operation: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter value: ";
            cin >> value;
            enqueue(value);
        }
        else if (choice == 2) {
            dequeue();
        }
        else if (choice == 3) {
            front();
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

    } while (choice != 5);

    return 0;
}