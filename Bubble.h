#ifndef BUBBLE
#define BUBBLE

#include <cstdlib>

using namespace std;

template <class T>
class Bubble
{

  public:

    /* The bubble sort algorithm.
    * @param T arr[]: the array of comparables to sort.
    * @param int size: Size of the array being sorted.
    */
    static void Sort(T arr[], int size) {

      if (size < 2) {
        return;
      }

      for (int i = 0; i < size; ++i) {

        int temp = 0;
        for (int j = i; j < size; ++j) {

          if (arr[i] > arr[j+1]) {
            temp = arr[j+1];
            arr[j+1] = arr[i];
            arr[i] = temp;
          }

        }

      }

    }

};

#endif
