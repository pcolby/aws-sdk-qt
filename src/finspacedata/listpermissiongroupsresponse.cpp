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

#include "listpermissiongroupsresponse.h"
#include "listpermissiongroupsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FinspaceData {

/*!
 * \class QtAws::FinspaceData::ListPermissionGroupsResponse
 * \brief The ListPermissionGroupsResponse class provides an interace for FinspaceData ListPermissionGroups responses.
 *
 * \inmodule QtAwsFinspaceData
 *
 *  The FinSpace APIs let you take actions inside the
 *
 * \sa FinspaceDataClient::listPermissionGroups
 */

/*!
 * Constructs a ListPermissionGroupsResponse object for \a reply to \a request, with parent \a parent.
 */
ListPermissionGroupsResponse::ListPermissionGroupsResponse(
        const ListPermissionGroupsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FinspaceDataResponse(new ListPermissionGroupsResponsePrivate(this), parent)
{
    setRequest(new ListPermissionGroupsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListPermissionGroupsRequest * ListPermissionGroupsResponse::request() const
{
    Q_D(const ListPermissionGroupsResponse);
    return static_cast<const ListPermissionGroupsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful FinspaceData ListPermissionGroups \a response.
 */
void ListPermissionGroupsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListPermissionGroupsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FinspaceData::ListPermissionGroupsResponsePrivate
 * \brief The ListPermissionGroupsResponsePrivate class provides private implementation for ListPermissionGroupsResponse.
 * \internal
 *
 * \inmodule QtAwsFinspaceData
 */

/*!
 * Constructs a ListPermissionGroupsResponsePrivate object with public implementation \a q.
 */
ListPermissionGroupsResponsePrivate::ListPermissionGroupsResponsePrivate(
    ListPermissionGroupsResponse * const q) : FinspaceDataResponsePrivate(q)
{

}

/*!
 * Parses a FinspaceData ListPermissionGroups response element from \a xml.
 */
void ListPermissionGroupsResponsePrivate::parseListPermissionGroupsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListPermissionGroupsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FinspaceData
} // namespace QtAws
