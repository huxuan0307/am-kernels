li x2, 0x12345678
li x3, 0x5
sll x4, x2, x3      # x4 = 0x468acf00
slli x5, x4, 3      # x5 = 0x34567800
slli x6, x5, 9      # x6 = 0xacf00000
sra x4, x6, x3      # x4 = 0xfd678000
srai x5, x4, 6      # x5 = 0xfff59e00
srl x6, x5, x3      # x6 = 0x07ffacf0
srli x7, x6, 24     # x7 = 0x00000007
srl x4, x7, x3      # x4 = 0x00000000
slli x5, x4, 31     # x5 = 0x00000000
sll x6, x4, x3      # x6 = 0x00000000
