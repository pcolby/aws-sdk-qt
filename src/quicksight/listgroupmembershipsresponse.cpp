// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
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
