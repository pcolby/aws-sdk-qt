// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
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
