% d) We can assume that the spreadsheet dataset file name has been saved as "Embedded Software Engineer Quiz Resource.txt".

#include <iostream>
#include <fstream>
#include <unordered_map>

using namespace std;

int main() {
    // open the file
    ifstream file("Embedded Software Engineer Quiz Resource.txt");
    if (!file) {
        cerr << "Error: could not open file" << endl;
        return 1;
    }

    // read the data and compute f
    unordered_map<int, string> hashtable;
    int count = 0;
    string line;
    while (getline(file, line)) {
        count++;
        int key = stoi(line.substr(0, line.find('\t')));
        string value = line.substr(line.find('\t')+1);
        hashtable[key] = value;
    }
    file.close();

    // print the result
    cout << "f(x) = " << count << " - x" << endl;
    return 0;
}
