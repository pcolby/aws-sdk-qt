// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getwirelessgatewaytaskdefinitionresponse.h"
#include "getwirelessgatewaytaskdefinitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::GetWirelessGatewayTaskDefinitionResponse
 * \brief The GetWirelessGatewayTaskDefinitionResponse class provides an interace for IoTWireless GetWirelessGatewayTaskDefinition responses.
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
 * \sa IoTWirelessClient::getWirelessGatewayTaskDefinition
 */

/*!
 * Constructs a GetWirelessGatewayTaskDefinitionResponse object for \a reply to \a request, with parent \a parent.
 */
GetWirelessGatewayTaskDefinitionResponse::GetWirelessGatewayTaskDefinitionResponse(
        const GetWirelessGatewayTaskDefinitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTWirelessResponse(new GetWirelessGatewayTaskDefinitionResponsePrivate(this), parent)
{
    setRequest(new GetWirelessGatewayTaskDefinitionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetWirelessGatewayTaskDefinitionRequest * GetWirelessGatewayTaskDefinitionResponse::request() const
{
    Q_D(const GetWirelessGatewayTaskDefinitionResponse);
    return static_cast<const GetWirelessGatewayTaskDefinitionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTWireless GetWirelessGatewayTaskDefinition \a response.
 */
void GetWirelessGatewayTaskDefinitionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetWirelessGatewayTaskDefinitionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTWireless::GetWirelessGatewayTaskDefinitionResponsePrivate
 * \brief The GetWirelessGatewayTaskDefinitionResponsePrivate class provides private implementation for GetWirelessGatewayTaskDefinitionResponse.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a GetWirelessGatewayTaskDefinitionResponsePrivate object with public implementation \a q.
 */
GetWirelessGatewayTaskDefinitionResponsePrivate::GetWirelessGatewayTaskDefinitionResponsePrivate(
    GetWirelessGatewayTaskDefinitionResponse * const q) : IoTWirelessResponsePrivate(q)
{

}

/*!
 * Parses a IoTWireless GetWirelessGatewayTaskDefinition response element from \a xml.
 */
void GetWirelessGatewayTaskDefinitionResponsePrivate::parseGetWirelessGatewayTaskDefinitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetWirelessGatewayTaskDefinitionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTWireless
} // namespace QtAws
