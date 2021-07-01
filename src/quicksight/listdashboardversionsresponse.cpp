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

#include "listdashboardversionsresponse.h"
#include "listdashboardversionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::ListDashboardVersionsResponse
 * \brief The ListDashboardVersionsResponse class provides an interace for QuickSight ListDashboardVersions responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the AWS Cloud that makes it easy to
 *  extend data and insights to every user in your organization. This API reference contains documentation for a programming
 *  interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::listDashboardVersions
 */

/*!
 * Constructs a ListDashboardVersionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListDashboardVersionsResponse::ListDashboardVersionsResponse(
        const ListDashboardVersionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new ListDashboardVersionsResponsePrivate(this), parent)
{
    setRequest(new ListDashboardVersionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListDashboardVersionsRequest * ListDashboardVersionsResponse::request() const
{
    Q_D(const ListDashboardVersionsResponse);
    return static_cast<const ListDashboardVersionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful QuickSight ListDashboardVersions \a response.
 */
void ListDashboardVersionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListDashboardVersionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::ListDashboardVersionsResponsePrivate
 * \brief The ListDashboardVersionsResponsePrivate class provides private implementation for ListDashboardVersionsResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a ListDashboardVersionsResponsePrivate object with public implementation \a q.
 */
ListDashboardVersionsResponsePrivate::ListDashboardVersionsResponsePrivate(
    ListDashboardVersionsResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight ListDashboardVersions response element from \a xml.
 */
void ListDashboardVersionsResponsePrivate::parseListDashboardVersionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDashboardVersionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws
