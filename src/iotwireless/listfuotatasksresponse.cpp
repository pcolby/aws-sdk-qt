// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listfuotatasksresponse.h"
#include "listfuotatasksresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::ListFuotaTasksResponse
 * \brief The ListFuotaTasksResponse class provides an interace for IoTWireless ListFuotaTasks responses.
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
 * \sa IoTWirelessClient::listFuotaTasks
 */

/*!
 * Constructs a ListFuotaTasksResponse object for \a reply to \a request, with parent \a parent.
 */
ListFuotaTasksResponse::ListFuotaTasksResponse(
        const ListFuotaTasksRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTWirelessResponse(new ListFuotaTasksResponsePrivate(this), parent)
{
    setRequest(new ListFuotaTasksRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListFuotaTasksRequest * ListFuotaTasksResponse::request() const
{
    Q_D(const ListFuotaTasksResponse);
    return static_cast<const ListFuotaTasksRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTWireless ListFuotaTasks \a response.
 */
void ListFuotaTasksResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListFuotaTasksResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTWireless::ListFuotaTasksResponsePrivate
 * \brief The ListFuotaTasksResponsePrivate class provides private implementation for ListFuotaTasksResponse.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a ListFuotaTasksResponsePrivate object with public implementation \a q.
 */
ListFuotaTasksResponsePrivate::ListFuotaTasksResponsePrivate(
    ListFuotaTasksResponse * const q) : IoTWirelessResponsePrivate(q)
{

}

/*!
 * Parses a IoTWireless ListFuotaTasks response element from \a xml.
 */
void ListFuotaTasksResponsePrivate::parseListFuotaTasksResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListFuotaTasksResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTWireless
} // namespace QtAws
