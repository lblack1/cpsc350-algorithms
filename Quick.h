#ifndef QUICK
#define QUICK

#include <cstdlib>

using namespace std;

template <class T>
class Quick {

  public:

    /* The quick sort algorithm.
    * @param T arr[]: the array of comparables to sort.
    * @param int size: Size of the array being sorted.
    */
    static void Sort(T arr[], int size) {

      if (size < 2) {
        return;
      }

      int start = 0;
      int end = size-1;

      T pivot = arr[end];
      int lind = start;
      int rind = end-1;

      while (lind <= rind) {

        while (lind <= rind && arr[lind] <= pivot) {
          lind++;
        }
        while (rind >= lind && arr[rind] >= pivot) {
          rind--;
        }

        if (lind < rind) {
          T temp = arr[lind];
          arr[lind] = arr[rind];
          arr[rind] = temp;
        }

      }

      T temp = arr[lind];
      arr[lind] = arr[end];
      arr[end] = temp;

      Sort(arr, start, lind-1);
      Sort(arr, lind+1, end);

    }

  private:
    /* The version of quick sort used for recursive calls.
    * @param T arr[]: the array of comparables to sort.
    * @param int start: index of start of the sub-array in question.
    * @param int end: index of end of the sub-array in question.
    */
    static void Sort(T arr[], int start, int end) {

      if (start >= end) {
        return;
      }

      T pivot = arr[end];
      int lind = start;
      int rind = end-1;

      while (lind <= rind) {

        while (lind <= rind && arr[lind] <= pivot) {
          lind++;
        }
        while (rind >= lind && arr[rind] >= pivot) {
          rind--;
        }

        if (lind < rind) {
          T temp = arr[lind];
          arr[lind] = arr[rind];
          arr[rind] = temp;
        }

      }

      T temp = arr[lind];
      arr[lind] = arr[end];
      arr[end] = temp;

      Sort(arr, start, lind-1);
      Sort(arr, lind+1, end);

    }

};

#endif
