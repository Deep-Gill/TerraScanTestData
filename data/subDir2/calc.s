.pos 0x1000
ld $data  , r0
ld $i     , r1
ld $x     , r2
ld $y     , r3
ld (r1)   , r4
ld (r0, r4, 4) , r5
inc  r4
ld (r0, r4, 4) , r7
add r7    , r5
st  r5    , (r3)
ld  $c    , r6
ld  (r6)  , r6
ld  (r3)  , r1
and r1    , r6
st  r6    , (r2)
halt

.pos 0x2000
i:      .long 0
x:      .long 0
y:      .long 0
c:      .long 0xff
data:   .long 1
        .long 2
        .long 0
        .long 0
