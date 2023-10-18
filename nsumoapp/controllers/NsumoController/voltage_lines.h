#ifndef VOTLAGE_LINES_H
#define VOLTAGE_LINES_H

// Must match with how lines are assigned in the C++ microcontroller class
typedef enum voltage_idx {
    VOLTAGE_FRONT_LEFT_MOTOR = 0,
    VOLTAGE_BACK_LEFT_MOTOR = 1,
    VOLTAGE_FRONT_RIGHT_MOTOR = 2,
    VOLTAGE_BACK_RIGHT_MOTOR = 3,
    VOLTAGE_FRONT_LEFT_LINE_DETECTOR = 4,
    VOLTAGE_BACK_LEFT_LINE_DETECTOR = 5,
    VOLTAGE_FRONT_RIGHT_LINE_DETECTOR = 6,
    VOLTAGE_BACK_RIGHT_LINE_DETECTOR = 7,
    VOLTAGE_LEFT_RANGE_SENSOR = 8,
    VOLTAGE_FRONT_LEFT_RANGE_SENSOR = 9,
    VOLTAGE_FRONT_RANGE_SENSOR = 10,
    VOLTAGE_FRONT_RIGHT_RANGE_SENSOR = 11,
    VOLTAGE_RIGHT_RANGE_SENSOR = 12,
} voltage_idx_e;

#endif // VOLTAGE_LINES_H
