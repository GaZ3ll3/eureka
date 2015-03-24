s = 1;
for i = 11:99
	for j = 11:99
    	if i < j
       		if (i % 10) == (int)(floor(j/10)) &&  i // j == int(floor(i/10)) // (j % 10)
       		s *= i//j
       		end
       	end
    end
end
println(den(s));
