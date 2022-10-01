// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deregistertransitgatewayresponse.h"
#include "deregistertransitgatewayresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::DeregisterTransitGatewayResponse
 * \brief The DeregisterTransitGatewayResponse class provides an interace for NetworkManager DeregisterTransitGateway responses.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::deregisterTransitGateway
 */

/*!
 * Constructs a DeregisterTransitGatewayResponse object for \a reply to \a request, with parent \a parent.
 */
DeregisterTransitGatewayResponse::DeregisterTransitGatewayResponse(
        const DeregisterTransitGatewayRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NetworkManagerResponse(new DeregisterTransitGatewayResponsePrivate(this), parent)
{
    setRequest(new DeregisterTransitGatewayRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeregisterTransitGatewayRequest * DeregisterTransitGatewayResponse::request() const
{
    Q_D(const DeregisterTransitGatewayResponse);
    return static_cast<const DeregisterTransitGatewayRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful NetworkManager DeregisterTransitGateway \a response.
 */
void DeregisterTransitGatewayResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeregisterTransitGatewayResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NetworkManager::DeregisterTransitGatewayResponsePrivate
 * \brief The DeregisterTransitGatewayResponsePrivate class provides private implementation for DeregisterTransitGatewayResponse.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a DeregisterTransitGatewayResponsePrivate object with public implementation \a q.
 */
DeregisterTransitGatewayResponsePrivate::DeregisterTransitGatewayResponsePrivate(
    DeregisterTransitGatewayResponse * const q) : NetworkManagerResponsePrivate(q)
{

}

/*!
 * Parses a NetworkManager DeregisterTransitGateway response element from \a xml.
 */
void DeregisterTransitGatewayResponsePrivate::parseDeregisterTransitGatewayResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeregisterTransitGatewayResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NetworkManager
} // namespace QtAws
