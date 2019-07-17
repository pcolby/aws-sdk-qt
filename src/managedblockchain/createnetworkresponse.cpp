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

#include "createnetworkresponse.h"
#include "createnetworkresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ManagedBlockchain {

/*!
 * \class QtAws::ManagedBlockchain::CreateNetworkResponse
 * \brief The CreateNetworkResponse class provides an interace for ManagedBlockchain CreateNetwork responses.
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
 * \sa ManagedBlockchainClient::createNetwork
 */

/*!
 * Constructs a CreateNetworkResponse object for \a reply to \a request, with parent \a parent.
 */
CreateNetworkResponse::CreateNetworkResponse(
        const CreateNetworkRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ManagedBlockchainResponse(new CreateNetworkResponsePrivate(this), parent)
{
    setRequest(new CreateNetworkRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateNetworkRequest * CreateNetworkResponse::request() const
{
    Q_D(const CreateNetworkResponse);
    return static_cast<const CreateNetworkRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ManagedBlockchain CreateNetwork \a response.
 */
void CreateNetworkResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateNetworkResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ManagedBlockchain::CreateNetworkResponsePrivate
 * \brief The CreateNetworkResponsePrivate class provides private implementation for CreateNetworkResponse.
 * \internal
 *
 * \inmodule QtAwsManagedBlockchain
 */

/*!
 * Constructs a CreateNetworkResponsePrivate object with public implementation \a q.
 */
CreateNetworkResponsePrivate::CreateNetworkResponsePrivate(
    CreateNetworkResponse * const q) : ManagedBlockchainResponsePrivate(q)
{

}

/*!
 * Parses a ManagedBlockchain CreateNetwork response element from \a xml.
 */
void CreateNetworkResponsePrivate::parseCreateNetworkResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateNetworkResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ManagedBlockchain
} // namespace QtAws
