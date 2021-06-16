/*
    Copyright 2013-2021 Paul Colby

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

#include "deletenoderesponse.h"
#include "deletenoderesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ManagedBlockchain {

/*!
 * \class QtAws::ManagedBlockchain::DeleteNodeResponse
 * \brief The DeleteNodeResponse class provides an interace for ManagedBlockchain DeleteNode responses.
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
 * \sa ManagedBlockchainClient::deleteNode
 */

/*!
 * Constructs a DeleteNodeResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteNodeResponse::DeleteNodeResponse(
        const DeleteNodeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ManagedBlockchainResponse(new DeleteNodeResponsePrivate(this), parent)
{
    setRequest(new DeleteNodeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteNodeRequest * DeleteNodeResponse::request() const
{
    Q_D(const DeleteNodeResponse);
    return static_cast<const DeleteNodeRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ManagedBlockchain DeleteNode \a response.
 */
void DeleteNodeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteNodeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ManagedBlockchain::DeleteNodeResponsePrivate
 * \brief The DeleteNodeResponsePrivate class provides private implementation for DeleteNodeResponse.
 * \internal
 *
 * \inmodule QtAwsManagedBlockchain
 */

/*!
 * Constructs a DeleteNodeResponsePrivate object with public implementation \a q.
 */
DeleteNodeResponsePrivate::DeleteNodeResponsePrivate(
    DeleteNodeResponse * const q) : ManagedBlockchainResponsePrivate(q)
{

}

/*!
 * Parses a ManagedBlockchain DeleteNode response element from \a xml.
 */
void DeleteNodeResponsePrivate::parseDeleteNodeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteNodeResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ManagedBlockchain
} // namespace QtAws
