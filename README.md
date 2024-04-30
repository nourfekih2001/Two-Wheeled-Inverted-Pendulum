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

<video src='https://private-user-images.githubusercontent.com/129344878/324991586-9a606a80-0385-478b-ac78-10a356bd0bc7.gif?jwt=eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJpc3MiOiJnaXRodWIuY29tIiwiYXVkIjoicmF3LmdpdGh1YnVzZXJjb250ZW50LmNvbSIsImtleSI6ImtleTUiLCJleHAiOjE3MTQ0OTM1OTEsIm5iZiI6MTcxNDQ5MzI5MSwicGF0aCI6Ii8xMjkzNDQ4NzgvMzI0OTkxNTg2LTlhNjA2YTgwLTAzODUtNDc4Yi1hYzc4LTEwYTM1NmJkMGJjNy5naWY_WC1BbXotQWxnb3JpdGhtPUFXUzQtSE1BQy1TSEEyNTYmWC1BbXotQ3JlZGVudGlhbD1BS0lBVkNPRFlMU0E1M1BRSzRaQSUyRjIwMjQwNDMwJTJGdXMtZWFzdC0xJTJGczMlMkZhd3M0X3JlcXVlc3QmWC1BbXotRGF0ZT0yMDI0MDQzMFQxNjA4MTFaJlgtQW16LUV4cGlyZXM9MzAwJlgtQW16LVNpZ25hdHVyZT1kZWE3N2QyNTAyOGZjZmQ0ZmFiNDFiY2M4NGIxMGQwNjQ5NTc5MjhlMjUzMDYxM2I5ZDZmYWU5NzkzYzgyZTM0JlgtQW16LVNpZ25lZEhlYWRlcnM9aG9zdCZhY3Rvcl9pZD0wJmtleV9pZD0wJnJlcG9faWQ9MCJ9.yZgp5rzfC5BewlcP7LVQ66fPEcoZ2A3FM-l5hD3Q5ng' width=180/>
The result : 

![video](https://github.com/nourfekih2001/Two-Wheeled-Inverted-Pendulum/assets/123183769/b44b7005-b8a6-4875-8499-c22cb4ccc950)








