// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatewirelessgatewayresponse.h"
#include "updatewirelessgatewayresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::UpdateWirelessGatewayResponse
 * \brief The UpdateWirelessGatewayResponse class provides an interace for IoTWireless UpdateWirelessGateway responses.
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
 * \sa IoTWirelessClient::updateWirelessGateway
 */

/*!
 * Constructs a UpdateWirelessGatewayResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateWirelessGatewayResponse::UpdateWirelessGatewayResponse(
        const UpdateWirelessGatewayRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTWirelessResponse(new UpdateWirelessGatewayResponsePrivate(this), parent)
{
    setRequest(new UpdateWirelessGatewayRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateWirelessGatewayRequest * UpdateWirelessGatewayResponse::request() const
{
    Q_D(const UpdateWirelessGatewayResponse);
    return static_cast<const UpdateWirelessGatewayRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTWireless UpdateWirelessGateway \a response.
 */
void UpdateWirelessGatewayResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateWirelessGatewayResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTWireless::UpdateWirelessGatewayResponsePrivate
 * \brief The UpdateWirelessGatewayResponsePrivate class provides private implementation for UpdateWirelessGatewayResponse.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a UpdateWirelessGatewayResponsePrivate object with public implementation \a q.
 */
UpdateWirelessGatewayResponsePrivate::UpdateWirelessGatewayResponsePrivate(
    UpdateWirelessGatewayResponse * const q) : IoTWirelessResponsePrivate(q)
{

}

/*!
 * Parses a IoTWireless UpdateWirelessGateway response element from \a xml.
 */
void UpdateWirelessGatewayResponsePrivate::parseUpdateWirelessGatewayResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateWirelessGatewayResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTWireless
} // namespace QtAws
