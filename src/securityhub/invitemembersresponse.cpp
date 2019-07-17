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
namespace SecurityHub {

/*!
 * \class QtAws::SecurityHub::InviteMembersResponse
 * \brief The InviteMembersResponse class provides an interace for SecurityHub InviteMembers responses.
 *
 * \inmodule QtAwsSecurityHub
 *
 *  AWS Security Hub provides you with a comprehensive view of your security state within AWS and your compliance with the
 *  security industry standards and best practices. Security Hub collects security data from across AWS accounts, services,
 *  and supported third-party partners and helps you analyze your security trends and identify the highest priority security
 *  issues. For more information, see <a href="">AWS Security Hub User Guide</a>.
 *
 * \sa SecurityHubClient::inviteMembers
 */

/*!
 * Constructs a InviteMembersResponse object for \a reply to \a request, with parent \a parent.
 */
InviteMembersResponse::InviteMembersResponse(
        const InviteMembersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SecurityHubResponse(new InviteMembersResponsePrivate(this), parent)
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
 * Parses a successful SecurityHub InviteMembers \a response.
 */
void InviteMembersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(InviteMembersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SecurityHub::InviteMembersResponsePrivate
 * \brief The InviteMembersResponsePrivate class provides private implementation for InviteMembersResponse.
 * \internal
 *
 * \inmodule QtAwsSecurityHub
 */

/*!
 * Constructs a InviteMembersResponsePrivate object with public implementation \a q.
 */
InviteMembersResponsePrivate::InviteMembersResponsePrivate(
    InviteMembersResponse * const q) : SecurityHubResponsePrivate(q)
{

}

/*!
 * Parses a SecurityHub InviteMembers response element from \a xml.
 */
void InviteMembersResponsePrivate::parseInviteMembersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("InviteMembersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SecurityHub
} // namespace QtAws
