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

#include "createtransitgatewayroutetableattachmentresponse.h"
#include "createtransitgatewayroutetableattachmentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::CreateTransitGatewayRouteTableAttachmentResponse
 * \brief The CreateTransitGatewayRouteTableAttachmentResponse class provides an interace for NetworkManager CreateTransitGatewayRouteTableAttachment responses.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::createTransitGatewayRouteTableAttachment
 */

/*!
 * Constructs a CreateTransitGatewayRouteTableAttachmentResponse object for \a reply to \a request, with parent \a parent.
 */
CreateTransitGatewayRouteTableAttachmentResponse::CreateTransitGatewayRouteTableAttachmentResponse(
        const CreateTransitGatewayRouteTableAttachmentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NetworkManagerResponse(new CreateTransitGatewayRouteTableAttachmentResponsePrivate(this), parent)
{
    setRequest(new CreateTransitGatewayRouteTableAttachmentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateTransitGatewayRouteTableAttachmentRequest * CreateTransitGatewayRouteTableAttachmentResponse::request() const
{
    Q_D(const CreateTransitGatewayRouteTableAttachmentResponse);
    return static_cast<const CreateTransitGatewayRouteTableAttachmentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful NetworkManager CreateTransitGatewayRouteTableAttachment \a response.
 */
void CreateTransitGatewayRouteTableAttachmentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateTransitGatewayRouteTableAttachmentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NetworkManager::CreateTransitGatewayRouteTableAttachmentResponsePrivate
 * \brief The CreateTransitGatewayRouteTableAttachmentResponsePrivate class provides private implementation for CreateTransitGatewayRouteTableAttachmentResponse.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a CreateTransitGatewayRouteTableAttachmentResponsePrivate object with public implementation \a q.
 */
CreateTransitGatewayRouteTableAttachmentResponsePrivate::CreateTransitGatewayRouteTableAttachmentResponsePrivate(
    CreateTransitGatewayRouteTableAttachmentResponse * const q) : NetworkManagerResponsePrivate(q)
{

}

/*!
 * Parses a NetworkManager CreateTransitGatewayRouteTableAttachment response element from \a xml.
 */
void CreateTransitGatewayRouteTableAttachmentResponsePrivate::parseCreateTransitGatewayRouteTableAttachmentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateTransitGatewayRouteTableAttachmentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NetworkManager
} // namespace QtAws
