f = open("some.txt", "r")
data = f.readlines()
f.close()
for line in data:
    print(line, end='')
