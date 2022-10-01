// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
