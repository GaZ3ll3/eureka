from math import *
r = 0
m = [factorial(j) for j in range(10)]
for i in range(3, m[-1] * 7):
	s = str(i)
	t = 0
	for j in s:
		t += m[int(j)]
		if (t > i) :
			break;
	if (i == t):
		r += i
print(r)
