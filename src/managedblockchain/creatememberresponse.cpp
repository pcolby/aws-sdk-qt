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
 *  <p/>
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
