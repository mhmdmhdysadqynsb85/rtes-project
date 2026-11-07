#include <stdio.h>

volatile int emergencyFlag = 0;
volatile int paymentDetected = 0;
volatile int deliveryDetected = 0;

/* Emergency Button Interrupt */
void EmergencyButton_ISR(void)
{
    emergencyFlag = 1;
}

/* Payment Sensor Interrupt */
void PaymentSensor_ISR(void)
{
    paymentDetected = 1;
}

/* Delivery Sensor Interrupt */
void DeliverySensor_ISR(void)
{
    deliveryDetected = 1;
}

int main(void)
{
    while (1)
    {
        if (emergencyFlag)
        {
            printf("Emergency Mode Activated\n");
            emergencyFlag = 0;
        }

        if (paymentDetected)
        {
            printf("Payment Confirmed\n");
            paymentDetected = 0;
        }

        if (deliveryDetected)
        {
            printf("Order Delivered\n");
            deliveryDetected = 0;
        }
    }

    return 0;
}
