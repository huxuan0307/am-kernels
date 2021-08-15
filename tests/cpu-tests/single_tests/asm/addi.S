# addi x0, x0, 0xffff
# addi x1, x1, 0xffff
# addi x31, x31, 0xffff
# addi x2, x2, 2
# addi x3, x3, 3
# addi x4, x4, 4
# addi x5, x5, -5
# addi x6, x6, -6
# addi x7, x7, -7

addi x2, x2, 123
addi x2, x2, -123
li   x5, 0x10ffff
li   x6, 0xef0000
addi x5, x5, 1
addi x6, x6, -1