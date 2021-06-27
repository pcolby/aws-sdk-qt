/*
    Copyright 2013-2021 Paul Colby

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

#include "listpackaginggroupsresponse.h"
#include "listpackaginggroupsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaPackageVod {

/*!
 * \class QtAws::MediaPackageVod::ListPackagingGroupsResponse
 * \brief The ListPackagingGroupsResponse class provides an interace for MediaPackageVod ListPackagingGroups responses.
 *
 * \inmodule QtAwsMediaPackageVod
 *
 *
 * \sa MediaPackageVodClient::listPackagingGroups
 */

/*!
 * Constructs a ListPackagingGroupsResponse object for \a reply to \a request, with parent \a parent.
 */
ListPackagingGroupsResponse::ListPackagingGroupsResponse(
        const ListPackagingGroupsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaPackageVodResponse(new ListPackagingGroupsResponsePrivate(this), parent)
{
    setRequest(new ListPackagingGroupsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListPackagingGroupsRequest * ListPackagingGroupsResponse::request() const
{
    return static_cast<const ListPackagingGroupsRequest *>(MediaPackageVodResponse::request());
}

/*!
 * \reimp
 * Parses a successful MediaPackageVod ListPackagingGroups \a response.
 */
void ListPackagingGroupsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListPackagingGroupsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaPackageVod::ListPackagingGroupsResponsePrivate
 * \brief The ListPackagingGroupsResponsePrivate class provides private implementation for ListPackagingGroupsResponse.
 * \internal
 *
 * \inmodule QtAwsMediaPackageVod
 */

/*!
 * Constructs a ListPackagingGroupsResponsePrivate object with public implementation \a q.
 */
ListPackagingGroupsResponsePrivate::ListPackagingGroupsResponsePrivate(
    ListPackagingGroupsResponse * const q) : MediaPackageVodResponsePrivate(q)
{

}

/*!
 * Parses a MediaPackageVod ListPackagingGroups response element from \a xml.
 */
void ListPackagingGroupsResponsePrivate::parseListPackagingGroupsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListPackagingGroupsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaPackageVod
} // namespace QtAws
