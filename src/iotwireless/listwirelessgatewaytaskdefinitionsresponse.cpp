// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listwirelessgatewaytaskdefinitionsresponse.h"
#include "listwirelessgatewaytaskdefinitionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::ListWirelessGatewayTaskDefinitionsResponse
 * \brief The ListWirelessGatewayTaskDefinitionsResponse class provides an interace for IoTWireless ListWirelessGatewayTaskDefinitions responses.
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
 * \sa IoTWirelessClient::listWirelessGatewayTaskDefinitions
 */

/*!
 * Constructs a ListWirelessGatewayTaskDefinitionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListWirelessGatewayTaskDefinitionsResponse::ListWirelessGatewayTaskDefinitionsResponse(
        const ListWirelessGatewayTaskDefinitionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTWirelessResponse(new ListWirelessGatewayTaskDefinitionsResponsePrivate(this), parent)
{
    setRequest(new ListWirelessGatewayTaskDefinitionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListWirelessGatewayTaskDefinitionsRequest * ListWirelessGatewayTaskDefinitionsResponse::request() const
{
    Q_D(const ListWirelessGatewayTaskDefinitionsResponse);
    return static_cast<const ListWirelessGatewayTaskDefinitionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTWireless ListWirelessGatewayTaskDefinitions \a response.
 */
void ListWirelessGatewayTaskDefinitionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListWirelessGatewayTaskDefinitionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTWireless::ListWirelessGatewayTaskDefinitionsResponsePrivate
 * \brief The ListWirelessGatewayTaskDefinitionsResponsePrivate class provides private implementation for ListWirelessGatewayTaskDefinitionsResponse.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a ListWirelessGatewayTaskDefinitionsResponsePrivate object with public implementation \a q.
 */
ListWirelessGatewayTaskDefinitionsResponsePrivate::ListWirelessGatewayTaskDefinitionsResponsePrivate(
    ListWirelessGatewayTaskDefinitionsResponse * const q) : IoTWirelessResponsePrivate(q)
{

}

/*!
 * Parses a IoTWireless ListWirelessGatewayTaskDefinitions response element from \a xml.
 */
void ListWirelessGatewayTaskDefinitionsResponsePrivate::parseListWirelessGatewayTaskDefinitionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListWirelessGatewayTaskDefinitionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTWireless
} // namespace QtAws
