/*
Beau Simon
beau.a.simon@und.edu
Assignment #5 - C++

This is our fifth assignment for CSCI 265. This is the C++ portion.
*/

#include <iostream>
#include <unordered_map>
#include <vector>
#include <climits>
#include <iomanip>
using namespace std;

bool addPart(unordered_map<string, int>& parts, string part, int cost) {
    if (parts.find(part) != parts.end()) {
        parts[part] = cost;
        return false;
    } else {
        parts[part] = cost;
        return true;
    }
}

//Returns the number of unique parts
int totalParts(const unordered_map<string, int>& parts) {
    return parts.size();
}

//Returns a list of part names with a price greater than or equal to the upperLimit variable.
vector<string> partsGreaterThan(const unordered_map<string, int>& parts, int upperLimit) {
    vector<string> result;
    for (const auto& entry : parts) {
        if (entry.second >= upperLimit) {
            result.push_back(entry.first);
        }
    }
    return result;
}

//Returns True if part is a valid part in the data structure, otherwise return False.
bool isPart(const unordered_map<string, int>& parts, string part) {
    return parts.find(part) != parts.end();
}

//Returns the part name with the least expensive price.
string leastExpensivePart(const unordered_map<string, int>& parts) {
    if (parts.empty()) {
        return "";
    }
    string minPartName;
    int minPrice = INT_MAX; // Now INT_MAX is accessible
    for (const auto& entry : parts) {
        if (entry.second < minPrice) {
            minPrice = entry.second;
            minPartName = entry.first;
        }
    }
    return minPartName;
}

//Returns the part name with the most expensive price.
string mostExpensivePart(const unordered_map<string, int>& parts) {
    if (parts.empty()) {
        return "";
    }
    string maxPartName;
    int maxPrice = INT_MIN; // Now INT_MIN is accessible
    for (const auto& entry : parts) {
        if (entry.second > maxPrice) {
            maxPrice = entry.second;
            maxPartName = entry.first;
        }
    }
    return maxPartName;
}

//Returns the average price of all parts in the dictionary.
double averagePrice(const unordered_map<string, int>& parts) {
    if (parts.empty()) {
        return -1;
    }
    double sum = 0;
    for (const auto& entry : parts) {
        sum += entry.second;
    }
    return sum / parts.size();
}

//Writes a table of each part and its price to the display.
void printParts(const unordered_map<string, int>& parts) {
    cout << left << setw(20) << "Part" << right << setw(10) << "Price" << endl;
    cout << string(30, '=') << endl;
    for (const auto& entry : parts) {
        cout << left << setw(20) << entry.first << right << setw(10) << entry.second << endl;
    }
}

int main() {
    unordered_map<string, int> parts;
    addPart(parts, "Part 1", 50);
    addPart(parts, "Part 2", 30);
    addPart(parts, "Part 3", 20);
    addPart(parts, "Part 4", 50);
    addPart(parts, "Part 1", 70);  // Update the price of Part1
    addPart(parts, "Part 5", 90);

    cout << "Total parts: " << totalParts(parts) << endl;
    cout << "Parts greater than or equal to $30: ";
    vector<string> partsAbove30 = partsGreaterThan(parts, 30);
    for (const auto& part : partsAbove30) {
        cout << part << " ";
    }
    cout << endl;
    cout << "Is 'Part 3' a valid part? " << (isPart(parts, "Part 3") ? "Yes" : "No") << endl;
    cout << "Least expensive part: " << leastExpensivePart(parts) << endl;
    cout << "Most expensive part: " << mostExpensivePart(parts) << endl;
    cout << "Average price of all parts: " << averagePrice(parts) << endl;

    cout << "Printing parts:" << endl;
    printParts(parts);

    return 0;
}
