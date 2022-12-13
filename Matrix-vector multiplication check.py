import numpy as np
matrix = []
vector = []

print("Enter matrix:")
while True:
    matrix.append(input().strip(",").split(","))
    for i in range(len(matrix[-1])):
        matrix[-1][i] = matrix[-1][i].strip()
        if matrix[-1][i] == "":
            del matrix[-1][i]
        else:
            matrix[-1][i] = int(matrix[-1][i])
    if len(matrix) == len(matrix[0]):
        break
matrix = np.matrix(matrix)
print("\nMatrix:", matrix)

print("\nEnter vector:")

while True:
    vector.append(input().strip(",").split(","))
    for i in range(len(vector[-1])):
        vector[-1][i] = vector[-1][i].strip()
        if vector[-1][i] == "":
            del vector[-1][i]
        else:
            vector[-1][i] = int(vector[-1][i])
    if len(vector) == len(matrix):
        break
vector = np.matrix(vector)
print("\nVector:", vector)

result = np.dot(matrix, vector)
print("\nResult", result)
