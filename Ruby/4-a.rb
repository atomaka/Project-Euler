#!/usr/bin/env ruby

p (100...1000).to_a.map{ |i| (100...1000).to_a.map{ |j| i *j } }.flatten(1).select { |i| i.to_s == i.to_s.reverse }.sort.last