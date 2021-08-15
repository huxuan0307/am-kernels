li      x5, 0x20
li      x4, 0xffffffff
sw      x4, 4(x5)
addi    x5, x5, 0x4
li      x4, 0x1
sw      x4, 4(x5)
addi    x5, x5, 0x4
li      x4, 0xfffffffe
sw      x4, 4(x5)

li      x5, 0x20
lw      x6, 4(x5)
addi    x5, x5, 0x4
lw      x7, 4(x5)
addi    x5, x5, 0x4
add     x5, x6, x7