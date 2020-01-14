test "PINA: 0x01 => PORTC: 3"
setPINA 0x01
continue 5
expectPORTC 0x0e
checkResult

test "PINA: 0x02 => PORTC: 2"
setPINA 0x02
continue 5
expectPORTC 0x0e
checkResult

test "PINA: 0x03 => PORTC : 1"
setPINA 0x03
continue 5
expectPORTC 0x0d
checkResult

test "PINA 0x04 => PORTC : 0"
setPINA 0x04
continue 5
expectPORTC 0x0e
checkResult
