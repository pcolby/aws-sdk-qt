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

#include "gettransitgatewayroutetableattachmentresponse.h"
#include "gettransitgatewayroutetableattachmentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::GetTransitGatewayRouteTableAttachmentResponse
 * \brief The GetTransitGatewayRouteTableAttachmentResponse class provides an interace for NetworkManager GetTransitGatewayRouteTableAttachment responses.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::getTransitGatewayRouteTableAttachment
 */

/*!
 * Constructs a GetTransitGatewayRouteTableAttachmentResponse object for \a reply to \a request, with parent \a parent.
 */
GetTransitGatewayRouteTableAttachmentResponse::GetTransitGatewayRouteTableAttachmentResponse(
        const GetTransitGatewayRouteTableAttachmentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NetworkManagerResponse(new GetTransitGatewayRouteTableAttachmentResponsePrivate(this), parent)
{
    setRequest(new GetTransitGatewayRouteTableAttachmentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetTransitGatewayRouteTableAttachmentRequest * GetTransitGatewayRouteTableAttachmentResponse::request() const
{
    Q_D(const GetTransitGatewayRouteTableAttachmentResponse);
    return static_cast<const GetTransitGatewayRouteTableAttachmentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful NetworkManager GetTransitGatewayRouteTableAttachment \a response.
 */
void GetTransitGatewayRouteTableAttachmentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetTransitGatewayRouteTableAttachmentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NetworkManager::GetTransitGatewayRouteTableAttachmentResponsePrivate
 * \brief The GetTransitGatewayRouteTableAttachmentResponsePrivate class provides private implementation for GetTransitGatewayRouteTableAttachmentResponse.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a GetTransitGatewayRouteTableAttachmentResponsePrivate object with public implementation \a q.
 */
GetTransitGatewayRouteTableAttachmentResponsePrivate::GetTransitGatewayRouteTableAttachmentResponsePrivate(
    GetTransitGatewayRouteTableAttachmentResponse * const q) : NetworkManagerResponsePrivate(q)
{

}

/*!
 * Parses a NetworkManager GetTransitGatewayRouteTableAttachment response element from \a xml.
 */
void GetTransitGatewayRouteTableAttachmentResponsePrivate::parseGetTransitGatewayRouteTableAttachmentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetTransitGatewayRouteTableAttachmentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NetworkManager
} // namespace QtAws
