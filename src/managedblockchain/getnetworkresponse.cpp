// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getnetworkresponse.h"
#include "getnetworkresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ManagedBlockchain {

/*!
 * \class QtAws::ManagedBlockchain::GetNetworkResponse
 * \brief The GetNetworkResponse class provides an interace for ManagedBlockchain GetNetwork responses.
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
 * \sa ManagedBlockchainClient::getNetwork
 */

/*!
 * Constructs a GetNetworkResponse object for \a reply to \a request, with parent \a parent.
 */
GetNetworkResponse::GetNetworkResponse(
        const GetNetworkRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ManagedBlockchainResponse(new GetNetworkResponsePrivate(this), parent)
{
    setRequest(new GetNetworkRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetNetworkRequest * GetNetworkResponse::request() const
{
    Q_D(const GetNetworkResponse);
    return static_cast<const GetNetworkRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ManagedBlockchain GetNetwork \a response.
 */
void GetNetworkResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetNetworkResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ManagedBlockchain::GetNetworkResponsePrivate
 * \brief The GetNetworkResponsePrivate class provides private implementation for GetNetworkResponse.
 * \internal
 *
 * \inmodule QtAwsManagedBlockchain
 */

/*!
 * Constructs a GetNetworkResponsePrivate object with public implementation \a q.
 */
GetNetworkResponsePrivate::GetNetworkResponsePrivate(
    GetNetworkResponse * const q) : ManagedBlockchainResponsePrivate(q)
{

}

/*!
 * Parses a ManagedBlockchain GetNetwork response element from \a xml.
 */
void GetNetworkResponsePrivate::parseGetNetworkResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetNetworkResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ManagedBlockchain
} // namespace QtAws
