#include <iostream>
using namespace std;

const int MAX = 5;

int queueData[MAX];
int frontIndex = 0;
int rear = -1;
int count = 0;

void enqueue(int value) {
    if (count == MAX) {
        cout << "Queue Overflow!" << endl;
    } else {
        rear = (rear + 1) % MAX;
        queueData[rear] = value;
        count++;

        cout << value << " inserted successfully." << endl;
    }
}

void dequeue() {
    if (count == 0) {
        cout << "Queue Underflow!" << endl;
    } else {
        cout << queueData[frontIndex] << " removed successfully." << endl;

        frontIndex = (frontIndex + 1) % MAX;
        count--;
    }
}

void front() {
    if (count == 0) {
        cout << "Queue is empty!" << endl;
    } else {
        cout << "Front element: " << queueData[frontIndex] << endl;
    }
}

void display() {
    if (count == 0) {
        cout << "Queue is empty!" << endl;
    } else {
        cout << "Queue: ";

        for (int i = 0; i < count; i++) {
            int index = (frontIndex + i) % MAX;
            cout << queueData[index] << " ";
        }

        cout << endl;
    }
}

int main() {
    int choice = 0;
    int value;

    while (choice != 5) {
        cout << "\n===== CIRCULAR QUEUE MENU =====" << endl;
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
            cout << "Exiting program..." << endl;
        }
        else {
            cout << "Invalid choice!" << endl;
        }
    }

    return 0;
}