arr = [0, 1, 0, 1, 1, 0, 1]
l = 0
r = len(arr) - 1

while l < r:
    if arr[l] == 1 and arr[r] == 0:
        arr[l], arr[r] = arr[r], arr[l]
    l += 1
    r -= 1


for i in arr:
    print(i)
