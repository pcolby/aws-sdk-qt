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

#include "listfoldermembersresponse.h"
#include "listfoldermembersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::ListFolderMembersResponse
 * \brief The ListFolderMembersResponse class provides an interace for QuickSight ListFolderMembers responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::listFolderMembers
 */

/*!
 * Constructs a ListFolderMembersResponse object for \a reply to \a request, with parent \a parent.
 */
ListFolderMembersResponse::ListFolderMembersResponse(
        const ListFolderMembersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new ListFolderMembersResponsePrivate(this), parent)
{
    setRequest(new ListFolderMembersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListFolderMembersRequest * ListFolderMembersResponse::request() const
{
    Q_D(const ListFolderMembersResponse);
    return static_cast<const ListFolderMembersRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful QuickSight ListFolderMembers \a response.
 */
void ListFolderMembersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListFolderMembersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::ListFolderMembersResponsePrivate
 * \brief The ListFolderMembersResponsePrivate class provides private implementation for ListFolderMembersResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a ListFolderMembersResponsePrivate object with public implementation \a q.
 */
ListFolderMembersResponsePrivate::ListFolderMembersResponsePrivate(
    ListFolderMembersResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight ListFolderMembers response element from \a xml.
 */
void ListFolderMembersResponsePrivate::parseListFolderMembersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListFolderMembersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws
