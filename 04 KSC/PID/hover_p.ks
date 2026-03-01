SET TARGET_ALT TO 200.  // meters
SET Kp TO 0.02.         // tune this

LOCK STEERING TO UP.

UNTIL FALSE {
    SET currentAlt TO SHIP:ALTITUDE.
    SET error TO TARGET_ALT - currentAlt.

    SET throttleCmd TO Kp * error.

    // Clamp throttle between 0 and 1
    SET throttleCmd TO MAX(0, MIN(1, throttleCmd)).
    LOCK THROTTLE TO throttleCmd.

    PRINT "ALT: " + ROUND(currentAlt,1) + " ERR: " + ROUND(error,1) + " THR: " + ROUND(throttleCmd,2).

    WAIT 0.1.
}