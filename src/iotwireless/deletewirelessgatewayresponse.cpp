// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletewirelessgatewayresponse.h"
#include "deletewirelessgatewayresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::DeleteWirelessGatewayResponse
 * \brief The DeleteWirelessGatewayResponse class provides an interace for IoTWireless DeleteWirelessGateway responses.
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
 * \sa IoTWirelessClient::deleteWirelessGateway
 */

/*!
 * Constructs a DeleteWirelessGatewayResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteWirelessGatewayResponse::DeleteWirelessGatewayResponse(
        const DeleteWirelessGatewayRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTWirelessResponse(new DeleteWirelessGatewayResponsePrivate(this), parent)
{
    setRequest(new DeleteWirelessGatewayRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteWirelessGatewayRequest * DeleteWirelessGatewayResponse::request() const
{
    Q_D(const DeleteWirelessGatewayResponse);
    return static_cast<const DeleteWirelessGatewayRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTWireless DeleteWirelessGateway \a response.
 */
void DeleteWirelessGatewayResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteWirelessGatewayResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTWireless::DeleteWirelessGatewayResponsePrivate
 * \brief The DeleteWirelessGatewayResponsePrivate class provides private implementation for DeleteWirelessGatewayResponse.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a DeleteWirelessGatewayResponsePrivate object with public implementation \a q.
 */
DeleteWirelessGatewayResponsePrivate::DeleteWirelessGatewayResponsePrivate(
    DeleteWirelessGatewayResponse * const q) : IoTWirelessResponsePrivate(q)
{

}

/*!
 * Parses a IoTWireless DeleteWirelessGateway response element from \a xml.
 */
void DeleteWirelessGatewayResponsePrivate::parseDeleteWirelessGatewayResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteWirelessGatewayResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTWireless
} // namespace QtAws
