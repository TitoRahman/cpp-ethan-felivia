#include <iostream>
#include <string>
#include <vector>

using namespace std;

// <RETURN TYPE> <FUNC NAME>(<PARAM TYPE> <PARAM NAME>, ...) {
//  CODE 
//  return <VALUE>;
// }
void say_name(string name) {
    cout << "Hello " << name << endl;
}

void print_array(int arr[], int size){
    for (size_t i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    
}

bool is_even(int number) {
    if (number % 2 == 0) {
        return true;
    } else {
        return false;
    }
}
int main() {
    int num;
    cin >> num;
    bool result = is_even(num);
    bool result2 = is_even(10);
    
    if (result == true) {
        cout << num << " is even" << endl;
    } else {
        cout << num << " is odd" << endl;
    }
    // <function name> (<argument>)
    // say_name("Marvel");
    // string d;
    // cin >> d;
    // say_name(d);

    // int arr_main[] = {1,23,4,6};

    // print_array(arr_main, 4);

    vector<int> vec = {1,2,3,4,5};
    vec.push_back(6);
    vec.pop_back();
    vec.size();

    cout << vec[0] << endl;
    
    return 0;
}