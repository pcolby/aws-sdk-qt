// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "gettransitgatewayconnectpeerassociationsresponse.h"
#include "gettransitgatewayconnectpeerassociationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::GetTransitGatewayConnectPeerAssociationsResponse
 * \brief The GetTransitGatewayConnectPeerAssociationsResponse class provides an interace for NetworkManager GetTransitGatewayConnectPeerAssociations responses.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::getTransitGatewayConnectPeerAssociations
 */

/*!
 * Constructs a GetTransitGatewayConnectPeerAssociationsResponse object for \a reply to \a request, with parent \a parent.
 */
GetTransitGatewayConnectPeerAssociationsResponse::GetTransitGatewayConnectPeerAssociationsResponse(
        const GetTransitGatewayConnectPeerAssociationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NetworkManagerResponse(new GetTransitGatewayConnectPeerAssociationsResponsePrivate(this), parent)
{
    setRequest(new GetTransitGatewayConnectPeerAssociationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetTransitGatewayConnectPeerAssociationsRequest * GetTransitGatewayConnectPeerAssociationsResponse::request() const
{
    Q_D(const GetTransitGatewayConnectPeerAssociationsResponse);
    return static_cast<const GetTransitGatewayConnectPeerAssociationsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful NetworkManager GetTransitGatewayConnectPeerAssociations \a response.
 */
void GetTransitGatewayConnectPeerAssociationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetTransitGatewayConnectPeerAssociationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NetworkManager::GetTransitGatewayConnectPeerAssociationsResponsePrivate
 * \brief The GetTransitGatewayConnectPeerAssociationsResponsePrivate class provides private implementation for GetTransitGatewayConnectPeerAssociationsResponse.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a GetTransitGatewayConnectPeerAssociationsResponsePrivate object with public implementation \a q.
 */
GetTransitGatewayConnectPeerAssociationsResponsePrivate::GetTransitGatewayConnectPeerAssociationsResponsePrivate(
    GetTransitGatewayConnectPeerAssociationsResponse * const q) : NetworkManagerResponsePrivate(q)
{

}

/*!
 * Parses a NetworkManager GetTransitGatewayConnectPeerAssociations response element from \a xml.
 */
void GetTransitGatewayConnectPeerAssociationsResponsePrivate::parseGetTransitGatewayConnectPeerAssociationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetTransitGatewayConnectPeerAssociationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NetworkManager
} // namespace QtAws
