// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getcustomergatewayassociationsresponse.h"
#include "getcustomergatewayassociationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::GetCustomerGatewayAssociationsResponse
 * \brief The GetCustomerGatewayAssociationsResponse class provides an interace for NetworkManager GetCustomerGatewayAssociations responses.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::getCustomerGatewayAssociations
 */

/*!
 * Constructs a GetCustomerGatewayAssociationsResponse object for \a reply to \a request, with parent \a parent.
 */
GetCustomerGatewayAssociationsResponse::GetCustomerGatewayAssociationsResponse(
        const GetCustomerGatewayAssociationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NetworkManagerResponse(new GetCustomerGatewayAssociationsResponsePrivate(this), parent)
{
    setRequest(new GetCustomerGatewayAssociationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetCustomerGatewayAssociationsRequest * GetCustomerGatewayAssociationsResponse::request() const
{
    Q_D(const GetCustomerGatewayAssociationsResponse);
    return static_cast<const GetCustomerGatewayAssociationsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful NetworkManager GetCustomerGatewayAssociations \a response.
 */
void GetCustomerGatewayAssociationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetCustomerGatewayAssociationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NetworkManager::GetCustomerGatewayAssociationsResponsePrivate
 * \brief The GetCustomerGatewayAssociationsResponsePrivate class provides private implementation for GetCustomerGatewayAssociationsResponse.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a GetCustomerGatewayAssociationsResponsePrivate object with public implementation \a q.
 */
GetCustomerGatewayAssociationsResponsePrivate::GetCustomerGatewayAssociationsResponsePrivate(
    GetCustomerGatewayAssociationsResponse * const q) : NetworkManagerResponsePrivate(q)
{

}

/*!
 * Parses a NetworkManager GetCustomerGatewayAssociations response element from \a xml.
 */
void GetCustomerGatewayAssociationsResponsePrivate::parseGetCustomerGatewayAssociationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetCustomerGatewayAssociationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NetworkManager
} // namespace QtAws
