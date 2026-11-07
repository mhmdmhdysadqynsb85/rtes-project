Homework 01 - FSM
Online Food Ordering System FSM
stateDiagram-v2

[*] --> Idle

Idle --> Cart : Add I*em
Cart --> Checkout : Confirm Car*
Checkout --> Paid : Successful Pa*ment
Paid --> Preparing : Start Cooking
Preparing --> Delivered : Deliver Order

Delivered --> [*]
