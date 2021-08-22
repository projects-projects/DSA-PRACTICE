arr = input("Enter the array:").split()

arr = list(map(int, arr)) 

print("The maximum element is ", max(arr))
print("The minimum element is ", min(arr))