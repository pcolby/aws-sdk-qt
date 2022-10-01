// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  </p
 * 
 *  Amazon Managed Blockchain is a fully managed service for creating and managing blockchain networks using open-source
 *  frameworks. Blockchain allows you to build applications where multiple parties can securely and transparently run
 *  transactions and share data without the need for a trusted, central
 * 
 *  authority>
 * 
 *  Managed Blockchain supports the Hyperledger Fabric and Ethereum open-source frameworks. Because of fundamental
 *  differences between the frameworks, some API actions or data types may only apply in the context of one framework and
 *  not the other. For example, actions related to Hyperledger Fabric network members such as <code>CreateMember</code> and
 *  <code>DeleteMember</code> do not apply to
 * 
 *  Ethereum>
 * 
 *  The description for each action indicates the framework or frameworks to which it applies. Data types and properties
 *  that apply only in the context of a particular framework are similarly
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
