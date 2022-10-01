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

#include "disassociatetransitgatewayconnectpeerresponse.h"
#include "disassociatetransitgatewayconnectpeerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::DisassociateTransitGatewayConnectPeerResponse
 * \brief The DisassociateTransitGatewayConnectPeerResponse class provides an interace for NetworkManager DisassociateTransitGatewayConnectPeer responses.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::disassociateTransitGatewayConnectPeer
 */

/*!
 * Constructs a DisassociateTransitGatewayConnectPeerResponse object for \a reply to \a request, with parent \a parent.
 */
DisassociateTransitGatewayConnectPeerResponse::DisassociateTransitGatewayConnectPeerResponse(
        const DisassociateTransitGatewayConnectPeerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NetworkManagerResponse(new DisassociateTransitGatewayConnectPeerResponsePrivate(this), parent)
{
    setRequest(new DisassociateTransitGatewayConnectPeerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DisassociateTransitGatewayConnectPeerRequest * DisassociateTransitGatewayConnectPeerResponse::request() const
{
    Q_D(const DisassociateTransitGatewayConnectPeerResponse);
    return static_cast<const DisassociateTransitGatewayConnectPeerRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful NetworkManager DisassociateTransitGatewayConnectPeer \a response.
 */
void DisassociateTransitGatewayConnectPeerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DisassociateTransitGatewayConnectPeerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NetworkManager::DisassociateTransitGatewayConnectPeerResponsePrivate
 * \brief The DisassociateTransitGatewayConnectPeerResponsePrivate class provides private implementation for DisassociateTransitGatewayConnectPeerResponse.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a DisassociateTransitGatewayConnectPeerResponsePrivate object with public implementation \a q.
 */
DisassociateTransitGatewayConnectPeerResponsePrivate::DisassociateTransitGatewayConnectPeerResponsePrivate(
    DisassociateTransitGatewayConnectPeerResponse * const q) : NetworkManagerResponsePrivate(q)
{

}

/*!
 * Parses a NetworkManager DisassociateTransitGatewayConnectPeer response element from \a xml.
 */
void DisassociateTransitGatewayConnectPeerResponsePrivate::parseDisassociateTransitGatewayConnectPeerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisassociateTransitGatewayConnectPeerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NetworkManager
} // namespace QtAws
