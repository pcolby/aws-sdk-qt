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

#include "listgroupmembershipsresponse.h"
#include "listgroupmembershipsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::ListGroupMembershipsResponse
 * \brief The ListGroupMembershipsResponse class provides an interace for QuickSight ListGroupMemberships responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless, cloud business intelligence service that makes it easy to extend data
 *  and insights to every user in your organization. This API interface reference contains documentation for a programming
 *  interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::listGroupMemberships
 */

/*!
 * Constructs a ListGroupMembershipsResponse object for \a reply to \a request, with parent \a parent.
 */
ListGroupMembershipsResponse::ListGroupMembershipsResponse(
        const ListGroupMembershipsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new ListGroupMembershipsResponsePrivate(this), parent)
{
    setRequest(new ListGroupMembershipsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListGroupMembershipsRequest * ListGroupMembershipsResponse::request() const
{
    Q_D(const ListGroupMembershipsResponse);
    return static_cast<const ListGroupMembershipsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful QuickSight ListGroupMemberships \a response.
 */
void ListGroupMembershipsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListGroupMembershipsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::ListGroupMembershipsResponsePrivate
 * \brief The ListGroupMembershipsResponsePrivate class provides private implementation for ListGroupMembershipsResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a ListGroupMembershipsResponsePrivate object with public implementation \a q.
 */
ListGroupMembershipsResponsePrivate::ListGroupMembershipsResponsePrivate(
    ListGroupMembershipsResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight ListGroupMemberships response element from \a xml.
 */
void ListGroupMembershipsResponsePrivate::parseListGroupMembershipsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListGroupMembershipsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws
