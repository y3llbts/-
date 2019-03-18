#include <iostream>
#include <iterator>
#include <stack>
#include <ctime>
#include <cstdlib>

using namespace std;

void showstack(stack <int> gq) {
    stack <int> g = gq;
    cout << "Your stack: ";
    while (!g.empty()) {
        cout << '\t' << g.top();
        g.pop();
    }
    cout << '\n';
}

void showodd(stack <int> gq) {
    stack <int> g = gq;
    int tmp = 0;
    cout << "Your odd stack: ";
    while (!g.empty()) {
        tmp = g.top();
        if (tmp % 2 != 0) {
            cout << '\t' << g.top();
            g.pop();
        } else g.pop();
    }
    cout << '\n';
}

int main() {
    stack <int> myStack;
    int n, i;
    cout << "Input quantity of numbers in your stack: ";
    cin >> n;
    srand (time(NULL));
    for (i = 0; i < n; i++) {
        myStack.push(rand() % 100);
    }
    showstack(myStack);
    showodd(myStack);
    return 0;
}
