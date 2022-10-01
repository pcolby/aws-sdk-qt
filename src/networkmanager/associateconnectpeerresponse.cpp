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

#include "associateconnectpeerresponse.h"
#include "associateconnectpeerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::AssociateConnectPeerResponse
 * \brief The AssociateConnectPeerResponse class provides an interace for NetworkManager AssociateConnectPeer responses.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::associateConnectPeer
 */

/*!
 * Constructs a AssociateConnectPeerResponse object for \a reply to \a request, with parent \a parent.
 */
AssociateConnectPeerResponse::AssociateConnectPeerResponse(
        const AssociateConnectPeerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NetworkManagerResponse(new AssociateConnectPeerResponsePrivate(this), parent)
{
    setRequest(new AssociateConnectPeerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AssociateConnectPeerRequest * AssociateConnectPeerResponse::request() const
{
    Q_D(const AssociateConnectPeerResponse);
    return static_cast<const AssociateConnectPeerRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful NetworkManager AssociateConnectPeer \a response.
 */
void AssociateConnectPeerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AssociateConnectPeerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NetworkManager::AssociateConnectPeerResponsePrivate
 * \brief The AssociateConnectPeerResponsePrivate class provides private implementation for AssociateConnectPeerResponse.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a AssociateConnectPeerResponsePrivate object with public implementation \a q.
 */
AssociateConnectPeerResponsePrivate::AssociateConnectPeerResponsePrivate(
    AssociateConnectPeerResponse * const q) : NetworkManagerResponsePrivate(q)
{

}

/*!
 * Parses a NetworkManager AssociateConnectPeer response element from \a xml.
 */
void AssociateConnectPeerResponsePrivate::parseAssociateConnectPeerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssociateConnectPeerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NetworkManager
} // namespace QtAws
