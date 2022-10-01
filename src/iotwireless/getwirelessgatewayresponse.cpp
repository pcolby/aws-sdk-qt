// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getwirelessgatewayresponse.h"
#include "getwirelessgatewayresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::GetWirelessGatewayResponse
 * \brief The GetWirelessGatewayResponse class provides an interace for IoTWireless GetWirelessGateway responses.
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
 * \sa IoTWirelessClient::getWirelessGateway
 */

/*!
 * Constructs a GetWirelessGatewayResponse object for \a reply to \a request, with parent \a parent.
 */
GetWirelessGatewayResponse::GetWirelessGatewayResponse(
        const GetWirelessGatewayRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTWirelessResponse(new GetWirelessGatewayResponsePrivate(this), parent)
{
    setRequest(new GetWirelessGatewayRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetWirelessGatewayRequest * GetWirelessGatewayResponse::request() const
{
    Q_D(const GetWirelessGatewayResponse);
    return static_cast<const GetWirelessGatewayRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTWireless GetWirelessGateway \a response.
 */
void GetWirelessGatewayResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetWirelessGatewayResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTWireless::GetWirelessGatewayResponsePrivate
 * \brief The GetWirelessGatewayResponsePrivate class provides private implementation for GetWirelessGatewayResponse.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a GetWirelessGatewayResponsePrivate object with public implementation \a q.
 */
GetWirelessGatewayResponsePrivate::GetWirelessGatewayResponsePrivate(
    GetWirelessGatewayResponse * const q) : IoTWirelessResponsePrivate(q)
{

}

/*!
 * Parses a IoTWireless GetWirelessGateway response element from \a xml.
 */
void GetWirelessGatewayResponsePrivate::parseGetWirelessGatewayResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetWirelessGatewayResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTWireless
} // namespace QtAws
