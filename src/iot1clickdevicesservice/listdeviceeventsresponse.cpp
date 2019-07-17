/*
    Copyright 2013-2019 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "listdeviceeventsresponse.h"
#include "listdeviceeventsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT1ClickDevicesService {

/*!
 * \class QtAws::IoT1ClickDevicesService::ListDeviceEventsResponse
 * \brief The ListDeviceEventsResponse class provides an interace for IoT1ClickDevicesService ListDeviceEvents responses.
 *
 * \inmodule QtAwsIoT1ClickDevicesService
 *
 *  Stub
 *
 * \sa IoT1ClickDevicesServiceClient::listDeviceEvents
 */

/*!
 * Constructs a ListDeviceEventsResponse object for \a reply to \a request, with parent \a parent.
 */
ListDeviceEventsResponse::ListDeviceEventsResponse(
        const ListDeviceEventsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoT1ClickDevicesServiceResponse(new ListDeviceEventsResponsePrivate(this), parent)
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
 * Parses a successful IoT1ClickDevicesService ListDeviceEvents \a response.
 */
void ListDeviceEventsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListDeviceEventsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoT1ClickDevicesService::ListDeviceEventsResponsePrivate
 * \brief The ListDeviceEventsResponsePrivate class provides private implementation for ListDeviceEventsResponse.
 * \internal
 *
 * \inmodule QtAwsIoT1ClickDevicesService
 */

/*!
 * Constructs a ListDeviceEventsResponsePrivate object with public implementation \a q.
 */
ListDeviceEventsResponsePrivate::ListDeviceEventsResponsePrivate(
    ListDeviceEventsResponse * const q) : IoT1ClickDevicesServiceResponsePrivate(q)
{

}

/*!
 * Parses a IoT1ClickDevicesService ListDeviceEvents response element from \a xml.
 */
void ListDeviceEventsResponsePrivate::parseListDeviceEventsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDeviceEventsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoT1ClickDevicesService
} // namespace QtAws
