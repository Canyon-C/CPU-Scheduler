#include <iostream>
#include "dll.cpp"
#include "data.cpp"

using namespace std;

int main() {
    int quantumtime;
    int cycle = 1;
    cout << "Enter Quantum Time: ";
    cin >> quantumtime;
    cout << endl;
    int elapsed = quantumtime;
    cout << "Prepopulating with processes" << endl;
    cout << endl;
    CircularDLL<Process> ll = CircularDLL<Process>();
    ll.insertProcess(new Process("A", 10));
    ll.insertProcess(new Process("B", 12));
    ll.insertProcess(new Process("C", 8));
    ll.insertProcess(new Process("D", 5));
    ll.insertProcess(new Process("E", 10));


    while (ll.length > 0) {
        ll.printList();
        cout << endl;
        char new_process;
        string new_process_name;
        int new_process_total_time;
        cout << "Add new process? (Enter Y/N):";
        cin >> new_process;
        cout << endl;
        if (new_process == 'Y') {
            cout << "Enter New Process Name:";
            cin >> new_process_name;
            cout << endl;
            cout << "Enter Total Process Time:";
            cin >> new_process_total_time;
            cout << endl;
            ll.insertProcess(new Process(new_process_name, new_process_total_time));
            cout << "Process Added." << endl;
            cout << endl;
        }
        cout << "Running Cycle " << cycle++ << endl;
        cout << endl;
        cout << "After cycle " << (cycle - 1) << " -- " << elapsed << " second(s) elapses -- state of processes is as follows:" << endl;
        cout << endl;
        elapsed += quantumtime;
        Node<Process> *temp = ll.head;
        int count = 0;
        int length = ll.length;
        do {
            temp->data->updateRunTime(quantumtime);
            if (temp->data->totalTime <= 0) {
                Node<Process> *temp_previoius = temp->prev;
                temp = temp->next;

                ll.deleteProcess(temp->prev);

                temp->prev = temp_previoius;
                temp = temp_previoius;
            }
            temp = temp->next;
            count++;


        } while (count < length && temp != nullptr);

    }
    cout << "All processes are completed" << endl;
    return 0;
}
