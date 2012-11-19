/*
 * Copyright (C) 2012 The Android Open Source Project
 * Copyright (C) 2012 The CyanogenMod Project <http://www.cyanogenmod.org>
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifdef TSUBASA
    char const*const RED_LED_FILE 			= "/sys/class/leds/pwr-red/brightness";
    char const*const GREEN_LED_FILE 		= "/sys/class/leds/pwr-green/brightness";
    char const*const BLUE_LED_FILE 			= "/sys/class/leds/pwr-blue/brightness";
    char const*const RED_LED_FILE_TRIGGER		= "/sys/class/leds/pwr-red/trigger";
    char const*const GREEN_LED_FILE_TRIGGER		= "/sys/class/leds/pwr-green/trigger";
    char const*const BLUE_LED_FILE_TRIGGER		= "/sys/class/leds/pwr-blue/trigger";
    char const*const LCD_BACKLIGHT_FILE		= "/sys/class/leds/lcd-backlight_1/brightness";
    char const*const LCD_BACKLIGHT2_FILE		= "/sys/class/leds/lcd-backlight_2/brightness";
    char const*const ALS_FILE			= "/sys/devices/i2c-10/10-0040/als_on";
#else
    char const*const RED_LED_FILE 			= "/sys/class/leds/led_7-rgb1-red/brightness";
    char const*const GREEN_LED_FILE 		= "/sys/class/leds/led_8-rgb2-green/brightness";
    char const*const BLUE_LED_FILE 			= "/sys/class/leds/led_9-rgb3-blue/brightness";
    char const*const RED_LED_FILE_TRIGGER		= "/sys/class/leds/led_7-rgb1-red/trigger";
    char const*const GREEN_LED_FILE_TRIGGER		= "/sys/class/leds/led_8-rgb2-green/trigger";
    char const*const BLUE_LED_FILE_TRIGGER		= "/sys/class/leds/led_9-rgb3-blue/trigger";
    char const*const RED_LED_FILE_DELAYON		= "/sys/class/leds/led_7-rgb1-red/delay_on";
    char const*const GREEN_LED_FILE_DELAYON		= "/sys/class/leds/led_8-rgb2-green/delay_on";
    char const*const BLUE_LED_FILE_DELAYON		= "/sys/class/leds/led_9-rgb3-blue/delay_on";
    char const*const RED_LED_FILE_DELAYOFF		= "/sys/class/leds/led_7-rgb1-red/delay_off";
    char const*const GREEN_LED_FILE_DELAYOFF	= "/sys/class/leds/led_8-rgb2-green/delay_off";
    char const*const BLUE_LED_FILE_DELAYOFF		= "/sys/class/leds/led_9-rgb3-blue/delay_off";
    char const*const LCD_BACKLIGHT_FILE		= "/sys/class/leds/led_1-lcd/brightness";
    char const*const ALS_FILE			= "/sys/devices/i2c-10/10-0040/als_on";
#endif
