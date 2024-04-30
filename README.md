# Two-Wheeled-Inverted-Pendulum
You can access the full presentation via the link below : https://www.canva.com/design/DAGCfzghco0/c8IOaK-BY9OCZEnV3wlmRw/edit?utm_content=DAGCfzghco0&utm_campaign=designshare&utm_medium=link2&utm_source=sharebutton

In this project we experimented with self balancing-robots that use the two wheeled inverted pendulum TWIP system. This project's objective is to stabilize the robot in a closed loop using the PID(Proportional-Integral-Derivative) regulator . We started with a simplified mathematical model of the system to understand the model's requirements and challenges .

![image](https://github.com/nourfekih2001/Two-Wheeled-Inverted-Pendulum/assets/123183769/80e53fe5-33b2-41fe-a51c-e99254ac4eeb)

We proceeded to the conception of the robot using the Arduino Uno card , the MPU 6050 sensor and other electrical components. The electrical wiring of the robot is as such :

![image](https://github.com/nourfekih2001/Two-Wheeled-Inverted-Pendulum/assets/123183769/cb04a85f-c376-4aed-bbc3-65647f8d10ed)

This is a picture of the prototype we created :

![image](https://github.com/nourfekih2001/Two-Wheeled-Inverted-Pendulum/assets/123183769/21a70977-b610-4983-8428-77a240d2569c)

Then we proceeded to implementing the PID regulator with an Arduino code .

Below is a a bloc diagram detailing the overall fuction of the regulator :

![image](https://github.com/nourfekih2001/Two-Wheeled-Inverted-Pendulum/assets/123183769/036b67d9-761a-40e3-b2e6-f966bd7b9493)

We implemented the same regulator in LabView in order to visualise in real-time the variation of the error in the system , we also created a LabvView graphical interface for better visualization.

![video](https://github.com/nourfekih2001/Two-Wheeled-Inverted-Pendulum/assets/123183769/53a18b18-53e7-4878-8176-a04444465e99)

The result : 

![video](https://github.com/nourfekih2001/Two-Wheeled-Inverted-Pendulum/assets/123183769/b44b7005-b8a6-4875-8499-c22cb4ccc950)








