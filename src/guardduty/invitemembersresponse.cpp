/*
    Copyright 2013-2019 Paul Colby

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

#include "invitemembersresponse.h"
#include "invitemembersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GuardDuty {

/*!
 * \class QtAws::GuardDuty::InviteMembersResponse
 * \brief The InviteMembersResponse class provides an interace for GuardDuty InviteMembers responses.
 *
 * \inmodule QtAwsGuardDuty
 *
 *
 * \sa GuardDutyClient::inviteMembers
 */

/*!
 * Constructs a InviteMembersResponse object for \a reply to \a request, with parent \a parent.
 */
InviteMembersResponse::InviteMembersResponse(
        const InviteMembersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GuardDutyResponse(new InviteMembersResponsePrivate(this), parent)
{
    setRequest(new InviteMembersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const InviteMembersRequest * InviteMembersResponse::request() const
{
    Q_D(const InviteMembersResponse);
    return static_cast<const InviteMembersRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GuardDuty InviteMembers \a response.
 */
void InviteMembersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(InviteMembersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GuardDuty::InviteMembersResponsePrivate
 * \brief The InviteMembersResponsePrivate class provides private implementation for InviteMembersResponse.
 * \internal
 *
 * \inmodule QtAwsGuardDuty
 */

/*!
 * Constructs a InviteMembersResponsePrivate object with public implementation \a q.
 */
InviteMembersResponsePrivate::InviteMembersResponsePrivate(
    InviteMembersResponse * const q) : GuardDutyResponsePrivate(q)
{

}

/*!
 * Parses a GuardDuty InviteMembers response element from \a xml.
 */
void InviteMembersResponsePrivate::parseInviteMembersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("InviteMembersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace GuardDuty
} // namespace QtAws
