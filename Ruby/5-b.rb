#!/usr/bin/env ruby

 puts (1..20).inject(1) { |lcm, n| lcm.lcm(n) }