# Homework 01 - FSM

## Online Food Ordering System FSM

```mermaid
stateDiagram-v2

[*] --> Idle

Idle --> Cart : Add Item
Cart --> Checkout : Confirm Cart
Checkout --> Paid : Successful Payment
Paid --> Preparing : Start Cooking
Preparing --> Delivered : Deliver Order

Delivered --> [*]
```
