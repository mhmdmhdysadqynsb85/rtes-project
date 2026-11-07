#include <stdio.h>

typedef enum
{
    IDLE,
    CART,
    CHECKOUT,
    PAID,
    PREPARING,
    DELIVERED
} OrderState;

int main()
{
    OrderState currentState = IDLE;

    while (1)
    {
        switch (currentState)
        {
            case IDLE:
                printf("State: IDLE\n");
                currentState = CART;
                break;

            case CART:
                printf("State: CART\n");
                currentState = CHECKOUT;
                break;

            case CHECKOUT:
                printf("State: CHECKOUT\n");
                currentState = PAID;
                break;

            case PAID:
                printf("State: PAID\n");
                currentState = PREPARING;
                break;

            case PREPARING:
                printf("State: PREPARING\n");
                currentState = DELIVERED;
                break;

            case DELIVERED:
                printf("State: DELIVERED\n");
                return 0;
        }
    }

    return 0;
}
