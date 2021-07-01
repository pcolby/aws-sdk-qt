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

#include "gettransitgatewayregistrationsresponse.h"
#include "gettransitgatewayregistrationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::GetTransitGatewayRegistrationsResponse
 * \brief The GetTransitGatewayRegistrationsResponse class provides an interace for NetworkManager GetTransitGatewayRegistrations responses.
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
 * \sa NetworkManagerClient::getTransitGatewayRegistrations
 */

/*!
 * Constructs a GetTransitGatewayRegistrationsResponse object for \a reply to \a request, with parent \a parent.
 */
GetTransitGatewayRegistrationsResponse::GetTransitGatewayRegistrationsResponse(
        const GetTransitGatewayRegistrationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NetworkManagerResponse(new GetTransitGatewayRegistrationsResponsePrivate(this), parent)
{
    setRequest(new GetTransitGatewayRegistrationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetTransitGatewayRegistrationsRequest * GetTransitGatewayRegistrationsResponse::request() const
{
    Q_D(const GetTransitGatewayRegistrationsResponse);
    return static_cast<const GetTransitGatewayRegistrationsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful NetworkManager GetTransitGatewayRegistrations \a response.
 */
void GetTransitGatewayRegistrationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetTransitGatewayRegistrationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NetworkManager::GetTransitGatewayRegistrationsResponsePrivate
 * \brief The GetTransitGatewayRegistrationsResponsePrivate class provides private implementation for GetTransitGatewayRegistrationsResponse.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a GetTransitGatewayRegistrationsResponsePrivate object with public implementation \a q.
 */
GetTransitGatewayRegistrationsResponsePrivate::GetTransitGatewayRegistrationsResponsePrivate(
    GetTransitGatewayRegistrationsResponse * const q) : NetworkManagerResponsePrivate(q)
{

}

/*!
 * Parses a NetworkManager GetTransitGatewayRegistrations response element from \a xml.
 */
void GetTransitGatewayRegistrationsResponsePrivate::parseGetTransitGatewayRegistrationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetTransitGatewayRegistrationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NetworkManager
} // namespace QtAws
