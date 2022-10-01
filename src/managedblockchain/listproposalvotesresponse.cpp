// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listproposalvotesresponse.h"
#include "listproposalvotesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ManagedBlockchain {

/*!
 * \class QtAws::ManagedBlockchain::ListProposalVotesResponse
 * \brief The ListProposalVotesResponse class provides an interace for ManagedBlockchain ListProposalVotes responses.
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
 * \sa ManagedBlockchainClient::listProposalVotes
 */

/*!
 * Constructs a ListProposalVotesResponse object for \a reply to \a request, with parent \a parent.
 */
ListProposalVotesResponse::ListProposalVotesResponse(
        const ListProposalVotesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ManagedBlockchainResponse(new ListProposalVotesResponsePrivate(this), parent)
{
    setRequest(new ListProposalVotesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListProposalVotesRequest * ListProposalVotesResponse::request() const
{
    Q_D(const ListProposalVotesResponse);
    return static_cast<const ListProposalVotesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ManagedBlockchain ListProposalVotes \a response.
 */
void ListProposalVotesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListProposalVotesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ManagedBlockchain::ListProposalVotesResponsePrivate
 * \brief The ListProposalVotesResponsePrivate class provides private implementation for ListProposalVotesResponse.
 * \internal
 *
 * \inmodule QtAwsManagedBlockchain
 */

/*!
 * Constructs a ListProposalVotesResponsePrivate object with public implementation \a q.
 */
ListProposalVotesResponsePrivate::ListProposalVotesResponsePrivate(
    ListProposalVotesResponse * const q) : ManagedBlockchainResponsePrivate(q)
{

}

/*!
 * Parses a ManagedBlockchain ListProposalVotes response element from \a xml.
 */
void ListProposalVotesResponsePrivate::parseListProposalVotesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListProposalVotesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ManagedBlockchain
} // namespace QtAws
