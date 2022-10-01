// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
