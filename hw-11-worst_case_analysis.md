# Homework 11 - Worst Case Path Analysis

## Online Food Ordering System

### Worst Case Execution Path

The longest execution path occurs when an order passes through all states:

IDLE → CART → CHECKOUT → PAID → PREPARING → DELIVERED

This path includes:

1. Order creation
2. Cart validation
3. Payment processing
4. Food preparation
5. Delivery confirmation

Therefore, this sequence represents the worst-case path of the system.

---

## Code Optimization Techniques

### Optimization 1: Use Enumeration for States

Instead of using string comparisons, the system uses enum values:

```c
typedef enum
{
    IDLE,
    CART,
    CHECKOUT,
    PAID,
    PREPARING,
    DELIVERED
} OrderState;
```

Benefits:
- Faster execution
- Lower memory usage
- Improved readability

---

### Optimization 2: Reduce Critical Section Time

Shared resources are protected using a mutex only when necessary.

Example:

```c
/* Take Mutex */

orderCount++;

/* Release Mutex */
```

Benefits:
- Lower blocking*time
- Better RTOS performance
- R*duced task waiting time

---

## C*nclusion

The identified worst-cas* execution path traverses all syst*m states.

Two optimization method* were applied:

1. State represent*tion using enums.
2. Minimization *f mutex-protected critical section*.

These optimizations reduce exec*tion time and improve overall syst*m efficiency.
