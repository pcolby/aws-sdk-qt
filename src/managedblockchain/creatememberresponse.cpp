// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "creatememberresponse.h"
#include "creatememberresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ManagedBlockchain {

/*!
 * \class QtAws::ManagedBlockchain::CreateMemberResponse
 * \brief The CreateMemberResponse class provides an interace for ManagedBlockchain CreateMember responses.
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
 * \sa ManagedBlockchainClient::createMember
 */

/*!
 * Constructs a CreateMemberResponse object for \a reply to \a request, with parent \a parent.
 */
CreateMemberResponse::CreateMemberResponse(
        const CreateMemberRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ManagedBlockchainResponse(new CreateMemberResponsePrivate(this), parent)
{
    setRequest(new CreateMemberRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateMemberRequest * CreateMemberResponse::request() const
{
    Q_D(const CreateMemberResponse);
    return static_cast<const CreateMemberRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ManagedBlockchain CreateMember \a response.
 */
void CreateMemberResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateMemberResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ManagedBlockchain::CreateMemberResponsePrivate
 * \brief The CreateMemberResponsePrivate class provides private implementation for CreateMemberResponse.
 * \internal
 *
 * \inmodule QtAwsManagedBlockchain
 */

/*!
 * Constructs a CreateMemberResponsePrivate object with public implementation \a q.
 */
CreateMemberResponsePrivate::CreateMemberResponsePrivate(
    CreateMemberResponse * const q) : ManagedBlockchainResponsePrivate(q)
{

}

/*!
 * Parses a ManagedBlockchain CreateMember response element from \a xml.
 */
void CreateMemberResponsePrivate::parseCreateMemberResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateMemberResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ManagedBlockchain
} // namespace QtAws
