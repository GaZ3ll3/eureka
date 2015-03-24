names = open('../data/022.txt').readlines()[0][1:-1].split('","')
names.sort()
print reduce(lambda x, y : x + y, [reduce(lambda x, y: x + y, [(j + 1) * (ord(i) - 64) for i in names[j]]) for j in xrange(len(names))])