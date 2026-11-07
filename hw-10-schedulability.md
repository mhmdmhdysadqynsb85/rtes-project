# Homework 10 - Schedulability Analysis

## Online Food Ordering System

### Task Definitions

| Task | Period (ms) | Execution Time (ms) |
|--------|--------|--------|
| OrderTask | 100 | 10 |
| PaymentTask | 200 | 20 |
| DeliveryTask | 500 | 30 |

### CPU Utilization Calculation

Utilization Formula:

U = (C1/T1) + (C2/T2) + (C3/T3)

Where:

- C = Execution Time
- T = Task Period

Calculation:

U = (10/100) + (20/200) + (30/500)

U = 0.10 + 0.10 + 0.06

U = 0.26

CPU Utilization = 26%

### Result

The total processor utilization is 26%.

Since the utilization is well below 100%, the task set is considered schedulable under normal operating conditions.
