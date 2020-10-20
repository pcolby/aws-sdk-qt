/*
    Copyright 2013-2020 Paul Colby

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

#include "listnetworkprofilesresponse.h"
#include "listnetworkprofilesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::ListNetworkProfilesResponse
 * \brief The ListNetworkProfilesResponse class provides an interace for DeviceFarm ListNetworkProfiles responses.
 *
 * \inmodule QtAwsDeviceFarm
 *
 *  AWS Device Farm is a service that enables mobile app developers to test Android, iOS, and Fire OS apps on physical
 *  phones, tablets, and other devices in the
 *
 * \sa DeviceFarmClient::listNetworkProfiles
 */

/*!
 * Constructs a ListNetworkProfilesResponse object for \a reply to \a request, with parent \a parent.
 */
ListNetworkProfilesResponse::ListNetworkProfilesResponse(
        const ListNetworkProfilesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new ListNetworkProfilesResponsePrivate(this), parent)
{
    setRequest(new ListNetworkProfilesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListNetworkProfilesRequest * ListNetworkProfilesResponse::request() const
{
    Q_D(const ListNetworkProfilesResponse);
    return static_cast<const ListNetworkProfilesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DeviceFarm ListNetworkProfiles \a response.
 */
void ListNetworkProfilesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListNetworkProfilesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DeviceFarm::ListNetworkProfilesResponsePrivate
 * \brief The ListNetworkProfilesResponsePrivate class provides private implementation for ListNetworkProfilesResponse.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a ListNetworkProfilesResponsePrivate object with public implementation \a q.
 */
ListNetworkProfilesResponsePrivate::ListNetworkProfilesResponsePrivate(
    ListNetworkProfilesResponse * const q) : DeviceFarmResponsePrivate(q)
{

}

/*!
 * Parses a DeviceFarm ListNetworkProfiles response element from \a xml.
 */
void ListNetworkProfilesResponsePrivate::parseListNetworkProfilesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListNetworkProfilesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DeviceFarm
} // namespace QtAws
