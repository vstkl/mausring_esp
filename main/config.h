
#define BLINK_GPIO GPIO_NUM_2
#define NUM_OF_SPIN_TASKS 6
#define SPIN_ITER 500000 // Actual CPU cycles used will depend on compiler optimization
#define SPIN_TASK_PRIO 2
#define STATS_TASK_PRIO 3
#define STATS_TICKS pdMS_TO_TICKS(1000)
#define BLINK_TICKS pdMS_TO_TICKS(100)
#define BLINK_PULSE_TICKS pdMS_TO_TICKS(900)
#define BLINK_BREAK_TICKS pdMS_TO_TICKS(1000)
#define ARRAY_SIZE_OFFSET 5 // Increase this if print_real_time_stats returns ESP_ERR_INVALID_SIZE

