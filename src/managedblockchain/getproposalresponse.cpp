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
 *  <p/>
 * 
 *  Amazon Managed Blockchain is a fully managed service for creating and managing blockchain networks using open source
 *  frameworks. Blockchain allows you to build applications where multiple parties can securely and transparently run
 *  transactions and share data without the need for a trusted, central authority. Currently, Managed Blockchain supports
 *  the Hyperledger Fabric open source framework.
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
