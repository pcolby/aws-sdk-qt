// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
