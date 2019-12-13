#include "Bubble.h"
#include "Selection.h"
#include "Insertion.h"
#include "Quick.h"

#include <iostream>
#include <fstream>
#include <limits>
#include <chrono>
#include <time.h>

using namespace std;

/* The main method. Reads in a text file, stores it in an array, then duplicates that array and runs it through 4 sorting algorithms.
*/
int main (int argc, char** argv) {

  string filename;
  if (argc > 1) {
    filename = argv[1];
  } else {
    cout << "Please run program with a text file argument." << endl;
    return 0;
  }
  ifstream filein;
  filein.open(filename);
  if (!filein) {
    cout << "File not found" << endl;
    return 0;
  }

  string temp;
  getline(filein, temp);
  int size = stoi(temp);
  double masterArr[size];
  double arr[size];

  for (int i = 0; i < size; ++i) {
    getline(filein, temp);
    masterArr[i] = stod(temp);
  }

  clock_t start, end;
  double totTime;

  for (int i = 0; i < size; ++i) {
    arr[i] = masterArr[i];
  }
  cout << "Bubble Sort" << endl;
  start = clock();
  Bubble<double>::Sort(arr, size);
  end = clock();
  totTime = double(end-start) / CLOCKS_PER_SEC;
  cout << "Elapsed Time: " << totTime << " seconds" << endl;

  for (int i = 0; i < size; ++i) {
    arr[i] = masterArr[i];
  }
  cout << "Selection Sort" << endl;
  start = clock();
  Selection<double>::Sort(arr, size);
  end = clock();
  totTime = double(end-start) / CLOCKS_PER_SEC;
  cout << "Elapsed Time: " << totTime << " seconds" << endl;

  for (int i = 0; i < size; ++i) {
    arr[i] = masterArr[i];
  }
  cout << "Insertion Sort" << endl;
  start = clock();
  Insertion<double>::Sort(arr, size);
  end = clock();
  totTime = double(end-start) / CLOCKS_PER_SEC;
  cout << "Elapsed Time: " << totTime << " seconds" << endl;


  for (int i = 0; i < size; ++i) {
    arr[i] = masterArr[i];
  }
  cout << "Quick Sort" << endl;
  start = clock();
  Quick<double>::Sort(arr, size);
  end = clock();
  totTime = double(end-start) / CLOCKS_PER_SEC;
  cout << "Elapsed Time: " << totTime << " seconds" << endl;

}
