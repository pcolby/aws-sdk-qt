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
 *  <p/>
 * 
 *  Amazon Managed Blockchain is a fully managed service for creating and managing blockchain networks using open source
 *  frameworks. Blockchain allows you to build applications where multiple parties can securely and transparently run
 *  transactions and share data without the need for a trusted, central authority. Currently, Managed Blockchain supports
 *  the Hyperledger Fabric open source framework.
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
