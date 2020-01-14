# Add tests below
test "PINA: 0x01 => PORTB: 0x01"
setPINA 0x01
continue 5
expectPORTB 0x01
checkResult

test "PINA: 0x00 => PORTB: 0x00"
setPINA 0x00
continue 5
expectPORTB 0x00
checkResult

test "PINA 0x10 => PORTB: 0x00"
setPINA 0x10
continue 5
expectPORTB 0x00
checkResult

test "PINA 0x11 => PORTB: 0x00"
setPINA 0x11
continue 5
expectPORTB 0x01
checkResult
