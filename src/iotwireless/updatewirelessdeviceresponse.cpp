// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatewirelessdeviceresponse.h"
#include "updatewirelessdeviceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::UpdateWirelessDeviceResponse
 * \brief The UpdateWirelessDeviceResponse class provides an interace for IoTWireless UpdateWirelessDevice responses.
 *
 * \inmodule QtAwsIoTWireless
 *
 *  AWS IoT Wireless provides bi-directional communication between internet-connected wireless devices and the AWS Cloud. To
 *  onboard both LoRaWAN and Sidewalk devices to AWS IoT, use the IoT Wireless API. These wireless devices use the Low Power
 *  Wide Area Networking (LPWAN) communication protocol to communicate with AWS
 * 
 *  IoT>
 * 
 *  Using the API, you can perform create, read, update, and delete operations for your wireless devices, gateways,
 *  destinations, and profiles. After onboarding your devices, you can use the API operations to set log levels and monitor
 *  your devices with
 * 
 *  CloudWatch>
 * 
 *  You can also use the API operations to create multicast groups and schedule a multicast session for sending a downlink
 *  message to devices in the group. By using Firmware Updates Over-The-Air (FUOTA) API operations, you can create a FUOTA
 *  task and schedule a session to update the firmware of individual devices or an entire group of devices in a multicast
 *
 * \sa IoTWirelessClient::updateWirelessDevice
 */

/*!
 * Constructs a UpdateWirelessDeviceResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateWirelessDeviceResponse::UpdateWirelessDeviceResponse(
        const UpdateWirelessDeviceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTWirelessResponse(new UpdateWirelessDeviceResponsePrivate(this), parent)
{
    setRequest(new UpdateWirelessDeviceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateWirelessDeviceRequest * UpdateWirelessDeviceResponse::request() const
{
    Q_D(const UpdateWirelessDeviceResponse);
    return static_cast<const UpdateWirelessDeviceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTWireless UpdateWirelessDevice \a response.
 */
void UpdateWirelessDeviceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateWirelessDeviceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTWireless::UpdateWirelessDeviceResponsePrivate
 * \brief The UpdateWirelessDeviceResponsePrivate class provides private implementation for UpdateWirelessDeviceResponse.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a UpdateWirelessDeviceResponsePrivate object with public implementation \a q.
 */
UpdateWirelessDeviceResponsePrivate::UpdateWirelessDeviceResponsePrivate(
    UpdateWirelessDeviceResponse * const q) : IoTWirelessResponsePrivate(q)
{

}

/*!
 * Parses a IoTWireless UpdateWirelessDevice response element from \a xml.
 */
void UpdateWirelessDeviceResponsePrivate::parseUpdateWirelessDeviceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateWirelessDeviceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTWireless
} // namespace QtAws
