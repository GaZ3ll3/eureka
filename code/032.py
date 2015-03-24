import itertools
t = '123456789'
r = set(t)
n = set()
s = list(itertools.permutations(t,5))

for i in s:
	p = (10 * int(i[0]) + int(i[1])) * (100 * int(i[2]) + 10 * int(i[3]) + int(i[4]))
	q = (int(i[0])) * (1000 * int(i[1]) + 100 * int(i[2]) + 10 * int(i[3]) + int(i[4]))
	if (set(str(p)) == r.difference(set(i)) and p < 10000):
		n.add(p)
	if (set(str(q)) == r.difference(set(i)) and q < 10000):
		n.add(q)
print sum(n)

