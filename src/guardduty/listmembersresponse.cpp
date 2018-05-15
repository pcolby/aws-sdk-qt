/*
    Copyright 2013-2018 Paul Colby

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

#include "listmembersresponse.h"
#include "listmembersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GuardDuty {

/*!
 * \class QtAws::GuardDuty::ListMembersResponse
 * \brief The ListMembersResponse class provides an interace for GuardDuty ListMembers responses.
 *
 * \inmodule QtAwsGuardDuty
 *
 *
 * \sa GuardDutyClient::listMembers
 */

/*!
 * Constructs a ListMembersResponse object for \a reply to \a request, with parent \a parent.
 */
ListMembersResponse::ListMembersResponse(
        const ListMembersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GuardDutyResponse(new ListMembersResponsePrivate(this), parent)
{
    setRequest(new ListMembersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListMembersRequest * ListMembersResponse::request() const
{
    Q_D(const ListMembersResponse);
    return static_cast<const ListMembersRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GuardDuty ListMembers \a response.
 */
void ListMembersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListMembersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GuardDuty::ListMembersResponsePrivate
 * \brief The ListMembersResponsePrivate class provides private implementation for ListMembersResponse.
 * \internal
 *
 * \inmodule QtAwsGuardDuty
 */

/*!
 * Constructs a ListMembersResponsePrivate object with public implementation \a q.
 */
ListMembersResponsePrivate::ListMembersResponsePrivate(
    ListMembersResponse * const q) : GuardDutyResponsePrivate(q)
{

}

/*!
 * Parses a GuardDuty ListMembers response element from \a xml.
 */
void ListMembersResponsePrivate::parseListMembersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListMembersResponse"));
    /// @todo
}

} // namespace GuardDuty
} // namespace QtAws
