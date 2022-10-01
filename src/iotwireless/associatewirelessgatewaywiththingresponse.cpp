// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "associatewirelessgatewaywiththingresponse.h"
#include "associatewirelessgatewaywiththingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::AssociateWirelessGatewayWithThingResponse
 * \brief The AssociateWirelessGatewayWithThingResponse class provides an interace for IoTWireless AssociateWirelessGatewayWithThing responses.
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
 * \sa IoTWirelessClient::associateWirelessGatewayWithThing
 */

/*!
 * Constructs a AssociateWirelessGatewayWithThingResponse object for \a reply to \a request, with parent \a parent.
 */
AssociateWirelessGatewayWithThingResponse::AssociateWirelessGatewayWithThingResponse(
        const AssociateWirelessGatewayWithThingRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTWirelessResponse(new AssociateWirelessGatewayWithThingResponsePrivate(this), parent)
{
    setRequest(new AssociateWirelessGatewayWithThingRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AssociateWirelessGatewayWithThingRequest * AssociateWirelessGatewayWithThingResponse::request() const
{
    Q_D(const AssociateWirelessGatewayWithThingResponse);
    return static_cast<const AssociateWirelessGatewayWithThingRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTWireless AssociateWirelessGatewayWithThing \a response.
 */
void AssociateWirelessGatewayWithThingResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AssociateWirelessGatewayWithThingResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTWireless::AssociateWirelessGatewayWithThingResponsePrivate
 * \brief The AssociateWirelessGatewayWithThingResponsePrivate class provides private implementation for AssociateWirelessGatewayWithThingResponse.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a AssociateWirelessGatewayWithThingResponsePrivate object with public implementation \a q.
 */
AssociateWirelessGatewayWithThingResponsePrivate::AssociateWirelessGatewayWithThingResponsePrivate(
    AssociateWirelessGatewayWithThingResponse * const q) : IoTWirelessResponsePrivate(q)
{

}

/*!
 * Parses a IoTWireless AssociateWirelessGatewayWithThing response element from \a xml.
 */
void AssociateWirelessGatewayWithThingResponsePrivate::parseAssociateWirelessGatewayWithThingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssociateWirelessGatewayWithThingResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTWireless
} // namespace QtAws
