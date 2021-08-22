arr = input("Enter the array of 0s, 1s and 2s:").split()

arr = list(map(int , arr))

zero = arr.count(0)
one = arr.count(1)
two = arr.count(2)

for _ in range(zero):
    print(0,end=" ")

for _ in range(one):
    print(1, end=" ")

for _ in range(two):
    print(2, end=" ")