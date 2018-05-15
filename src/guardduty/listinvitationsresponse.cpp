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

#include "listinvitationsresponse.h"
#include "listinvitationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GuardDuty {

/*!
 * \class QtAws::GuardDuty::ListInvitationsResponse
 * \brief The ListInvitationsResponse class provides an interace for GuardDuty ListInvitations responses.
 *
 * \inmodule QtAwsGuardDuty
 *
 *
 * \sa GuardDutyClient::listInvitations
 */

/*!
 * Constructs a ListInvitationsResponse object for \a reply to \a request, with parent \a parent.
 */
ListInvitationsResponse::ListInvitationsResponse(
        const ListInvitationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GuardDutyResponse(new ListInvitationsResponsePrivate(this), parent)
{
    setRequest(new ListInvitationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListInvitationsRequest * ListInvitationsResponse::request() const
{
    Q_D(const ListInvitationsResponse);
    return static_cast<const ListInvitationsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GuardDuty ListInvitations \a response.
 */
void ListInvitationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListInvitationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GuardDuty::ListInvitationsResponsePrivate
 * \brief The ListInvitationsResponsePrivate class provides private implementation for ListInvitationsResponse.
 * \internal
 *
 * \inmodule QtAwsGuardDuty
 */

/*!
 * Constructs a ListInvitationsResponsePrivate object with public implementation \a q.
 */
ListInvitationsResponsePrivate::ListInvitationsResponsePrivate(
    ListInvitationsResponse * const q) : GuardDutyResponsePrivate(q)
{

}

/*!
 * Parses a GuardDuty ListInvitations response element from \a xml.
 */
void ListInvitationsResponsePrivate::parseListInvitationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListInvitationsResponse"));
    /// @todo
}

} // namespace GuardDuty
} // namespace QtAws
