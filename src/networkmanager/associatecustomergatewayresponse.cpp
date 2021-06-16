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

#include "associatecustomergatewayresponse.h"
#include "associatecustomergatewayresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::AssociateCustomerGatewayResponse
 * \brief The AssociateCustomerGatewayResponse class provides an interace for NetworkManager AssociateCustomerGateway responses.
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
 * \sa NetworkManagerClient::associateCustomerGateway
 */

/*!
 * Constructs a AssociateCustomerGatewayResponse object for \a reply to \a request, with parent \a parent.
 */
AssociateCustomerGatewayResponse::AssociateCustomerGatewayResponse(
        const AssociateCustomerGatewayRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NetworkManagerResponse(new AssociateCustomerGatewayResponsePrivate(this), parent)
{
    setRequest(new AssociateCustomerGatewayRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AssociateCustomerGatewayRequest * AssociateCustomerGatewayResponse::request() const
{
    Q_D(const AssociateCustomerGatewayResponse);
    return static_cast<const AssociateCustomerGatewayRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful NetworkManager AssociateCustomerGateway \a response.
 */
void AssociateCustomerGatewayResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AssociateCustomerGatewayResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NetworkManager::AssociateCustomerGatewayResponsePrivate
 * \brief The AssociateCustomerGatewayResponsePrivate class provides private implementation for AssociateCustomerGatewayResponse.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a AssociateCustomerGatewayResponsePrivate object with public implementation \a q.
 */
AssociateCustomerGatewayResponsePrivate::AssociateCustomerGatewayResponsePrivate(
    AssociateCustomerGatewayResponse * const q) : NetworkManagerResponsePrivate(q)
{

}

/*!
 * Parses a NetworkManager AssociateCustomerGateway response element from \a xml.
 */
void AssociateCustomerGatewayResponsePrivate::parseAssociateCustomerGatewayResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssociateCustomerGatewayResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NetworkManager
} // namespace QtAws
