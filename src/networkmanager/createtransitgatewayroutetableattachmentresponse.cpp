// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
