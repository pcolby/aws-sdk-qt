// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "gettransitgatewaypeeringresponse.h"
#include "gettransitgatewaypeeringresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::GetTransitGatewayPeeringResponse
 * \brief The GetTransitGatewayPeeringResponse class provides an interace for NetworkManager GetTransitGatewayPeering responses.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::getTransitGatewayPeering
 */

/*!
 * Constructs a GetTransitGatewayPeeringResponse object for \a reply to \a request, with parent \a parent.
 */
GetTransitGatewayPeeringResponse::GetTransitGatewayPeeringResponse(
        const GetTransitGatewayPeeringRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NetworkManagerResponse(new GetTransitGatewayPeeringResponsePrivate(this), parent)
{
    setRequest(new GetTransitGatewayPeeringRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetTransitGatewayPeeringRequest * GetTransitGatewayPeeringResponse::request() const
{
    Q_D(const GetTransitGatewayPeeringResponse);
    return static_cast<const GetTransitGatewayPeeringRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful NetworkManager GetTransitGatewayPeering \a response.
 */
void GetTransitGatewayPeeringResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetTransitGatewayPeeringResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NetworkManager::GetTransitGatewayPeeringResponsePrivate
 * \brief The GetTransitGatewayPeeringResponsePrivate class provides private implementation for GetTransitGatewayPeeringResponse.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a GetTransitGatewayPeeringResponsePrivate object with public implementation \a q.
 */
GetTransitGatewayPeeringResponsePrivate::GetTransitGatewayPeeringResponsePrivate(
    GetTransitGatewayPeeringResponse * const q) : NetworkManagerResponsePrivate(q)
{

}

/*!
 * Parses a NetworkManager GetTransitGatewayPeering response element from \a xml.
 */
void GetTransitGatewayPeeringResponsePrivate::parseGetTransitGatewayPeeringResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetTransitGatewayPeeringResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NetworkManager
} // namespace QtAws
