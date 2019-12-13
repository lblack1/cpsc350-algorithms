import random as R
import sys

array_length = int(sys.argv[1])
try:
    outfilename = sys.argv[2]
except:
    outfilename = "array.txt"

file = open(outfilename, 'w+')
file.write(str(array_length) + '\n')

for i in range(array_length):
    file.write(str(R.randrange(0, 10000000)) + '\n')

file.close()
