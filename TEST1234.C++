// Example code (Arduino or ESP32) - This is a simplified example
// You'll need to use a library like USBKeyboard for actual implementation

void setup() {
    // Initialize USB HID Keyboard library
    USBKeyboard.begin();
}

void loop() {
    // Simulate a Ctrl + C key press
    USBKeyboard.press(KEY_CONTROL_LEFT);
    USBKeyboard.press('C');
    USBKeyboard.release(KEY_CONTROL_LEFT);
    USBKeyboard.release('C');

    // Delay to avoid rapid key presses
    delay(2000);
}
