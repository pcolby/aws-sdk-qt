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
