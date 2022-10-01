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

#include "searchdashboardsresponse.h"
#include "searchdashboardsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::SearchDashboardsResponse
 * \brief The SearchDashboardsResponse class provides an interace for QuickSight SearchDashboards responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::searchDashboards
 */

/*!
 * Constructs a SearchDashboardsResponse object for \a reply to \a request, with parent \a parent.
 */
SearchDashboardsResponse::SearchDashboardsResponse(
        const SearchDashboardsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new SearchDashboardsResponsePrivate(this), parent)
{
    setRequest(new SearchDashboardsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SearchDashboardsRequest * SearchDashboardsResponse::request() const
{
    Q_D(const SearchDashboardsResponse);
    return static_cast<const SearchDashboardsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful QuickSight SearchDashboards \a response.
 */
void SearchDashboardsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SearchDashboardsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::SearchDashboardsResponsePrivate
 * \brief The SearchDashboardsResponsePrivate class provides private implementation for SearchDashboardsResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a SearchDashboardsResponsePrivate object with public implementation \a q.
 */
SearchDashboardsResponsePrivate::SearchDashboardsResponsePrivate(
    SearchDashboardsResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight SearchDashboards response element from \a xml.
 */
void SearchDashboardsResponsePrivate::parseSearchDashboardsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SearchDashboardsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws
