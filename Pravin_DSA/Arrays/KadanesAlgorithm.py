import sys

arr = list(map(int , input("Enter the array elements:").split()))
maxEnds = 0
maxSoFar = -1

def KadaneAlgo(arr, maxEnds, maxSoFar):
    for i in arr:
        maxEnds += i
        maxSoFar = max(maxSoFar, maxEnds)
        maxEnds = max(maxEnds, 0)

    return maxSoFar

maxSoFar = KadaneAlgo(arr, maxEnds, maxSoFar)

print("The largest sum of contiguous subarray is", maxSoFar)
