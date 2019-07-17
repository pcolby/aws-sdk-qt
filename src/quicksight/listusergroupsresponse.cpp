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

#include "listusergroupsresponse.h"
#include "listusergroupsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::ListUserGroupsResponse
 * \brief The ListUserGroupsResponse class provides an interace for QuickSight ListUserGroups responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless, cloud business intelligence service that makes it easy to extend data
 *  and insights to every user in your organization. This API interface reference contains documentation for a programming
 *  interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::listUserGroups
 */

/*!
 * Constructs a ListUserGroupsResponse object for \a reply to \a request, with parent \a parent.
 */
ListUserGroupsResponse::ListUserGroupsResponse(
        const ListUserGroupsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new ListUserGroupsResponsePrivate(this), parent)
{
    setRequest(new ListUserGroupsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListUserGroupsRequest * ListUserGroupsResponse::request() const
{
    Q_D(const ListUserGroupsResponse);
    return static_cast<const ListUserGroupsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful QuickSight ListUserGroups \a response.
 */
void ListUserGroupsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListUserGroupsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::ListUserGroupsResponsePrivate
 * \brief The ListUserGroupsResponsePrivate class provides private implementation for ListUserGroupsResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a ListUserGroupsResponsePrivate object with public implementation \a q.
 */
ListUserGroupsResponsePrivate::ListUserGroupsResponsePrivate(
    ListUserGroupsResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight ListUserGroups response element from \a xml.
 */
void ListUserGroupsResponsePrivate::parseListUserGroupsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListUserGroupsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws
