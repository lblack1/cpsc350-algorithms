import random as R
import sys

array_length = int(sys.argv[1])//2
try:
    outfilename = sys.argv[2]
except:
    outfilename = "array.txt"

file = open(outfilename, 'w+')
file.write(str(array_length) + '\n')

for i in range(array_length):
    file.write(str(R.randrange((i+1)*3, (i+1)*4, 1)) + '\n')
    file.write(str(R.randrange((i+1)*3, (i+1)*4, 1)) + '\n')

file.close()
