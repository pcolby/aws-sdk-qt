// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createwirelessgatewayresponse.h"
#include "createwirelessgatewayresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::CreateWirelessGatewayResponse
 * \brief The CreateWirelessGatewayResponse class provides an interace for IoTWireless CreateWirelessGateway responses.
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
 * \sa IoTWirelessClient::createWirelessGateway
 */

/*!
 * Constructs a CreateWirelessGatewayResponse object for \a reply to \a request, with parent \a parent.
 */
CreateWirelessGatewayResponse::CreateWirelessGatewayResponse(
        const CreateWirelessGatewayRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTWirelessResponse(new CreateWirelessGatewayResponsePrivate(this), parent)
{
    setRequest(new CreateWirelessGatewayRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateWirelessGatewayRequest * CreateWirelessGatewayResponse::request() const
{
    Q_D(const CreateWirelessGatewayResponse);
    return static_cast<const CreateWirelessGatewayRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTWireless CreateWirelessGateway \a response.
 */
void CreateWirelessGatewayResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateWirelessGatewayResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTWireless::CreateWirelessGatewayResponsePrivate
 * \brief The CreateWirelessGatewayResponsePrivate class provides private implementation for CreateWirelessGatewayResponse.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a CreateWirelessGatewayResponsePrivate object with public implementation \a q.
 */
CreateWirelessGatewayResponsePrivate::CreateWirelessGatewayResponsePrivate(
    CreateWirelessGatewayResponse * const q) : IoTWirelessResponsePrivate(q)
{

}

/*!
 * Parses a IoTWireless CreateWirelessGateway response element from \a xml.
 */
void CreateWirelessGatewayResponsePrivate::parseCreateWirelessGatewayResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateWirelessGatewayResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTWireless
} // namespace QtAws
