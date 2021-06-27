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

#include "listthemeversionsresponse.h"
#include "listthemeversionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::ListThemeVersionsResponse
 * \brief The ListThemeVersionsResponse class provides an interace for QuickSight ListThemeVersions responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the AWS Cloud that makes it easy to
 *  extend data and insights to every user in your organization. This API reference contains documentation for a programming
 *  interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::listThemeVersions
 */

/*!
 * Constructs a ListThemeVersionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListThemeVersionsResponse::ListThemeVersionsResponse(
        const ListThemeVersionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new ListThemeVersionsResponsePrivate(this), parent)
{
    setRequest(new ListThemeVersionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListThemeVersionsRequest * ListThemeVersionsResponse::request() const
{
    return static_cast<const ListThemeVersionsRequest *>(QuickSightResponse::request());
}

/*!
 * \reimp
 * Parses a successful QuickSight ListThemeVersions \a response.
 */
void ListThemeVersionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListThemeVersionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::ListThemeVersionsResponsePrivate
 * \brief The ListThemeVersionsResponsePrivate class provides private implementation for ListThemeVersionsResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a ListThemeVersionsResponsePrivate object with public implementation \a q.
 */
ListThemeVersionsResponsePrivate::ListThemeVersionsResponsePrivate(
    ListThemeVersionsResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight ListThemeVersions response element from \a xml.
 */
void ListThemeVersionsResponsePrivate::parseListThemeVersionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListThemeVersionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws
