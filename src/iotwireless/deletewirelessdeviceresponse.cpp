// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletewirelessdeviceresponse.h"
#include "deletewirelessdeviceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::DeleteWirelessDeviceResponse
 * \brief The DeleteWirelessDeviceResponse class provides an interace for IoTWireless DeleteWirelessDevice responses.
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
 * \sa IoTWirelessClient::deleteWirelessDevice
 */

/*!
 * Constructs a DeleteWirelessDeviceResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteWirelessDeviceResponse::DeleteWirelessDeviceResponse(
        const DeleteWirelessDeviceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTWirelessResponse(new DeleteWirelessDeviceResponsePrivate(this), parent)
{
    setRequest(new DeleteWirelessDeviceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteWirelessDeviceRequest * DeleteWirelessDeviceResponse::request() const
{
    Q_D(const DeleteWirelessDeviceResponse);
    return static_cast<const DeleteWirelessDeviceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTWireless DeleteWirelessDevice \a response.
 */
void DeleteWirelessDeviceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteWirelessDeviceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTWireless::DeleteWirelessDeviceResponsePrivate
 * \brief The DeleteWirelessDeviceResponsePrivate class provides private implementation for DeleteWirelessDeviceResponse.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a DeleteWirelessDeviceResponsePrivate object with public implementation \a q.
 */
DeleteWirelessDeviceResponsePrivate::DeleteWirelessDeviceResponsePrivate(
    DeleteWirelessDeviceResponse * const q) : IoTWirelessResponsePrivate(q)
{

}

/*!
 * Parses a IoTWireless DeleteWirelessDevice response element from \a xml.
 */
void DeleteWirelessDeviceResponsePrivate::parseDeleteWirelessDeviceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteWirelessDeviceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTWireless
} // namespace QtAws
