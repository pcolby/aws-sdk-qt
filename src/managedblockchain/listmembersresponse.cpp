// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listmembersresponse.h"
#include "listmembersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ManagedBlockchain {

/*!
 * \class QtAws::ManagedBlockchain::ListMembersResponse
 * \brief The ListMembersResponse class provides an interace for ManagedBlockchain ListMembers responses.
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
 * \sa ManagedBlockchainClient::listMembers
 */

/*!
 * Constructs a ListMembersResponse object for \a reply to \a request, with parent \a parent.
 */
ListMembersResponse::ListMembersResponse(
        const ListMembersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ManagedBlockchainResponse(new ListMembersResponsePrivate(this), parent)
{
    setRequest(new ListMembersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListMembersRequest * ListMembersResponse::request() const
{
    Q_D(const ListMembersResponse);
    return static_cast<const ListMembersRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ManagedBlockchain ListMembers \a response.
 */
void ListMembersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListMembersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ManagedBlockchain::ListMembersResponsePrivate
 * \brief The ListMembersResponsePrivate class provides private implementation for ListMembersResponse.
 * \internal
 *
 * \inmodule QtAwsManagedBlockchain
 */

/*!
 * Constructs a ListMembersResponsePrivate object with public implementation \a q.
 */
ListMembersResponsePrivate::ListMembersResponsePrivate(
    ListMembersResponse * const q) : ManagedBlockchainResponsePrivate(q)
{

}

/*!
 * Parses a ManagedBlockchain ListMembers response element from \a xml.
 */
void ListMembersResponsePrivate::parseListMembersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListMembersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ManagedBlockchain
} // namespace QtAws
