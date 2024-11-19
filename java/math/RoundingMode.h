#ifndef ROUNDINGMODE_H
#define ROUNDINGMODE_H

enum RoundingMode {
    CEILING,
    DOWN,
    FLOOR,
    HALF_DOWN,
    HALF_EVEN,
    HALF_UP,
    UNNECESSARY,
    UP;

    static RoundingMode valueOf(int rm) {

    }

    static RoundingMode valueOf(std::string name) {

    }

    static RoundingMode[] values() {
        return;
    }
};

#endif //ROUNDINGMODE_H
