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

#include "disassociatemembersresponse.h"
#include "disassociatemembersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GuardDuty {

/*!
 * \class QtAws::GuardDuty::DisassociateMembersResponse
 * \brief The DisassociateMembersResponse class provides an interace for GuardDuty DisassociateMembers responses.
 *
 * \inmodule QtAwsGuardDuty
 *
 *
 * \sa GuardDutyClient::disassociateMembers
 */

/*!
 * Constructs a DisassociateMembersResponse object for \a reply to \a request, with parent \a parent.
 */
DisassociateMembersResponse::DisassociateMembersResponse(
        const DisassociateMembersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GuardDutyResponse(new DisassociateMembersResponsePrivate(this), parent)
{
    setRequest(new DisassociateMembersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DisassociateMembersRequest * DisassociateMembersResponse::request() const
{
    Q_D(const DisassociateMembersResponse);
    return static_cast<const DisassociateMembersRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GuardDuty DisassociateMembers \a response.
 */
void DisassociateMembersResponse::parseSuccess(QIODevice &response)
{
    Q_D(DisassociateMembersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GuardDuty::DisassociateMembersResponsePrivate
 * \brief The DisassociateMembersResponsePrivate class provides private implementation for DisassociateMembersResponse.
 * \internal
 *
 * \inmodule QtAwsGuardDuty
 */

/*!
 * Constructs a DisassociateMembersResponsePrivate object with public implementation \a q.
 */
DisassociateMembersResponsePrivate::DisassociateMembersResponsePrivate(
    DisassociateMembersResponse * const q) : GuardDutyResponsePrivate(q)
{

}

/*!
 * Parses a GuardDuty DisassociateMembers response element from \a xml.
 */
void DisassociateMembersResponsePrivate::parseDisassociateMembersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisassociateMembersResponse"));
    /// @todo
}

} // namespace GuardDuty
} // namespace QtAws
