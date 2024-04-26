#include <iostream>

using namespace std;

int main(){
    double usernum {};
    int count {};
    double middleArif {};
    char userResponse {};

    do
    {
        cout << "Enter num > ";
        cin >> usernum;
        middleArif = middleArif + usernum;
        count++;
        cout << "Finish? (N/y)> ";
        cin >> userResponse;
    } while (userResponse != 'Y' && userResponse !='y');

    double result {middleArif/count};

    cout << "Result: " << result << endl;

    return 0;
}