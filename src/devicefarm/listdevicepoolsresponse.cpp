/*
    Copyright 2013-2018 Paul Colby

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

#include "listdevicepoolsresponse.h"
#include "listdevicepoolsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::ListDevicePoolsResponse
 * \brief The ListDevicePoolsResponse class provides an interace for DeviceFarm ListDevicePools responses.
 *
 * \inmodule QtAwsDeviceFarm
 *
 *  AWS Device Farm is a service that enables mobile app developers to test Android, iOS, and Fire OS apps on physical
 *  phones, tablets, and other devices in the
 *
 * \sa DeviceFarmClient::listDevicePools
 */

/*!
 * Constructs a ListDevicePoolsResponse object for \a reply to \a request, with parent \a parent.
 */
ListDevicePoolsResponse::ListDevicePoolsResponse(
        const ListDevicePoolsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new ListDevicePoolsResponsePrivate(this), parent)
{
    setRequest(new ListDevicePoolsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListDevicePoolsRequest * ListDevicePoolsResponse::request() const
{
    Q_D(const ListDevicePoolsResponse);
    return static_cast<const ListDevicePoolsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DeviceFarm ListDevicePools \a response.
 */
void ListDevicePoolsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListDevicePoolsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DeviceFarm::ListDevicePoolsResponsePrivate
 * \brief The ListDevicePoolsResponsePrivate class provides private implementation for ListDevicePoolsResponse.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a ListDevicePoolsResponsePrivate object with public implementation \a q.
 */
ListDevicePoolsResponsePrivate::ListDevicePoolsResponsePrivate(
    ListDevicePoolsResponse * const q) : DeviceFarmResponsePrivate(q)
{

}

/*!
 * Parses a DeviceFarm ListDevicePools response element from \a xml.
 */
void ListDevicePoolsResponsePrivate::parseListDevicePoolsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDevicePoolsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DeviceFarm
} // namespace QtAws
