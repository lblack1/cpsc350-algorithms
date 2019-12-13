#ifndef SELECTION
#define SELECTION

#include <cstdlib>

using namespace std;

template <class T>
class Selection {

  public:
    /* The selection sort algorithm.
    * @param T arr[]: the array of comparables to sort.
    * @param int size: Size of the array being sorted.
    */
    static void Sort(T arr[], int size) {
      int minInd;
      T temp;
      for (int i = 0; i < size-1; ++i) {
        minInd = i;
        for (int j = i+1; j < size; ++j) {
          if (arr[j] < arr[minInd]) {
            minInd = j;
          }
        }
        if (minInd != i) {
          temp = arr[i];
          arr[i] = arr[minInd];
          arr[minInd] = temp;
        }
      }
    }

};

#endif
