/*
    Copyright 2013-2020 Paul Colby

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

#include "rejectinvitationresponse.h"
#include "rejectinvitationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ManagedBlockchain {

/*!
 * \class QtAws::ManagedBlockchain::RejectInvitationResponse
 * \brief The RejectInvitationResponse class provides an interace for ManagedBlockchain RejectInvitation responses.
 *
 * \inmodule QtAwsManagedBlockchain
 *
 *  <p/>
 * 
 *  Amazon Managed Blockchain is a fully managed service for creating and managing blockchain networks using open source
 *  frameworks. Blockchain allows you to build applications where multiple parties can securely and transparently run
 *  transactions and share data without the need for a trusted, central authority. Currently, Managed Blockchain supports
 *  the Hyperledger Fabric open source framework.
 *
 * \sa ManagedBlockchainClient::rejectInvitation
 */

/*!
 * Constructs a RejectInvitationResponse object for \a reply to \a request, with parent \a parent.
 */
RejectInvitationResponse::RejectInvitationResponse(
        const RejectInvitationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ManagedBlockchainResponse(new RejectInvitationResponsePrivate(this), parent)
{
    setRequest(new RejectInvitationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RejectInvitationRequest * RejectInvitationResponse::request() const
{
    Q_D(const RejectInvitationResponse);
    return static_cast<const RejectInvitationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ManagedBlockchain RejectInvitation \a response.
 */
void RejectInvitationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RejectInvitationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ManagedBlockchain::RejectInvitationResponsePrivate
 * \brief The RejectInvitationResponsePrivate class provides private implementation for RejectInvitationResponse.
 * \internal
 *
 * \inmodule QtAwsManagedBlockchain
 */

/*!
 * Constructs a RejectInvitationResponsePrivate object with public implementation \a q.
 */
RejectInvitationResponsePrivate::RejectInvitationResponsePrivate(
    RejectInvitationResponse * const q) : ManagedBlockchainResponsePrivate(q)
{

}

/*!
 * Parses a ManagedBlockchain RejectInvitation response element from \a xml.
 */
void RejectInvitationResponsePrivate::parseRejectInvitationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RejectInvitationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ManagedBlockchain
} // namespace QtAws
