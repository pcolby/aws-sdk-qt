// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdashboardsresponse.h"
#include "listdashboardsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::ListDashboardsResponse
 * \brief The ListDashboardsResponse class provides an interace for QuickSight ListDashboards responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::listDashboards
 */

/*!
 * Constructs a ListDashboardsResponse object for \a reply to \a request, with parent \a parent.
 */
ListDashboardsResponse::ListDashboardsResponse(
        const ListDashboardsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new ListDashboardsResponsePrivate(this), parent)
{
    setRequest(new ListDashboardsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListDashboardsRequest * ListDashboardsResponse::request() const
{
    Q_D(const ListDashboardsResponse);
    return static_cast<const ListDashboardsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful QuickSight ListDashboards \a response.
 */
void ListDashboardsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListDashboardsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::ListDashboardsResponsePrivate
 * \brief The ListDashboardsResponsePrivate class provides private implementation for ListDashboardsResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a ListDashboardsResponsePrivate object with public implementation \a q.
 */
ListDashboardsResponsePrivate::ListDashboardsResponsePrivate(
    ListDashboardsResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight ListDashboards response element from \a xml.
 */
void ListDashboardsResponsePrivate::parseListDashboardsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDashboardsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws
