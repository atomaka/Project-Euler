#!/usr/bin/env ruby

sum = 0;
(1..999).each do |i|
	if(i % 3 == 0 || i % 5 == 0) then
		sum += i
	end
end

puts sum