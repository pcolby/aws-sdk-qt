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

#include "listnodesresponse.h"
#include "listnodesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ManagedBlockchain {

/*!
 * \class QtAws::ManagedBlockchain::ListNodesResponse
 * \brief The ListNodesResponse class provides an interace for ManagedBlockchain ListNodes responses.
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
 * \sa ManagedBlockchainClient::listNodes
 */

/*!
 * Constructs a ListNodesResponse object for \a reply to \a request, with parent \a parent.
 */
ListNodesResponse::ListNodesResponse(
        const ListNodesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ManagedBlockchainResponse(new ListNodesResponsePrivate(this), parent)
{
    setRequest(new ListNodesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListNodesRequest * ListNodesResponse::request() const
{
    Q_D(const ListNodesResponse);
    return static_cast<const ListNodesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ManagedBlockchain ListNodes \a response.
 */
void ListNodesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListNodesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ManagedBlockchain::ListNodesResponsePrivate
 * \brief The ListNodesResponsePrivate class provides private implementation for ListNodesResponse.
 * \internal
 *
 * \inmodule QtAwsManagedBlockchain
 */

/*!
 * Constructs a ListNodesResponsePrivate object with public implementation \a q.
 */
ListNodesResponsePrivate::ListNodesResponsePrivate(
    ListNodesResponse * const q) : ManagedBlockchainResponsePrivate(q)
{

}

/*!
 * Parses a ManagedBlockchain ListNodes response element from \a xml.
 */
void ListNodesResponsePrivate::parseListNodesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListNodesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ManagedBlockchain
} // namespace QtAws
