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

#include "getnoderesponse.h"
#include "getnoderesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ManagedBlockchain {

/*!
 * \class QtAws::ManagedBlockchain::GetNodeResponse
 * \brief The GetNodeResponse class provides an interace for ManagedBlockchain GetNode responses.
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
 * \sa ManagedBlockchainClient::getNode
 */

/*!
 * Constructs a GetNodeResponse object for \a reply to \a request, with parent \a parent.
 */
GetNodeResponse::GetNodeResponse(
        const GetNodeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ManagedBlockchainResponse(new GetNodeResponsePrivate(this), parent)
{
    setRequest(new GetNodeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetNodeRequest * GetNodeResponse::request() const
{
    Q_D(const GetNodeResponse);
    return static_cast<const GetNodeRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ManagedBlockchain GetNode \a response.
 */
void GetNodeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetNodeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ManagedBlockchain::GetNodeResponsePrivate
 * \brief The GetNodeResponsePrivate class provides private implementation for GetNodeResponse.
 * \internal
 *
 * \inmodule QtAwsManagedBlockchain
 */

/*!
 * Constructs a GetNodeResponsePrivate object with public implementation \a q.
 */
GetNodeResponsePrivate::GetNodeResponsePrivate(
    GetNodeResponse * const q) : ManagedBlockchainResponsePrivate(q)
{

}

/*!
 * Parses a ManagedBlockchain GetNode response element from \a xml.
 */
void GetNodeResponsePrivate::parseGetNodeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetNodeResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ManagedBlockchain
} // namespace QtAws
