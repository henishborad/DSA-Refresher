arr = [[1, 2, 3], [4, 5, 6], [7, 8, 9]]

rows = 3
cols = 3

transpose = [[None for _ in range(cols)] for _ in range(rows)]

# arr1 = []

# for i in range(len(arr)):
#     for j in range(len(arr)):
#         transpose[i][j] = arr[j][i]

for i in range(len(arr)):
    for j in range(i+1 ,len(arr[0])):
        temp = arr[i][j]        
        arr[i][j] = arr[j][i]
        arr[j][i] = temp


for i in arr:
    print(i)
