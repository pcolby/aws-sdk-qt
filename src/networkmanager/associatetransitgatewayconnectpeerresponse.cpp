// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
