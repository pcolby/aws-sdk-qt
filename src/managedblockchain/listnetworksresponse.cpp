// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listnetworksresponse.h"
#include "listnetworksresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ManagedBlockchain {

/*!
 * \class QtAws::ManagedBlockchain::ListNetworksResponse
 * \brief The ListNetworksResponse class provides an interace for ManagedBlockchain ListNetworks responses.
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
 * \sa ManagedBlockchainClient::listNetworks
 */

/*!
 * Constructs a ListNetworksResponse object for \a reply to \a request, with parent \a parent.
 */
ListNetworksResponse::ListNetworksResponse(
        const ListNetworksRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ManagedBlockchainResponse(new ListNetworksResponsePrivate(this), parent)
{
    setRequest(new ListNetworksRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListNetworksRequest * ListNetworksResponse::request() const
{
    Q_D(const ListNetworksResponse);
    return static_cast<const ListNetworksRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ManagedBlockchain ListNetworks \a response.
 */
void ListNetworksResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListNetworksResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ManagedBlockchain::ListNetworksResponsePrivate
 * \brief The ListNetworksResponsePrivate class provides private implementation for ListNetworksResponse.
 * \internal
 *
 * \inmodule QtAwsManagedBlockchain
 */

/*!
 * Constructs a ListNetworksResponsePrivate object with public implementation \a q.
 */
ListNetworksResponsePrivate::ListNetworksResponsePrivate(
    ListNetworksResponse * const q) : ManagedBlockchainResponsePrivate(q)
{

}

/*!
 * Parses a ManagedBlockchain ListNetworks response element from \a xml.
 */
void ListNetworksResponsePrivate::parseListNetworksResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListNetworksResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ManagedBlockchain
} // namespace QtAws
