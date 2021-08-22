arr = input("Enter an array:").split()
arr = [int(i) for i in arr]
print("Reversed array is:", end=" ")
print(", ".join(map(str, arr[::-1])))