# Homework 03 - Parallel FSM

## Online Food Ordering System Parallel State Machines

### Main Order FSM

```mermaid
stateDiagram-v2

[*] --> Idle

Idle --> Cart : A*d Item
Cart --> Checkout : Confirm*Cart
Checkout --> Paid : Successfu* Payment
Paid --> Preparing : Star* Cooking
Preparing --> Delivered : Deliver Order

Delivered --> [*]
```

### Safety / Emergency FSM

```mermaid
stateDiagram-v2

[*] --> Normal

Normal --> Emergenc* : System Failure
Emergency --> Re*overy : Fix Problem
Recovery --> N*rmal : Restart System
```
