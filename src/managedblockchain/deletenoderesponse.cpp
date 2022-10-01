// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
