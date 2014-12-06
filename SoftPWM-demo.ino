#include <SoftPWM.h>
#include <SoftPWM_timer.h>

void setup()
{
  // Initialize
  SoftPWMBegin();

  // Create and set pin 13 to 0 (off)
  SoftPWMSet(13, 0);
  SoftPWMSet(11, 0);
  SoftPWMSet(9, 0);
  SoftPWMSet(7, 0);
  SoftPWMSet(5, 0);

  // Set fade time for pin 13 to 100 ms fade-up time, and 500 ms fade-down time
  SoftPWMSetFadeTime(5, 1000, 1000);
  SoftPWMSetFadeTime(7, 1000, 1000);
  SoftPWMSetFadeTime(9, 1000, 1000);
  SoftPWMSetFadeTime(11, 1000, 1000);
  SoftPWMSetFadeTime(13, 1000, 1000);
}

void loop()
{
  // Turn on - set to 100%
  SoftPWMSetPercent(5, 100);
  delay(300);
  SoftPWMSetPercent(7, 100);
  delay(300);
  SoftPWMSetPercent(9, 100);
  delay(300);
  SoftPWMSetPercent(11, 100);
  delay(300);
  SoftPWMSetPercent(13, 100);
  delay(300);

  // Wait for LED to turn on - you could do other tasks here
 // delay(2900);

  // Turn off - set to 0%
  SoftPWMSetPercent(5, 0);
  delay(300);
  SoftPWMSetPercent(7, 0);
  delay(300);
  SoftPWMSetPercent(9, 0);
  delay(300);
  SoftPWMSetPercent(11, 0);
  delay(300);
  SoftPWMSetPercent(13, 0);

  // Wait for LED to turn off
  delay(1000);
}
