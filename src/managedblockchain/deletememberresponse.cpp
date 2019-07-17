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

#include "deletememberresponse.h"
#include "deletememberresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ManagedBlockchain {

/*!
 * \class QtAws::ManagedBlockchain::DeleteMemberResponse
 * \brief The DeleteMemberResponse class provides an interace for ManagedBlockchain DeleteMember responses.
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
 * \sa ManagedBlockchainClient::deleteMember
 */

/*!
 * Constructs a DeleteMemberResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteMemberResponse::DeleteMemberResponse(
        const DeleteMemberRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ManagedBlockchainResponse(new DeleteMemberResponsePrivate(this), parent)
{
    setRequest(new DeleteMemberRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteMemberRequest * DeleteMemberResponse::request() const
{
    Q_D(const DeleteMemberResponse);
    return static_cast<const DeleteMemberRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ManagedBlockchain DeleteMember \a response.
 */
void DeleteMemberResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteMemberResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ManagedBlockchain::DeleteMemberResponsePrivate
 * \brief The DeleteMemberResponsePrivate class provides private implementation for DeleteMemberResponse.
 * \internal
 *
 * \inmodule QtAwsManagedBlockchain
 */

/*!
 * Constructs a DeleteMemberResponsePrivate object with public implementation \a q.
 */
DeleteMemberResponsePrivate::DeleteMemberResponsePrivate(
    DeleteMemberResponse * const q) : ManagedBlockchainResponsePrivate(q)
{

}

/*!
 * Parses a ManagedBlockchain DeleteMember response element from \a xml.
 */
void DeleteMemberResponsePrivate::parseDeleteMemberResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteMemberResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ManagedBlockchain
} // namespace QtAws
