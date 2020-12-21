# Thesis

The main goal of this project is to detect anomalous behavior on devices by capturing and analyzing the RF emissions that are produced every time there is code running in their processors. These emissions cannot be manipulated or controlled, which makes them a truly reliable source when it comes to detect the state of a device. To achieve this, it will be necessary to implement multiple behaviors in multiple devices, at least one where the Program Counter is isolated, one where the Instruction Register is isolated, a normal one and a malicious/abnormal one. Then, using an RF probe, all the RF emissions resulting from executing these behaviors will be captured and will be analysed using signal processing and machine learning techniques.
