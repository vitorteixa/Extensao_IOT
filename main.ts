input.onButtonPressed(Button.A, function () {
	
})
basic.forever(function () {
    basic.showNumber(0)
    if (input.lightLevel() < 50) {
        music.playMelody("C5 B A G F E D C ", 120)
        basic.showString("Está escuro")
    } else {
        basic.showString("Está Claro")
    }
})
