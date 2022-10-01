// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdeviceeventsresponse.h"
#include "listdeviceeventsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT1ClickDevices {

/*!
 * \class QtAws::IoT1ClickDevices::ListDeviceEventsResponse
 * \brief The ListDeviceEventsResponse class provides an interace for IoT1ClickDevices ListDeviceEvents responses.
 *
 * \inmodule QtAwsIoT1ClickDevices
 *
 *  Describes all of the AWS IoT 1-Click device-related API operations for the service. Also provides sample requests,
 *  responses, and errors for the supported web services
 *
 * \sa IoT1ClickDevicesClient::listDeviceEvents
 */

/*!
 * Constructs a ListDeviceEventsResponse object for \a reply to \a request, with parent \a parent.
 */
ListDeviceEventsResponse::ListDeviceEventsResponse(
        const ListDeviceEventsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoT1ClickDevicesResponse(new ListDeviceEventsResponsePrivate(this), parent)
{
    setRequest(new ListDeviceEventsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListDeviceEventsRequest * ListDeviceEventsResponse::request() const
{
    Q_D(const ListDeviceEventsResponse);
    return static_cast<const ListDeviceEventsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoT1ClickDevices ListDeviceEvents \a response.
 */
void ListDeviceEventsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListDeviceEventsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoT1ClickDevices::ListDeviceEventsResponsePrivate
 * \brief The ListDeviceEventsResponsePrivate class provides private implementation for ListDeviceEventsResponse.
 * \internal
 *
 * \inmodule QtAwsIoT1ClickDevices
 */

/*!
 * Constructs a ListDeviceEventsResponsePrivate object with public implementation \a q.
 */
ListDeviceEventsResponsePrivate::ListDeviceEventsResponsePrivate(
    ListDeviceEventsResponse * const q) : IoT1ClickDevicesResponsePrivate(q)
{

}

/*!
 * Parses a IoT1ClickDevices ListDeviceEvents response element from \a xml.
 */
void ListDeviceEventsResponsePrivate::parseListDeviceEventsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDeviceEventsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoT1ClickDevices
} // namespace QtAws
