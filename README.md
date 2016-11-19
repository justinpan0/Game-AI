# Game-AI
MatLab: Robust controll
https://www.mathworks.com/help/robust/functionlist.html

Tune a cascaded control system to meet requirements of reference tracking and disturbance rejection. These requirements are subject to a hard constraint on the stability margins of the inner and outer loops.

The cascaded control system of the following illustration includes two tunable controllers, the PI controller for the inner loop C_2, and the PID controller for the outer loop C_1.

The blocks x_1 and x_2 mark analysis-point locations. These are locations at which you can open loops or inject signals for the purpose of specifying requirements for tuning the system.

Tune the free parameters of this control system to meet the following requirements:

1. The output signal, y_1, tracks the reference signal at r with a response time of 5 seconds and a steady-state error of 1%.
2. A disturbance injected at x_2 is suppressed at the output, y_1, by a factor of 10.

Impose these tuning requirements subject to hard constraints on the stability margins of both loops.

Automated Tuning Workflow: https://www.mathworks.com/help/control/ug/automated-tuning-workflows.html

To use Systune: https://www.mathworks.com/help/slcontrol/ug/systune.html

Performance Robustness Criterion of PID Controllers: http://cdn.intechopen.com/pdfs-wm/34312.pdf

PID Control Intro: https://www.youtube.com/watch?v=UR0hOmjaHp0

Essay for control of quadcopter: http://sal.aalto.fi/publications/pdf-files/eluu11_public.pdf
