#include <stdio.h>

/* Pseudo RTOS Definitions */

typedef int SemaphoreHandle_t;

SemaphoreHandle_t OrderMutex;

/* Shared Resource */
int orderCount = 0;

/* Order Task */
void OrderTask(void)
{
    /* Take Mutex */
    
    orderCount++;

    printf("Order Task: orderCount = %d\n", orderCount);

    /* Release Mutex */
}

/* Payment Task */
void PaymentTask(void)
{
    /* Take Mutex */

    printf("Payment Processing\n");

    /* Release Mutex */
}

/* Delivery Task */
void DeliveryTask(void)
{
    /* Take Mutex */

    printf("Delivery Processing\n");

    /* Release Mutex */
}

int main(void)
{
    /* Create Mutex */

    while (1)
    {
        OrderTask();
        PaymentTask();
        DeliveryTask();

        break;
    }

    return 0;
}
