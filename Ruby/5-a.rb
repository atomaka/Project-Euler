#!/usr/bin/env ruby

i = 20
while true do 
	20.downto(1) { |j|
		break if i % j != 0
		@done = true if j == 1
	}

	break if @done

	if i > 232792560 then
		puts 'fail'
		break
	end

	i += 20
end

puts i
