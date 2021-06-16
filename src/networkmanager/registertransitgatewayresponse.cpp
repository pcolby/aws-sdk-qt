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

#include "registertransitgatewayresponse.h"
#include "registertransitgatewayresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::RegisterTransitGatewayResponse
 * \brief The RegisterTransitGatewayResponse class provides an interace for NetworkManager RegisterTransitGateway responses.
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
 * \sa NetworkManagerClient::registerTransitGateway
 */

/*!
 * Constructs a RegisterTransitGatewayResponse object for \a reply to \a request, with parent \a parent.
 */
RegisterTransitGatewayResponse::RegisterTransitGatewayResponse(
        const RegisterTransitGatewayRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NetworkManagerResponse(new RegisterTransitGatewayResponsePrivate(this), parent)
{
    setRequest(new RegisterTransitGatewayRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RegisterTransitGatewayRequest * RegisterTransitGatewayResponse::request() const
{
    Q_D(const RegisterTransitGatewayResponse);
    return static_cast<const RegisterTransitGatewayRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful NetworkManager RegisterTransitGateway \a response.
 */
void RegisterTransitGatewayResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RegisterTransitGatewayResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NetworkManager::RegisterTransitGatewayResponsePrivate
 * \brief The RegisterTransitGatewayResponsePrivate class provides private implementation for RegisterTransitGatewayResponse.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a RegisterTransitGatewayResponsePrivate object with public implementation \a q.
 */
RegisterTransitGatewayResponsePrivate::RegisterTransitGatewayResponsePrivate(
    RegisterTransitGatewayResponse * const q) : NetworkManagerResponsePrivate(q)
{

}

/*!
 * Parses a NetworkManager RegisterTransitGateway response element from \a xml.
 */
void RegisterTransitGatewayResponsePrivate::parseRegisterTransitGatewayResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RegisterTransitGatewayResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NetworkManager
} // namespace QtAws
