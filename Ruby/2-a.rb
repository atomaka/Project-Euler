#!/usr/bin/env ruby

sum = 0
i = j = 1

until (i >= 4000000)
	i, j = j, i + j
	sum += i if(i.even?)
end

puts sum