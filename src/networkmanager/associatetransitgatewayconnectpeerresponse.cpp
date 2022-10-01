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

#include "associatetransitgatewayconnectpeerresponse.h"
#include "associatetransitgatewayconnectpeerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::AssociateTransitGatewayConnectPeerResponse
 * \brief The AssociateTransitGatewayConnectPeerResponse class provides an interace for NetworkManager AssociateTransitGatewayConnectPeer responses.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::associateTransitGatewayConnectPeer
 */

/*!
 * Constructs a AssociateTransitGatewayConnectPeerResponse object for \a reply to \a request, with parent \a parent.
 */
AssociateTransitGatewayConnectPeerResponse::AssociateTransitGatewayConnectPeerResponse(
        const AssociateTransitGatewayConnectPeerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NetworkManagerResponse(new AssociateTransitGatewayConnectPeerResponsePrivate(this), parent)
{
    setRequest(new AssociateTransitGatewayConnectPeerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AssociateTransitGatewayConnectPeerRequest * AssociateTransitGatewayConnectPeerResponse::request() const
{
    Q_D(const AssociateTransitGatewayConnectPeerResponse);
    return static_cast<const AssociateTransitGatewayConnectPeerRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful NetworkManager AssociateTransitGatewayConnectPeer \a response.
 */
void AssociateTransitGatewayConnectPeerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AssociateTransitGatewayConnectPeerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NetworkManager::AssociateTransitGatewayConnectPeerResponsePrivate
 * \brief The AssociateTransitGatewayConnectPeerResponsePrivate class provides private implementation for AssociateTransitGatewayConnectPeerResponse.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a AssociateTransitGatewayConnectPeerResponsePrivate object with public implementation \a q.
 */
AssociateTransitGatewayConnectPeerResponsePrivate::AssociateTransitGatewayConnectPeerResponsePrivate(
    AssociateTransitGatewayConnectPeerResponse * const q) : NetworkManagerResponsePrivate(q)
{

}

/*!
 * Parses a NetworkManager AssociateTransitGatewayConnectPeer response element from \a xml.
 */
void AssociateTransitGatewayConnectPeerResponsePrivate::parseAssociateTransitGatewayConnectPeerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssociateTransitGatewayConnectPeerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NetworkManager
} // namespace QtAws
