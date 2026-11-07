# Homework 04 - Memory Map

## Online Food Ordering System Memory Map

This document defines hypothetical memory addresses for registers and sensors used in the system.

| Address | Register / Sensor | Description |
|----------|----------|-------------|
| 0x1000 | ORDER_STATUS_REG | Current order status |
| 0x1004 | PAYMENT_STATUS_REG | Payment result |
| 0x1008 | CART_ITEM_COUNT_REG | Number of items in cart |
| 0x100C | COOKING_STATUS_REG | Food preparation status |
| 0x1010 | DELIVERY_STATUS_REG | Delivery tracking status |
| 0x1014 | EMERGENCY_FLAG_REG | Emergency mode flag |

## Sensors

| Address | Sensor | Description |
|----------|----------|-------------|
| 0x2000 | Payment Sensor | Detects payment confirmation |
| 0x2004 | Kitchen Sensor | Detects cooking progress |
| 0x2008 | Delivery Sensor | Detects delivery completion |
| 0x200C | System Health Sensor | Detects system failures |
