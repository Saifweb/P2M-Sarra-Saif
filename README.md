# Hand Gesture Recognition System

This repository contains the code and resources for a hand gesture recognition system using flex sensors and machine learning. The system captures and analyzes hand gestures to classify them into predefined gestures.

## Project Credits

This project was developed by Seifeddine Ben Hamida and Sarra Zaghbib as part of the P2M  academic project.

## Files

- `SensorTest.ino`: This file contains the Arduino code for testing the flex sensors. It reads the sensor values and outputs them to the serial monitor for calibration and troubleshooting purposes.

- `P2M_1_(1).ipynb`: This Jupyter Notebook file contains the code for training the hand gesture recognition model. It includes data preprocessing, model architecture definition, training, and evaluation.

- `esp32P2M.ino`: This Arduino code file is used to create the dataset for training the hand gesture recognition model. It utilizes a button and capacitors to mark the start and end of recording, capturing the hand gesture sequences and saving them to a file.

## Usage

1. **Flex Sensor Test**: Upload the `SensorTest.ino` sketch to your Arduino board. Open the serial monitor to observe the flex sensor readings. This allows you to test and calibrate the sensors before recording gestures.

2. **Creating the Dataset**: Upload the `esp32P2M.ino` sketch to your Arduino board. Connect the hand gesture  and follow the instructions to record hand gesture sequences. The recorded data will be saved to a file(csv) for further processing.

3. **Model Training**: Open the `P2M_1_(1).ipynb` notebook using Jupyter Notebook or any compatible environment. Follow the step-by-step instructions to preprocess the dataset, define and train the hand gesture recognition model. Evaluate the model's performance and make necessary adjustments if needed.

## Dependencies

- Arduino IDE: To compile and upload the Arduino code.
- Jupyter Notebook: To run and modify the model training notebook.




