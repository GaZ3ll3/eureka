def f(i):
	return reduce(lambda x, y: x+ y, [int(d) ** 5 for d in str(i)])
print reduce(lambda x, y: x+y, [i for i in range(2, 5 * 9 **5) if f(i) == i])
