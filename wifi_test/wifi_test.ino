//
// #    #
// #   #     ##    #####  #    #  ######  #    #    ##     ####
// #  #     #  #     #    #    #  #       ##   #   #  #   #
// ###     #    #    #    ######  #####   # #  #  #    #   ####
// #  #    ######    #    #    #  #       #  # #  ######       #
// #   #   #    #    #    #    #  #       #   ##  #    #  #    #
// #    #  #    #    #    #    #  ######  #    #  #    #   ####
//
// Kathenas: Wifi Test
//
// Author(s): Kathenas Development Group (KDG), development.group@kathenas.org.
//
// License (SPDX): GPL-3.0-or-later
//
// License link (SPDX): https://spdx.org/licenses/GPL-3.0-or-later.html
//

#include <WiFi.h>

const char* ssid = "YOUR_SSID";
const char* password = "YOUR_WIFI_PASSWORD";

void setup()
{
    // Set serial communication speed.
    Serial.begin(115200);
    // Delay for 10 milliseconds.
    delay(10);

    Serial.println();
    Serial.print("Connecting to ");
    Serial.println(ssid);

    // Begin connection to WIFI passing SSID and Password.
    WiFi.begin(ssid, password);

    // While not connected, delay for 500 milliseconds and print a '.'
    // to indicate progress.
    while (WiFi.status() != WL_CONNECTED)
    {
        delay(500);
        Serial.print(".");
    }

    // Once WIFI is connected, report so and output IP data.
    Serial.println("");
    Serial.println("WiFi connected");
    Serial.print("IP address: ");
    Serial.println(WiFi.localIP());
}

void loop()
{
}