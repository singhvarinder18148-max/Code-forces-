import sys
with open('input.txt', 'r') as f:
    lines = f.readlines()

start = int(lines[0].strip())
shuffles = []
for i in range(1, 4):
    a, b = map(int, lines[i].strip().split())
    shuffles.append((a, b))

p = start
for a, b in shuffles:
    if p == a:
        p = b
    elif p == b:
        p = a
with open('output.txt', 'w') as f:
    f.write(str(p) + '\n')