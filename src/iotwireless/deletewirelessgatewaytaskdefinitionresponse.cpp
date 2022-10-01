// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletewirelessgatewaytaskdefinitionresponse.h"
#include "deletewirelessgatewaytaskdefinitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::DeleteWirelessGatewayTaskDefinitionResponse
 * \brief The DeleteWirelessGatewayTaskDefinitionResponse class provides an interace for IoTWireless DeleteWirelessGatewayTaskDefinition responses.
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
 * \sa IoTWirelessClient::deleteWirelessGatewayTaskDefinition
 */

/*!
 * Constructs a DeleteWirelessGatewayTaskDefinitionResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteWirelessGatewayTaskDefinitionResponse::DeleteWirelessGatewayTaskDefinitionResponse(
        const DeleteWirelessGatewayTaskDefinitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTWirelessResponse(new DeleteWirelessGatewayTaskDefinitionResponsePrivate(this), parent)
{
    setRequest(new DeleteWirelessGatewayTaskDefinitionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteWirelessGatewayTaskDefinitionRequest * DeleteWirelessGatewayTaskDefinitionResponse::request() const
{
    Q_D(const DeleteWirelessGatewayTaskDefinitionResponse);
    return static_cast<const DeleteWirelessGatewayTaskDefinitionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTWireless DeleteWirelessGatewayTaskDefinition \a response.
 */
void DeleteWirelessGatewayTaskDefinitionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteWirelessGatewayTaskDefinitionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTWireless::DeleteWirelessGatewayTaskDefinitionResponsePrivate
 * \brief The DeleteWirelessGatewayTaskDefinitionResponsePrivate class provides private implementation for DeleteWirelessGatewayTaskDefinitionResponse.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a DeleteWirelessGatewayTaskDefinitionResponsePrivate object with public implementation \a q.
 */
DeleteWirelessGatewayTaskDefinitionResponsePrivate::DeleteWirelessGatewayTaskDefinitionResponsePrivate(
    DeleteWirelessGatewayTaskDefinitionResponse * const q) : IoTWirelessResponsePrivate(q)
{

}

/*!
 * Parses a IoTWireless DeleteWirelessGatewayTaskDefinition response element from \a xml.
 */
void DeleteWirelessGatewayTaskDefinitionResponsePrivate::parseDeleteWirelessGatewayTaskDefinitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteWirelessGatewayTaskDefinitionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTWireless
} // namespace QtAws
