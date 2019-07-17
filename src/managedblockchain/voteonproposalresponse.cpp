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

#include "voteonproposalresponse.h"
#include "voteonproposalresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ManagedBlockchain {

/*!
 * \class QtAws::ManagedBlockchain::VoteOnProposalResponse
 * \brief The VoteOnProposalResponse class provides an interace for ManagedBlockchain VoteOnProposal responses.
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
 * \sa ManagedBlockchainClient::voteOnProposal
 */

/*!
 * Constructs a VoteOnProposalResponse object for \a reply to \a request, with parent \a parent.
 */
VoteOnProposalResponse::VoteOnProposalResponse(
        const VoteOnProposalRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ManagedBlockchainResponse(new VoteOnProposalResponsePrivate(this), parent)
{
    setRequest(new VoteOnProposalRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const VoteOnProposalRequest * VoteOnProposalResponse::request() const
{
    Q_D(const VoteOnProposalResponse);
    return static_cast<const VoteOnProposalRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ManagedBlockchain VoteOnProposal \a response.
 */
void VoteOnProposalResponse::parseSuccess(QIODevice &response)
{
    //Q_D(VoteOnProposalResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ManagedBlockchain::VoteOnProposalResponsePrivate
 * \brief The VoteOnProposalResponsePrivate class provides private implementation for VoteOnProposalResponse.
 * \internal
 *
 * \inmodule QtAwsManagedBlockchain
 */

/*!
 * Constructs a VoteOnProposalResponsePrivate object with public implementation \a q.
 */
VoteOnProposalResponsePrivate::VoteOnProposalResponsePrivate(
    VoteOnProposalResponse * const q) : ManagedBlockchainResponsePrivate(q)
{

}

/*!
 * Parses a ManagedBlockchain VoteOnProposal response element from \a xml.
 */
void VoteOnProposalResponsePrivate::parseVoteOnProposalResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("VoteOnProposalResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ManagedBlockchain
} // namespace QtAws
