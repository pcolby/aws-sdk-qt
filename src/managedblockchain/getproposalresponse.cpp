// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getproposalresponse.h"
#include "getproposalresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ManagedBlockchain {

/*!
 * \class QtAws::ManagedBlockchain::GetProposalResponse
 * \brief The GetProposalResponse class provides an interace for ManagedBlockchain GetProposal responses.
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
 * \sa ManagedBlockchainClient::getProposal
 */

/*!
 * Constructs a GetProposalResponse object for \a reply to \a request, with parent \a parent.
 */
GetProposalResponse::GetProposalResponse(
        const GetProposalRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ManagedBlockchainResponse(new GetProposalResponsePrivate(this), parent)
{
    setRequest(new GetProposalRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetProposalRequest * GetProposalResponse::request() const
{
    Q_D(const GetProposalResponse);
    return static_cast<const GetProposalRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ManagedBlockchain GetProposal \a response.
 */
void GetProposalResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetProposalResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ManagedBlockchain::GetProposalResponsePrivate
 * \brief The GetProposalResponsePrivate class provides private implementation for GetProposalResponse.
 * \internal
 *
 * \inmodule QtAwsManagedBlockchain
 */

/*!
 * Constructs a GetProposalResponsePrivate object with public implementation \a q.
 */
GetProposalResponsePrivate::GetProposalResponsePrivate(
    GetProposalResponse * const q) : ManagedBlockchainResponsePrivate(q)
{

}

/*!
 * Parses a ManagedBlockchain GetProposal response element from \a xml.
 */
void GetProposalResponsePrivate::parseGetProposalResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetProposalResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ManagedBlockchain
} // namespace QtAws
