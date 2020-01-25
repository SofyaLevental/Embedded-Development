inputs = [None]*3
for index in range(3):
    print('Enter a number:')
    inputs[index] = int(input())
inputs.sort()
print()
print(*inputs, sep = ', ')