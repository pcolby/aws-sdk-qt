// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listeventconfigurationsresponse.h"
#include "listeventconfigurationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::ListEventConfigurationsResponse
 * \brief The ListEventConfigurationsResponse class provides an interace for IoTWireless ListEventConfigurations responses.
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
 * \sa IoTWirelessClient::listEventConfigurations
 */

/*!
 * Constructs a ListEventConfigurationsResponse object for \a reply to \a request, with parent \a parent.
 */
ListEventConfigurationsResponse::ListEventConfigurationsResponse(
        const ListEventConfigurationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTWirelessResponse(new ListEventConfigurationsResponsePrivate(this), parent)
{
    setRequest(new ListEventConfigurationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListEventConfigurationsRequest * ListEventConfigurationsResponse::request() const
{
    Q_D(const ListEventConfigurationsResponse);
    return static_cast<const ListEventConfigurationsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTWireless ListEventConfigurations \a response.
 */
void ListEventConfigurationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListEventConfigurationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTWireless::ListEventConfigurationsResponsePrivate
 * \brief The ListEventConfigurationsResponsePrivate class provides private implementation for ListEventConfigurationsResponse.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a ListEventConfigurationsResponsePrivate object with public implementation \a q.
 */
ListEventConfigurationsResponsePrivate::ListEventConfigurationsResponsePrivate(
    ListEventConfigurationsResponse * const q) : IoTWirelessResponsePrivate(q)
{

}

/*!
 * Parses a IoTWireless ListEventConfigurations response element from \a xml.
 */
void ListEventConfigurationsResponsePrivate::parseListEventConfigurationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListEventConfigurationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTWireless
} // namespace QtAws
