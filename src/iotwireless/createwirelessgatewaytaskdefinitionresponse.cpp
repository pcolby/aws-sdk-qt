// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createwirelessgatewaytaskdefinitionresponse.h"
#include "createwirelessgatewaytaskdefinitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::CreateWirelessGatewayTaskDefinitionResponse
 * \brief The CreateWirelessGatewayTaskDefinitionResponse class provides an interace for IoTWireless CreateWirelessGatewayTaskDefinition responses.
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
 * \sa IoTWirelessClient::createWirelessGatewayTaskDefinition
 */

/*!
 * Constructs a CreateWirelessGatewayTaskDefinitionResponse object for \a reply to \a request, with parent \a parent.
 */
CreateWirelessGatewayTaskDefinitionResponse::CreateWirelessGatewayTaskDefinitionResponse(
        const CreateWirelessGatewayTaskDefinitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTWirelessResponse(new CreateWirelessGatewayTaskDefinitionResponsePrivate(this), parent)
{
    setRequest(new CreateWirelessGatewayTaskDefinitionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateWirelessGatewayTaskDefinitionRequest * CreateWirelessGatewayTaskDefinitionResponse::request() const
{
    Q_D(const CreateWirelessGatewayTaskDefinitionResponse);
    return static_cast<const CreateWirelessGatewayTaskDefinitionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTWireless CreateWirelessGatewayTaskDefinition \a response.
 */
void CreateWirelessGatewayTaskDefinitionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateWirelessGatewayTaskDefinitionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTWireless::CreateWirelessGatewayTaskDefinitionResponsePrivate
 * \brief The CreateWirelessGatewayTaskDefinitionResponsePrivate class provides private implementation for CreateWirelessGatewayTaskDefinitionResponse.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a CreateWirelessGatewayTaskDefinitionResponsePrivate object with public implementation \a q.
 */
CreateWirelessGatewayTaskDefinitionResponsePrivate::CreateWirelessGatewayTaskDefinitionResponsePrivate(
    CreateWirelessGatewayTaskDefinitionResponse * const q) : IoTWirelessResponsePrivate(q)
{

}

/*!
 * Parses a IoTWireless CreateWirelessGatewayTaskDefinition response element from \a xml.
 */
void CreateWirelessGatewayTaskDefinitionResponsePrivate::parseCreateWirelessGatewayTaskDefinitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateWirelessGatewayTaskDefinitionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTWireless
} // namespace QtAws
