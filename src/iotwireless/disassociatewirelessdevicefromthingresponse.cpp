// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disassociatewirelessdevicefromthingresponse.h"
#include "disassociatewirelessdevicefromthingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::DisassociateWirelessDeviceFromThingResponse
 * \brief The DisassociateWirelessDeviceFromThingResponse class provides an interace for IoTWireless DisassociateWirelessDeviceFromThing responses.
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
 * \sa IoTWirelessClient::disassociateWirelessDeviceFromThing
 */

/*!
 * Constructs a DisassociateWirelessDeviceFromThingResponse object for \a reply to \a request, with parent \a parent.
 */
DisassociateWirelessDeviceFromThingResponse::DisassociateWirelessDeviceFromThingResponse(
        const DisassociateWirelessDeviceFromThingRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTWirelessResponse(new DisassociateWirelessDeviceFromThingResponsePrivate(this), parent)
{
    setRequest(new DisassociateWirelessDeviceFromThingRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DisassociateWirelessDeviceFromThingRequest * DisassociateWirelessDeviceFromThingResponse::request() const
{
    Q_D(const DisassociateWirelessDeviceFromThingResponse);
    return static_cast<const DisassociateWirelessDeviceFromThingRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTWireless DisassociateWirelessDeviceFromThing \a response.
 */
void DisassociateWirelessDeviceFromThingResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DisassociateWirelessDeviceFromThingResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTWireless::DisassociateWirelessDeviceFromThingResponsePrivate
 * \brief The DisassociateWirelessDeviceFromThingResponsePrivate class provides private implementation for DisassociateWirelessDeviceFromThingResponse.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a DisassociateWirelessDeviceFromThingResponsePrivate object with public implementation \a q.
 */
DisassociateWirelessDeviceFromThingResponsePrivate::DisassociateWirelessDeviceFromThingResponsePrivate(
    DisassociateWirelessDeviceFromThingResponse * const q) : IoTWirelessResponsePrivate(q)
{

}

/*!
 * Parses a IoTWireless DisassociateWirelessDeviceFromThing response element from \a xml.
 */
void DisassociateWirelessDeviceFromThingResponsePrivate::parseDisassociateWirelessDeviceFromThingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisassociateWirelessDeviceFromThingResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTWireless
} // namespace QtAws
