// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listproposalsresponse.h"
#include "listproposalsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ManagedBlockchain {

/*!
 * \class QtAws::ManagedBlockchain::ListProposalsResponse
 * \brief The ListProposalsResponse class provides an interace for ManagedBlockchain ListProposals responses.
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
 * \sa ManagedBlockchainClient::listProposals
 */

/*!
 * Constructs a ListProposalsResponse object for \a reply to \a request, with parent \a parent.
 */
ListProposalsResponse::ListProposalsResponse(
        const ListProposalsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ManagedBlockchainResponse(new ListProposalsResponsePrivate(this), parent)
{
    setRequest(new ListProposalsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListProposalsRequest * ListProposalsResponse::request() const
{
    Q_D(const ListProposalsResponse);
    return static_cast<const ListProposalsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ManagedBlockchain ListProposals \a response.
 */
void ListProposalsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListProposalsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ManagedBlockchain::ListProposalsResponsePrivate
 * \brief The ListProposalsResponsePrivate class provides private implementation for ListProposalsResponse.
 * \internal
 *
 * \inmodule QtAwsManagedBlockchain
 */

/*!
 * Constructs a ListProposalsResponsePrivate object with public implementation \a q.
 */
ListProposalsResponsePrivate::ListProposalsResponsePrivate(
    ListProposalsResponse * const q) : ManagedBlockchainResponsePrivate(q)
{

}

/*!
 * Parses a ManagedBlockchain ListProposals response element from \a xml.
 */
void ListProposalsResponsePrivate::parseListProposalsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListProposalsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ManagedBlockchain
} // namespace QtAws
