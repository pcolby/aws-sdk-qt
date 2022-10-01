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

#include "disassociatecustomergatewayresponse.h"
#include "disassociatecustomergatewayresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::DisassociateCustomerGatewayResponse
 * \brief The DisassociateCustomerGatewayResponse class provides an interace for NetworkManager DisassociateCustomerGateway responses.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::disassociateCustomerGateway
 */

/*!
 * Constructs a DisassociateCustomerGatewayResponse object for \a reply to \a request, with parent \a parent.
 */
DisassociateCustomerGatewayResponse::DisassociateCustomerGatewayResponse(
        const DisassociateCustomerGatewayRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NetworkManagerResponse(new DisassociateCustomerGatewayResponsePrivate(this), parent)
{
    setRequest(new DisassociateCustomerGatewayRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DisassociateCustomerGatewayRequest * DisassociateCustomerGatewayResponse::request() const
{
    Q_D(const DisassociateCustomerGatewayResponse);
    return static_cast<const DisassociateCustomerGatewayRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful NetworkManager DisassociateCustomerGateway \a response.
 */
void DisassociateCustomerGatewayResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DisassociateCustomerGatewayResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NetworkManager::DisassociateCustomerGatewayResponsePrivate
 * \brief The DisassociateCustomerGatewayResponsePrivate class provides private implementation for DisassociateCustomerGatewayResponse.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a DisassociateCustomerGatewayResponsePrivate object with public implementation \a q.
 */
DisassociateCustomerGatewayResponsePrivate::DisassociateCustomerGatewayResponsePrivate(
    DisassociateCustomerGatewayResponse * const q) : NetworkManagerResponsePrivate(q)
{

}

/*!
 * Parses a NetworkManager DisassociateCustomerGateway response element from \a xml.
 */
void DisassociateCustomerGatewayResponsePrivate::parseDisassociateCustomerGatewayResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisassociateCustomerGatewayResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NetworkManager
} // namespace QtAws
