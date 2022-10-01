// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
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
