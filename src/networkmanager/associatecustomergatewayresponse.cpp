// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
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
