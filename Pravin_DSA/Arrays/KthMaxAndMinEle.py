arr = input("Enter an array:").split()

arr = list(map(int, arr))

k = int(input("Enter the Kth element:"))

sortedArr = arr.sort()

print("The kth largers element is {} \n The kth smallest element is {}".format(arr[-k], arr[k-1]),)

