# Temp-LCD-4DigitDisplay-arduino

## Logiciels
| Arduino | Fritzing |
| :-----: | :------: |
| ![](/icone/Arduino.png) | ![](/icone/Fritzing.png) |

## Composants
| Arduino | SeeedStudio |
| :-----: | :------: |
| ![](/icone/Arduino.png) | ![](/icone/Seeed_Studio.png) | 

### Arduino
| Arduino Mega  | Arduino Uno |
| :-------------: | :-------------: |
| ![](/composants/Arduino%20Mega.jpg) | ![](/composants/Arduino%20Uno.jpg) | 

### Shield
| Shield Grove base | Shield Grove Mega |
| :-------------: | :-------------: |
| ![](/composants/SeeedStudio/Shield_Grove_Base.png) | ![](/composants/SeeedStudio/Shield_Grove_Mega.jpg) |

 
### SeeedStudio
| Cable | 4 Digit Display | Temperature | LCD RGB |
| :-------------: | :-------------: | :-------------: | :-------------: |
| ![](/composants/SeeedStudio/Grove_Cable.jpg) | ![](/composants/SeeedStudio/Grove_4_digit_display.jpg) | ![](/composants/SeeedStudio/Grove_Temperature.jpg) | ![](/composants/SeeedStudio/Grove_LCD_RGB_Backlight.jpg) |

## Branchement
![](/fritzing/Untitled_Sketch.png)

### Shield
* Shield Grove

### Analogique
* A0: Temperature LM35
* A1: NC
* A2: NC
* A3: NC
* A4: NC
* A5: NC

### Digital
* D0 : RX rs232 non utilise
* D1 : TX rs232 non utilise
* D2 : Bar LED DIO
* D3 : Bar LED CLK
* D4 : NC
* D5 : NC
* D6 : NC
* D7 : NC
* D8 : NC
* D9 : NC
* D10 : NC
* D11 : NC
* D12 : NC
* D13 : NC 

### I2C
* SDA : LCD RGB
* SCL : LCD RGB

### Alimentation
* Vin : NC
* GND : NC
* 5V : NC
* 3.3V : NC
* Vref : NC

### Divers 
* Ioref : NC
* Reset : NC