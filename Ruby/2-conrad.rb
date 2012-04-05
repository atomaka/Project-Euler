#!/usr/bin/env ruby

puts Enumerator.new { |yielder| i, j = 0, 1; loop {i, j = j, i + j; yielder.yield i} }.take_while { |n| n <= 4E6}.select { |i| i.even? }.inject(:+)
