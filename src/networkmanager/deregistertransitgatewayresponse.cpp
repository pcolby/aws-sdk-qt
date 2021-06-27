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
 *  Transit Gateway Network Manager (Network Manager) enables you to create a global network, in which you can monitor your
 *  AWS and on-premises networks that are built around transit
 * 
 *  gateways>
 * 
 *  The Network Manager APIs are supported in the US West (Oregon) Region only. You must specify the <code>us-west-2</code>
 *  Region in all requests made to Network
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
    return static_cast<const DeregisterTransitGatewayRequest *>(NetworkManagerResponse::request());
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
