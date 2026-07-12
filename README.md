# The Maths Machine

**Introduction**  
The Maths Machine (TMM) is a simple analogue breadboard computer created by TheRebel0. It allows you to simulate physics concepts using two potentiometers, enabling adjustment of position and velocity. 
This is an open-source device, meaning you can build it yourself using this tutorial.

## Parts List
- 2x Potentiometers  
- 1x 10µF capacitor (or any suitable size; this affects the integrator's lag)  
- 2x 10kΩ resistors (other values are acceptable)  
- 1x Arduino (any model; performance is unaffected)  
- 1x Breadboard  
- Approximately 15 jumper wires (more for spares)  

## Important Considerations
- Include a 10kΩ resistor between the Arduino 5V pin and each potentiometer to prevent short circuits.  
- Ensure the capacitor has a proper connection to ground to enable turning the potentiometer down.  

## Building Instructions
Here's the wiring setup:
- 5V → + rail on breadboard  
- GND → - rail on breadboard  
- POT1 left leg → 10kΩ resistor → + rail  
- POT1 right leg → - rail  
- POT1 middle leg → + capacitor  
- POT2 left leg → 10kΩ resistor → + rail  
- POT2 right leg → - rail  
- POT2 middle leg → Analog input pin A1  
- Capacitor + leg → A0 (analog input)  
- Capacitor - leg → GND  
- Capacitor + leg → 10kΩ resistor → GND  

## Notes
- Ensure a 10kΩ resistor is connected between the 5V supply and each potentiometer's left leg.  
- The capacitor's negative leg is connected to GND.  
- The capacitor's positive leg is connected to A0.  
- The potentiometer middle pins connect to the capacitor and Arduino input.

## Usage example: Rocket simulator
Plug in the Arduino into a computer with Arduino IDE installed, paste the code from `code.cpp` into the window, and click upload.  
Then, click **Tools** in the top menu and select **Serial Plotter**. Twist one of the potentiometers—you should see one of the lines go up. Let's call the line for POT1 the velocity and POT2 the position. 
You can now see visual feedback of position and velocity. You can also simulate other things like a bouncing ball or a meteorite.

Have fun!
