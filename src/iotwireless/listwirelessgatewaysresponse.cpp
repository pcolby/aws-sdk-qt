// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listwirelessgatewaysresponse.h"
#include "listwirelessgatewaysresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::ListWirelessGatewaysResponse
 * \brief The ListWirelessGatewaysResponse class provides an interace for IoTWireless ListWirelessGateways responses.
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
 * \sa IoTWirelessClient::listWirelessGateways
 */

/*!
 * Constructs a ListWirelessGatewaysResponse object for \a reply to \a request, with parent \a parent.
 */
ListWirelessGatewaysResponse::ListWirelessGatewaysResponse(
        const ListWirelessGatewaysRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTWirelessResponse(new ListWirelessGatewaysResponsePrivate(this), parent)
{
    setRequest(new ListWirelessGatewaysRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListWirelessGatewaysRequest * ListWirelessGatewaysResponse::request() const
{
    Q_D(const ListWirelessGatewaysResponse);
    return static_cast<const ListWirelessGatewaysRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTWireless ListWirelessGateways \a response.
 */
void ListWirelessGatewaysResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListWirelessGatewaysResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTWireless::ListWirelessGatewaysResponsePrivate
 * \brief The ListWirelessGatewaysResponsePrivate class provides private implementation for ListWirelessGatewaysResponse.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a ListWirelessGatewaysResponsePrivate object with public implementation \a q.
 */
ListWirelessGatewaysResponsePrivate::ListWirelessGatewaysResponsePrivate(
    ListWirelessGatewaysResponse * const q) : IoTWirelessResponsePrivate(q)
{

}

/*!
 * Parses a IoTWireless ListWirelessGateways response element from \a xml.
 */
void ListWirelessGatewaysResponsePrivate::parseListWirelessGatewaysResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListWirelessGatewaysResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTWireless
} // namespace QtAws
