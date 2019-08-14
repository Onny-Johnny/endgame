#include "../inc/a.h"

void wavecontainer(Mob *mobs, int *wavepause, int *sc, int *qwerty, int *wave) {
    if (*wave == 1)
        wave1(mobs, wavepause, sc, qwerty, wave);
     if (*wave == 2)
        wave2(mobs, wavepause, sc, qwerty, wave);
     if (*wave == 3)
        wave3(mobs, wavepause, sc, qwerty, wave);
     if (*wave == 4)
        wave4(mobs, wavepause, sc, qwerty, wave);
     if (*wave == 5)
        wave5(mobs, wavepause, sc, qwerty, wave);
   /* if (*wave == 6)
        wave6(mobs, wavepause, sc, qwerty);
     if (*wave == 7)
        wave7(mobs, wavepause, sc, qwerty);
     if (*wave == 8)
        wave8(mobs, wavepause, sc, qwerty);
     if (*wave == 9)
        wave9(mobs, wavepause, sc, qwerty);*/
}

void wave1(Mob *mobs, int *wavepause, int *sc, int *qwerty, int *wave) {
    *sc += 1;

    if (*qwerty <= 3) {
		if (*sc == 0) {
			create_mobs(mobs, 1, 3);
			*qwerty += 1;
		}
		if (*sc == 10) {
			create_mobs(mobs, 1, 2);
            *qwerty += 1;
		}
		if (*sc == 20) {
			create_mobs(mobs, 1, 1);
			*sc = 0;
		}
    }
    if (mobs->next == NULL) 
        *wavepause += 1;
    if (mobs->next == NULL && *wavepause == 42) {
		*qwerty = 0;
        *wavepause = 0;
        *wave = 2;
    }
}

void wave2(Mob *mobs, int *wavepause, int *sc, int *qwerty, int *wave) {
    *sc += 1;

    if (*qwerty <= 3) {
		if (*sc == 0) {
			create_mobs(mobs, 1, 1);
			create_mobs(mobs, 1, 2);
			create_mobs(mobs, 1, 3);
			*qwerty += 1;
		}
		if (*sc == 10) {
			create_mobs(mobs, 1, 1);
			create_mobs(mobs, 1, 2);
			create_mobs(mobs, 1, 3);
            *qwerty += 1;
		}
		if (*sc == 20) {
			create_mobs(mobs, 1, 1);
			create_mobs(mobs, 1, 2);
			create_mobs(mobs, 1, 3);
            *sc = 0;
		}
    }
    if (mobs == NULL) 
        *wavepause += 1;
    if (mobs == NULL && *wavepause == 42) {
		*qwerty = 0;
        *wavepause = 0;
        *wave = 3;
    }
}

void wave3(Mob *mobs, int *wavepause, int *sc, int *qwerty, int *wave) {
    *sc += 1;

    if (*qwerty <= 3) {
		if (*sc == 0) {
			create_mobs(mobs, 1, 1);
			create_mobs(mobs, 1, 2);
			create_mobs(mobs, 1, 3);
			*qwerty += 1;
		}
		if (*sc == 10) {
			create_mobs(mobs, 1, 1);
			create_mobs(mobs, 1, 2);
			create_mobs(mobs, 1, 3);
            *qwerty += 1;
		}
		if (*sc == 20) {
			create_mobs(mobs, 1, 1);
			create_mobs(mobs, 1, 2);
			create_mobs(mobs, 1, 3);
			*qwerty = 0;
            *sc = 0;
		}
    }
    if (mobs == NULL) 
        *wavepause += 1;
    if (mobs == NULL && *wavepause == 42) {
		*qwerty = 0;
        *wavepause = 0;
        *wave = 4;
    }
}


void wave4(Mob *mobs, int *wavepause, int *sc, int *qwerty, int *wave) {
    *sc += 1;

    if (*qwerty <= 3) {
		if (*sc == 0) {
			create_mobs(mobs, 1, 1);
			create_mobs(mobs, 1, 2);
			create_mobs(mobs, 1, 3);
			*qwerty += 1;
		}
		if (*sc == 10) {
			create_mobs(mobs, 1, 1);
			create_mobs(mobs, 1, 2);
			create_mobs(mobs, 1, 3);
            *qwerty += 1;
		}
		if (*sc == 20) {
			create_mobs(mobs, 1, 1);
			create_mobs(mobs, 1, 2);
			create_mobs(mobs, 1, 3);
			*qwerty = 0;
            *sc = 0;
		}
    }
    if (mobs == NULL) 
        *wavepause += 1;
    if (mobs == NULL && *wavepause == 42) {
		*qwerty = 0;
        *wavepause = 0;
        *wave = 5;
    }
}

void wave5(Mob *mobs, int *wavepause, int *sc, int *qwerty, int *wave) {
    *sc += 1;

    if (*qwerty <= 3) {
		if (*sc == 0) {
			create_mobs(mobs, 1, 1);
			create_mobs(mobs, 1, 2);
			create_mobs(mobs, 1, 3);
			*qwerty += 1;
		}
		if (*sc == 10) {
			create_mobs(mobs, 1, 1);
			create_mobs(mobs, 1, 2);
			create_mobs(mobs, 1, 3);
            *qwerty += 1;
		}
		if (*sc == 20) {
			create_mobs(mobs, 1, 1);
			create_mobs(mobs, 1, 2);
			create_mobs(mobs, 1, 3);
			*qwerty = 0;
            *sc = 0;
		}
    }
    if (mobs == NULL) 
        *wavepause += 1;
    if (mobs == NULL && *wavepause == 42) {
		*qwerty = 0;
        *wavepause = 0;
        *wave = 6;
    }
}
/*
void wave6(Mob *mobs, int *wavepause, int *sc, int *qwerty, int *wave) {
    int qwerty = 1;
    *sc += 1;

    if (*qwerty <= 3) {
		if (sc == 0) {
			create_mobs(mobs, 1, 1);
			create_mobs(mobs, 1, 2);
			create_mobs(mobs, 1, 3);
			*qwerty += 1;
		}
		if (sc == 10) {
			create_mobs(mobs, 1, 1);
			create_mobs(mobs, 1, 2);
			create_mobs(mobs, 1, 3);
            *qwerty += 1;
		}
		if (sc == 20) {
			create_mobs(mobs, 1, 1);
			create_mobs(mobs, 1, 2);
			create_mobs(mobs, 1, 3);
			*qwerty = 0;
            *sc = 0;
		}
    }
    if (mobs == NULL) 
        *wavepause += 1;
    if (mobs == NULL && *wavepause == 42) {
        *wavepause = 0;
        *wave = 7;
    }
}

void wave7(Mob *mobs, int *wavepause, int *sc, int *qwerty, int *wave) {
    int qwerty = 1;
    *sc += 1;

    if (*qwerty <= 3) {
		if (sc == 0) {
			create_mobs(mobs, 1, 1);
			create_mobs(mobs, 1, 2);
			create_mobs(mobs, 1, 3);
			*qwerty += 1;
		}
		if (sc == 10) {
			create_mobs(mobs, 1, 1);
			create_mobs(mobs, 1, 2);
			create_mobs(mobs, 1, 3);
            *qwerty += 1;
		}
		if (sc == 20) {
			create_mobs(mobs, 1, 1);
			create_mobs(mobs, 1, 2);
			create_mobs(mobs, 1, 3);
			*qwerty = 0;
            *sc = 0;
		}
    }
    if (mobs == NULL) 
        *wavepause += 1;
    if (mobs == NULL && *wavepause == 42) {
        *wavepause = 0;
        *wave = 8;
    }
}

void wave8(Mob *mobs, int *wavepause, int *sc, int *qwerty, int *wave) {
    int qwerty = 1;
    *sc += 1;

    if (*qwerty <= 3) {
		if (sc == 0) {
			create_mobs(mobs, 1, 1);
			create_mobs(mobs, 1, 2);
			create_mobs(mobs, 1, 3);
			*qwerty += 1;
		}
		if (sc == 10) {
			create_mobs(mobs, 1, 1);
			create_mobs(mobs, 1, 2);
			create_mobs(mobs, 1, 3);
            *qwerty += 1;
		}
		if (sc == 20) {
			create_mobs(mobs, 1, 1);
			create_mobs(mobs, 1, 2);
			create_mobs(mobs, 1, 3);
			*qwerty = 0;
            *sc = 0;
		}
    }
    if (mobs == NULL) 
        *wavepause += 1;
    if (mobs == NULL && *wavepause == 42) {
        *wavepause = 0;
        *wave = 9;
    }
}
void wave9(Mob *mobs, int *wavepause, int *sc, int *qwerty, int *wave) {
    *sc += 1;

    if (*qwerty <= 3) {
		if (sc == 0) {
			create_mobs(mobs, 1, 1);
			create_mobs(mobs, 1, 2);
			create_mobs(mobs, 1, 3);
			*qwerty += 1;
		}
		if (sc == 10) {
			create_mobs(mobs, 1, 1);
			create_mobs(mobs, 1, 2);
			create_mobs(mobs, 1, 3);
            *qwerty += 1;
		}
		if (sc == 20) {
			create_mobs(mobs, 1, 1);
			create_mobs(mobs, 1, 2);
			create_mobs(mobs, 1, 3);
			*qwerty = 0;
            *sc = 0;
		}
    }
    if (mobs == NULL) 
        *wavepause += 1;
    if (mobs == NULL && *wavepause == 42) {
        *wave = 10;
    }
}
*/
