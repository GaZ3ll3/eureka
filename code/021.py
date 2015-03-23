import math

def f(n):
	return	sum([i + n/i for i in range(1, int(math.sqrt(n)) + 1) if n % i == 0]) - n

print reduce(lambda x, y: x+y, [i for i in range(1, 10000) if i == f(f(i))!= f(i)])
