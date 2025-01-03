# Flutter USB LED Control

This project demonstrates how to connect an Android device with an ESP32 or other development kits via a USB cable using Flutter. The main goal of this project is to turn an LED on and off using Flutter.

## Overview

The project utilizes the [flutter_serial_communication](https://pub.dev/packages/flutter_serial_communication) package, which provides a relatively simple and effective way to communicate via USB. Note that the **minimum Android SDK version must be set to 21** for the package to work correctly.

## Getting Started

### Prerequisites

- Flutter installed on your system
- An Android device
- An ESP32 or other development kit connected to an LED
- A USB cable to connect the Android device to the ESP32

### Steps

1. Add the `flutter_serial_communication` package to your project:

   ```bash
   flutter pub add flutter_serial_communication
   ```

2. Update the `android/app/build.gradle` file to set the **minimum SDK version** to 21:

   ```gradle
   android {
       defaultConfig {
           minSdkVersion 21
       }
   }
   ```

3. Copy the example code provided in the [flutter_serial_communication package documentation](https://pub.dev/packages/flutter_serial_communication/example) and modify it as needed. This example will demonstrate turning an LED on and off via USB communication.

4. Debug and fix any errors that may arise. Ensure the **minimum SDK version** is set correctly to avoid compatibility issues.

## Lessons Learned

- Ensure the **minimum SDK version** is set to 21 to avoid errors.
- The `flutter_serial_communication` package is easier to use compared to other packages that often have dependency issues.

## Future Plans

This initial project is a starting point. The next version of the application will include more advanced functionality and features to explore the full potential of USB communication in Flutter.

## References

- [flutter_serial_communication package](https://pub.dev/packages/flutter_serial_communication)
