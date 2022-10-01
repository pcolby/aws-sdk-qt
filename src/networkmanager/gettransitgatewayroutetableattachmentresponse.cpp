// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
