N = 1000000
m = 1000000007L
S = 0
for i in range(2, N + 1):
	S += (pow(1 - i*i, N + 1, m) - (1 - i * i))*pow((- i * i), m - 2, m) % m  
	S %= m
print S
