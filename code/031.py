def f(a, b):
	n = len(a)
	m = len(b)
	c = [0] * (n + m - 1)
	for j in range(n):
		for k in range(m):
			c[j + k] += a[j]*b[k]

	return c

coin = [1, 2, 5, 10, 20, 50, 100, 200]

print(reduce(lambda x,y:f(x,y) , [([1] + [0]*(i - 1)) * (200/i) + [1] for i in coin])[200])


