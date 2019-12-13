#ifndef INSERTION
#define INSERTION

#include <cstdlib>

using namespace std;

template <class T>
class Insertion
{

  public:

    /* The insertion sort algorithm.
    * @param T arr[]: the array of comparables to sort.
    * @param int size: Size of the array being sorted.
    */
    static void Sort(T arr[], int size) {

      if (size < 2) {
        return;
      }

      for (int i = 0; i < size; ++i) {
        T temp = arr[i];
        int k = i;
        while (k > 0 && arr[k-1] >= temp)
        {
          arr[k] = arr[k-1];
          --k;
        }
        arr[k] = temp;
      }

    }

};

#endif
