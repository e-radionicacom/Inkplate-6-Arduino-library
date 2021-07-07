/**
 **************************************************
 * @file        NetworkClient.h
 * @brief       Basic funtions for working with network
 * 
 *              https://github.com/e-radionicacom/Inkplate-Arduino-library
 *              For support, please reach over forums: forum.e-radionica.com/en
 *              For more info about the product, please check: www.inkplate.io
 *
 *              This code is released under the GNU Lesser General Public License v3.0: https://www.gnu.org/licenses/lgpl-3.0.en.html
 *              Please review the LICENSE file included with this example.
 *              If you have any questions about licensing, please contact techsupport@e-radionica.com
 *              Distributed as-is; no warranty is given.
 * 
 * @authors     @ e-radionica.com
 ***************************************************/

#ifndef __NETWORKCLIENT_H__
#define __NETWORKCLIENT_H__

#include "Arduino.h"
#include "HTTPClient.h"
#include "WiFi.h"
#include "defines.h"

/**
 * @brief       BitmapHeader structure includes standard bitmap parameters
 */
struct bitmapHeader
{
    uint16_t signature;
    uint32_t fileSize;
    uint32_t startRAW;
    uint32_t dibHeaderSize;
    uint32_t width;
    uint32_t height;
    uint16_t color;
    uint32_t compression;
};

/**
 * @brief       NetworkClient class that holds standard functions for working with network
 */
class NetworkClient final
{
  public:
    NetworkClient() = delete;
    ~NetworkClient() = delete;

    static bool joinAP(const char *ssid, const char *pass);
    static void disconnect();
    static bool isConnected();

    static uint8_t *downloadFile(const char *url, int32_t *defaultLen);
    static uint8_t *downloadFile(WiFiClient *url, int32_t len);

  private:
};

#endif