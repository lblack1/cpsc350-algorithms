# cpsc350-BSTDB
A few array-based sorting algorithms.

Lloyd Black
2295968
CPSC350, Section 2
Rene German

A program that sorts text files of doubles using four algorithms and times each (doesn't actually re-write the files with sorted info).

1. Source Files - main.cpp, Bubble.h, Selection.h, Insertion.h, Quick.h

2. Issues - Due to c++ max stack size, sorting more than 200,000 or so numbers may become problematic

3. Resources - cplusplus.com/reference, stackoverflow, tutorialspoint, and Data Structures and Algorithms in C (by Goodrich, Tamassia, and Mount).

4. Description of Program - Takes a text file as a command line argument, translates it into an array of doubles, and runs the unsorted data through Bubble, Selection, Insertion, and Quick Sort to measure the performance of each algorithm. Comes with two simple Python3 scripts for writing random and semi-sorted random number lists.

5. After compiling - ./YOURFILEOUT.out TEXTFILEWITHUNSORTEDDATA.txt
