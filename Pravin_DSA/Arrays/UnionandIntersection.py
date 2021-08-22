arr1, arr2 = set(map(int,input("Enter the first array elements:").split())), set(map(int, input("Enter the second array elements:").split()))
print(len(arr1.union(arr2)))