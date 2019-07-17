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

#include "listinvitationsresponse.h"
#include "listinvitationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SecurityHub {

/*!
 * \class QtAws::SecurityHub::ListInvitationsResponse
 * \brief The ListInvitationsResponse class provides an interace for SecurityHub ListInvitations responses.
 *
 * \inmodule QtAwsSecurityHub
 *
 *  AWS Security Hub provides you with a comprehensive view of your security state within AWS and your compliance with the
 *  security industry standards and best practices. Security Hub collects security data from across AWS accounts, services,
 *  and supported third-party partners and helps you analyze your security trends and identify the highest priority security
 *  issues. For more information, see <a href="">AWS Security Hub User Guide</a>.
 *
 * \sa SecurityHubClient::listInvitations
 */

/*!
 * Constructs a ListInvitationsResponse object for \a reply to \a request, with parent \a parent.
 */
ListInvitationsResponse::ListInvitationsResponse(
        const ListInvitationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SecurityHubResponse(new ListInvitationsResponsePrivate(this), parent)
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
 * Parses a successful SecurityHub ListInvitations \a response.
 */
void ListInvitationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListInvitationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SecurityHub::ListInvitationsResponsePrivate
 * \brief The ListInvitationsResponsePrivate class provides private implementation for ListInvitationsResponse.
 * \internal
 *
 * \inmodule QtAwsSecurityHub
 */

/*!
 * Constructs a ListInvitationsResponsePrivate object with public implementation \a q.
 */
ListInvitationsResponsePrivate::ListInvitationsResponsePrivate(
    ListInvitationsResponse * const q) : SecurityHubResponsePrivate(q)
{

}

/*!
 * Parses a SecurityHub ListInvitations response element from \a xml.
 */
void ListInvitationsResponsePrivate::parseListInvitationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListInvitationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SecurityHub
} // namespace QtAws
