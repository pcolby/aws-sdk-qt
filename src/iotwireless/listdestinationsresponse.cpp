// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdestinationsresponse.h"
#include "listdestinationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::ListDestinationsResponse
 * \brief The ListDestinationsResponse class provides an interace for IoTWireless ListDestinations responses.
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
 * \sa IoTWirelessClient::listDestinations
 */

/*!
 * Constructs a ListDestinationsResponse object for \a reply to \a request, with parent \a parent.
 */
ListDestinationsResponse::ListDestinationsResponse(
        const ListDestinationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTWirelessResponse(new ListDestinationsResponsePrivate(this), parent)
{
    setRequest(new ListDestinationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListDestinationsRequest * ListDestinationsResponse::request() const
{
    Q_D(const ListDestinationsResponse);
    return static_cast<const ListDestinationsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTWireless ListDestinations \a response.
 */
void ListDestinationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListDestinationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTWireless::ListDestinationsResponsePrivate
 * \brief The ListDestinationsResponsePrivate class provides private implementation for ListDestinationsResponse.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a ListDestinationsResponsePrivate object with public implementation \a q.
 */
ListDestinationsResponsePrivate::ListDestinationsResponsePrivate(
    ListDestinationsResponse * const q) : IoTWirelessResponsePrivate(q)
{

}

/*!
 * Parses a IoTWireless ListDestinations response element from \a xml.
 */
void ListDestinationsResponsePrivate::parseListDestinationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDestinationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTWireless
} // namespace QtAws
