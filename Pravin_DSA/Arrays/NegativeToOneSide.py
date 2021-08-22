arr = input("Enter the array:").split()

arr = list(map(int, arr))


j = 0
for i in range(len(arr)):
    if (arr[i] < 0):
        if(i != j):
            arr[i],arr[j] = arr[j],arr[i]
        j += 1


print(", ".join(map(str, arr)))
