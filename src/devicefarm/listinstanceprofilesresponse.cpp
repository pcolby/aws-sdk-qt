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

#include "listinstanceprofilesresponse.h"
#include "listinstanceprofilesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::ListInstanceProfilesResponse
 * \brief The ListInstanceProfilesResponse class provides an interace for DeviceFarm ListInstanceProfiles responses.
 *
 * \inmodule QtAwsDeviceFarm
 *
 *  AWS Device Farm is a service that enables mobile app developers to test Android, iOS, and Fire OS apps on physical
 *  phones, tablets, and other devices in the
 *
 * \sa DeviceFarmClient::listInstanceProfiles
 */

/*!
 * Constructs a ListInstanceProfilesResponse object for \a reply to \a request, with parent \a parent.
 */
ListInstanceProfilesResponse::ListInstanceProfilesResponse(
        const ListInstanceProfilesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new ListInstanceProfilesResponsePrivate(this), parent)
{
    setRequest(new ListInstanceProfilesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListInstanceProfilesRequest * ListInstanceProfilesResponse::request() const
{
    Q_D(const ListInstanceProfilesResponse);
    return static_cast<const ListInstanceProfilesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DeviceFarm ListInstanceProfiles \a response.
 */
void ListInstanceProfilesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListInstanceProfilesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DeviceFarm::ListInstanceProfilesResponsePrivate
 * \brief The ListInstanceProfilesResponsePrivate class provides private implementation for ListInstanceProfilesResponse.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a ListInstanceProfilesResponsePrivate object with public implementation \a q.
 */
ListInstanceProfilesResponsePrivate::ListInstanceProfilesResponsePrivate(
    ListInstanceProfilesResponse * const q) : DeviceFarmResponsePrivate(q)
{

}

/*!
 * Parses a DeviceFarm ListInstanceProfiles response element from \a xml.
 */
void ListInstanceProfilesResponsePrivate::parseListInstanceProfilesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListInstanceProfilesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DeviceFarm
} // namespace QtAws
