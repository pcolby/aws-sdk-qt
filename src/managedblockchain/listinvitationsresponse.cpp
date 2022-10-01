// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listinvitationsresponse.h"
#include "listinvitationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ManagedBlockchain {

/*!
 * \class QtAws::ManagedBlockchain::ListInvitationsResponse
 * \brief The ListInvitationsResponse class provides an interace for ManagedBlockchain ListInvitations responses.
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
 * \sa ManagedBlockchainClient::listInvitations
 */

/*!
 * Constructs a ListInvitationsResponse object for \a reply to \a request, with parent \a parent.
 */
ListInvitationsResponse::ListInvitationsResponse(
        const ListInvitationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ManagedBlockchainResponse(new ListInvitationsResponsePrivate(this), parent)
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
 * Parses a successful ManagedBlockchain ListInvitations \a response.
 */
void ListInvitationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListInvitationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ManagedBlockchain::ListInvitationsResponsePrivate
 * \brief The ListInvitationsResponsePrivate class provides private implementation for ListInvitationsResponse.
 * \internal
 *
 * \inmodule QtAwsManagedBlockchain
 */

/*!
 * Constructs a ListInvitationsResponsePrivate object with public implementation \a q.
 */
ListInvitationsResponsePrivate::ListInvitationsResponsePrivate(
    ListInvitationsResponse * const q) : ManagedBlockchainResponsePrivate(q)
{

}

/*!
 * Parses a ManagedBlockchain ListInvitations response element from \a xml.
 */
void ListInvitationsResponsePrivate::parseListInvitationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListInvitationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ManagedBlockchain
} // namespace QtAws
