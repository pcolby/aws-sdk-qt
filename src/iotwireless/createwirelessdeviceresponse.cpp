// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createwirelessdeviceresponse.h"
#include "createwirelessdeviceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::CreateWirelessDeviceResponse
 * \brief The CreateWirelessDeviceResponse class provides an interace for IoTWireless CreateWirelessDevice responses.
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
 * \sa IoTWirelessClient::createWirelessDevice
 */

/*!
 * Constructs a CreateWirelessDeviceResponse object for \a reply to \a request, with parent \a parent.
 */
CreateWirelessDeviceResponse::CreateWirelessDeviceResponse(
        const CreateWirelessDeviceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTWirelessResponse(new CreateWirelessDeviceResponsePrivate(this), parent)
{
    setRequest(new CreateWirelessDeviceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateWirelessDeviceRequest * CreateWirelessDeviceResponse::request() const
{
    Q_D(const CreateWirelessDeviceResponse);
    return static_cast<const CreateWirelessDeviceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTWireless CreateWirelessDevice \a response.
 */
void CreateWirelessDeviceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateWirelessDeviceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTWireless::CreateWirelessDeviceResponsePrivate
 * \brief The CreateWirelessDeviceResponsePrivate class provides private implementation for CreateWirelessDeviceResponse.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a CreateWirelessDeviceResponsePrivate object with public implementation \a q.
 */
CreateWirelessDeviceResponsePrivate::CreateWirelessDeviceResponsePrivate(
    CreateWirelessDeviceResponse * const q) : IoTWirelessResponsePrivate(q)
{

}

/*!
 * Parses a IoTWireless CreateWirelessDevice response element from \a xml.
 */
void CreateWirelessDeviceResponsePrivate::parseCreateWirelessDeviceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateWirelessDeviceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTWireless
} // namespace QtAws
