// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disassociatewirelessgatewayfromthingresponse.h"
#include "disassociatewirelessgatewayfromthingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::DisassociateWirelessGatewayFromThingResponse
 * \brief The DisassociateWirelessGatewayFromThingResponse class provides an interace for IoTWireless DisassociateWirelessGatewayFromThing responses.
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
 * \sa IoTWirelessClient::disassociateWirelessGatewayFromThing
 */

/*!
 * Constructs a DisassociateWirelessGatewayFromThingResponse object for \a reply to \a request, with parent \a parent.
 */
DisassociateWirelessGatewayFromThingResponse::DisassociateWirelessGatewayFromThingResponse(
        const DisassociateWirelessGatewayFromThingRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTWirelessResponse(new DisassociateWirelessGatewayFromThingResponsePrivate(this), parent)
{
    setRequest(new DisassociateWirelessGatewayFromThingRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DisassociateWirelessGatewayFromThingRequest * DisassociateWirelessGatewayFromThingResponse::request() const
{
    Q_D(const DisassociateWirelessGatewayFromThingResponse);
    return static_cast<const DisassociateWirelessGatewayFromThingRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTWireless DisassociateWirelessGatewayFromThing \a response.
 */
void DisassociateWirelessGatewayFromThingResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DisassociateWirelessGatewayFromThingResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTWireless::DisassociateWirelessGatewayFromThingResponsePrivate
 * \brief The DisassociateWirelessGatewayFromThingResponsePrivate class provides private implementation for DisassociateWirelessGatewayFromThingResponse.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a DisassociateWirelessGatewayFromThingResponsePrivate object with public implementation \a q.
 */
DisassociateWirelessGatewayFromThingResponsePrivate::DisassociateWirelessGatewayFromThingResponsePrivate(
    DisassociateWirelessGatewayFromThingResponse * const q) : IoTWirelessResponsePrivate(q)
{

}

/*!
 * Parses a IoTWireless DisassociateWirelessGatewayFromThing response element from \a xml.
 */
void DisassociateWirelessGatewayFromThingResponsePrivate::parseDisassociateWirelessGatewayFromThingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisassociateWirelessGatewayFromThingResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTWireless
} // namespace QtAws
