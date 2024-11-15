#include <iostream>
#include <algorithm>
#include <set>
#include <tuple>

using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};

    if ( find(begin(arr), end(arr), 10) != end(arr) ) {
        cout << "yes" << "\n";
    } else {
        cout << "no" << "\n";
    }

    set<int> my_set = {1, 2, 3, 4, 5};
    if ( find(begin(my_set), end(my_set), 10) != end(my_set) ) {
        cout << "yes" << "\n";
    } else {
        cout << "no" << "\n";
    }


}