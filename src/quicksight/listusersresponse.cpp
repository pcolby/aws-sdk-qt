// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listusersresponse.h"
#include "listusersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::ListUsersResponse
 * \brief The ListUsersResponse class provides an interace for QuickSight ListUsers responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::listUsers
 */

/*!
 * Constructs a ListUsersResponse object for \a reply to \a request, with parent \a parent.
 */
ListUsersResponse::ListUsersResponse(
        const ListUsersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new ListUsersResponsePrivate(this), parent)
{
    setRequest(new ListUsersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListUsersRequest * ListUsersResponse::request() const
{
    Q_D(const ListUsersResponse);
    return static_cast<const ListUsersRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful QuickSight ListUsers \a response.
 */
void ListUsersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListUsersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::ListUsersResponsePrivate
 * \brief The ListUsersResponsePrivate class provides private implementation for ListUsersResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a ListUsersResponsePrivate object with public implementation \a q.
 */
ListUsersResponsePrivate::ListUsersResponsePrivate(
    ListUsersResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight ListUsers response element from \a xml.
 */
void ListUsersResponsePrivate::parseListUsersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListUsersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws
