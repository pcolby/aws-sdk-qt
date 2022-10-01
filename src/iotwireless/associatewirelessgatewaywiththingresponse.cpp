/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
