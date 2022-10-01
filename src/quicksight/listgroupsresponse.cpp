// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listgroupsresponse.h"
#include "listgroupsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::ListGroupsResponse
 * \brief The ListGroupsResponse class provides an interace for QuickSight ListGroups responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::listGroups
 */

/*!
 * Constructs a ListGroupsResponse object for \a reply to \a request, with parent \a parent.
 */
ListGroupsResponse::ListGroupsResponse(
        const ListGroupsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new ListGroupsResponsePrivate(this), parent)
{
    setRequest(new ListGroupsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListGroupsRequest * ListGroupsResponse::request() const
{
    Q_D(const ListGroupsResponse);
    return static_cast<const ListGroupsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful QuickSight ListGroups \a response.
 */
void ListGroupsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListGroupsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::ListGroupsResponsePrivate
 * \brief The ListGroupsResponsePrivate class provides private implementation for ListGroupsResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a ListGroupsResponsePrivate object with public implementation \a q.
 */
ListGroupsResponsePrivate::ListGroupsResponsePrivate(
    ListGroupsResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight ListGroups response element from \a xml.
 */
void ListGroupsResponsePrivate::parseListGroupsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListGroupsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws
