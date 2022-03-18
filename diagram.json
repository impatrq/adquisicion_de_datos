{
  "version": 1,
  "author": "Fabrizio Carlassara",
  "editor": "wokwi",
  "parts": [
    {
      "type": "wokwi-pi-pico",
      "id": "pico",
      "top": 0,
      "left": 0,
      "attrs": { "env": "micropython-20220117-v1.18" }
    },
    {
      "type": "wokwi-resistor",
      "id": "r1",
      "top": 40.4,
      "left": -83.68,
      "attrs": { "value": "220" }
    },
    {
      "type": "wokwi-resistor",
      "id": "r2",
      "top": 20.87,
      "left": -84.31,
      "attrs": { "value": "220" }
    },
    {
      "type": "wokwi-resistor",
      "id": "r3",
      "top": 116.32,
      "left": 94.95,
      "attrs": { "value": "10000" }
    },
    {
      "type": "wokwi-resistor",
      "id": "r4",
      "top": 21.16,
      "left": 94.94,
      "attrs": { "value": "10000" }
    },
    {
      "type": "wokwi-pushbutton",
      "id": "btn1",
      "top": 23.75,
      "left": 171.17,
      "attrs": { "color": "green" }
    },
    {
      "type": "wokwi-pushbutton",
      "id": "btn2",
      "top": 89.07,
      "left": 168.6,
      "attrs": { "color": "green" }
    },
    {
      "type": "wokwi-led",
      "id": "led1",
      "top": 21.36,
      "left": -135.64,
      "rotate": 270,
      "attrs": { "color": "yellow" }
    },
    {
      "type": "wokwi-led",
      "id": "led2",
      "top": 3.02,
      "left": -135.75,
      "rotate": 270,
      "attrs": { "color": "blue" }
    }
  ],
  "connections": [
    [ "pico:GND.1", "r2:2", "black", [ "h0" ] ],
    [ "led2:C", "r2:1", "green", [ "h0" ] ],
    [ "led2:A", "pico:GP1", "green", [ "h0" ] ],
    [ "r1:1", "led1:C", "green", [ "v0" ] ],
    [ "r1:2", "r2:2", "black", [ "v0" ] ],
    [ "led1:A", "pico:GP2", "green", [ "h0" ] ],
    [ "pico:GND.6", "r3:1", "black", [ "h0" ] ],
    [ "btn2:2.l", "r3:2", "green", [ "h0" ] ],
    [ "pico:3V3", "btn2:1.l", "red", [ "h0" ] ],
    [ "btn1:2.l", "btn2:1.l", "red", [ "h0" ] ],
    [ "pico:GND.8", "r4:1", "black", [ "h0" ] ],
    [ "r4:2", "btn1:1.l", "green", [ "v0" ] ],
    [ "r3:2", "pico:GP27", "yellow", [ "v0" ] ],
    [ "pico:GP28", "r4:2", "yellow", [ "h0" ] ]
  ]
}
