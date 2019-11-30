#ifndef _USER_CONFIG_H_
#define _USER_CONFIG_H_

#define SENSOR_NAME "ManCaveSiren"

///////////////////////////////////////////////////////////////////////////
//   WIFI
///////////////////////////////////////////////////////////////////////////
#define WIFI_SSID "wifi_ssid"
#define WIFI_PASSWORD "wifi_password"
#define WIFI_QUALITY_OFFSET_VALUE 2
#define WIFI_QUALITY_INTERVAL 50000 // [ms]
#define WIFI_QUALITY_SENSOR_NAME "wifi"

///////////////////////////////////////////////////////////////////////////
//   MQTT
///////////////////////////////////////////////////////////////////////////
#define MQTT_SERVER "xxx.xxx.xxx.xxx"
#define MQTT_SERVER_PORT 1883
#define MQTT_USERNAME "mqtt_user_name"
#define MQTT_PASSWORD "mqtt_password"

#define MQTT_AVAILABILITY_TOPIC_TEMPLATE "%s/status" // MQTT availability: online/offline
#define MQTT_SENSOR_TOPIC_TEMPLATE "%s/sensor/%s"
#define MQTT_SENSOR_STATE_TOPIC_TEMPLATE "%s/%s/state"
#define MQTT_SENSOR_COMMAND_TOPIC_TEMPLATE "cmnd/%s/%s"

#define MQTT_PAYLOAD_ON "ON"
#define MQTT_PAYLOAD_OFF "OFF"

///////////////////////////////////////////////////////////////////////////
//   SIREN
///////////////////////////////////////////////////////////////////////////
#define SIREN_NAME "siren"
#define SIREN_PIN D1

///////////////////////////////////////////////////////////////////////////
//   Over-the-Air update (OTA)
///////////////////////////////////////////////////////////////////////////
#define OTA_HOSTNAME_TEMPLATE "ManCaveSiren_%s"
#define OTA_PORT 8266  // port 8266 by default

#endif  // _USER_CONFIG_H_