/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "getentitlementsresponse.h"
#include "getentitlementsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MarketplaceEntitlementService {

/*!
 * \class QtAws::MarketplaceEntitlementService::GetEntitlementsResponse
 *
 * \brief The GetEntitlementsResponse class encapsulates MarketplaceEntitlementService GetEntitlements responses.
 *
 * \ingroup MarketplaceEntitlementService
 *
 *  <fullname>AWS Marketplace Entitlement Service</fullname>
 * 
 *  This reference provides descriptions of the AWS Marketplace Entitlement Service
 * 
 *  API>
 * 
 *  AWS Marketplace Entitlement Service is used to determine the entitlement of a customer to a given product. An
 *  entitlement represents capacity in a product owned by the customer. For example, a customer might own some number of
 *  users or seats in an SaaS application or some amount of data capacity in a multi-tenant
 * 
 *  database>
 * 
 *  <b>Getting Entitlement Records</b>
 * 
 *  </p <ul> <li>
 * 
 *  <i>GetEntitlements</i>- Gets the entitlements for a Marketplace
 *
 * \sa MarketplaceEntitlementServiceClient::getEntitlements
 */

/*!
 * @brief  Constructs a new GetEntitlementsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetEntitlementsResponse::GetEntitlementsResponse(
        const GetEntitlementsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MarketplaceEntitlementServiceResponse(new GetEntitlementsResponsePrivate(this), parent)
{
    setRequest(new GetEntitlementsRequest(request));
    setReply(reply);
}

const GetEntitlementsRequest * GetEntitlementsResponse::request() const
{
    Q_D(const GetEntitlementsResponse);
    return static_cast<const GetEntitlementsRequest *>(d->request);
}

/*!
 * @brief  Parse a MarketplaceEntitlementService GetEntitlements response.
 *
 * @param  response  Response to parse.
 */
void GetEntitlementsResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetEntitlementsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class GetEntitlementsResponsePrivate
 *
 * \brief Private implementation for GetEntitlementsResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetEntitlementsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetEntitlementsResponse instance.
 */
GetEntitlementsResponsePrivate::GetEntitlementsResponsePrivate(
    GetEntitlementsResponse * const q) : MarketplaceEntitlementServiceResponsePrivate(q)
{

}

/*!
 * @brief  Parse an MarketplaceEntitlementService GetEntitlementsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetEntitlementsResponsePrivate::parseGetEntitlementsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetEntitlementsResponse"));
    /// @todo
}

} // namespace MarketplaceEntitlementService
} // namespace QtAws
