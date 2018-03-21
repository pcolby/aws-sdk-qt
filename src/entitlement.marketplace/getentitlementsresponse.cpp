/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "getentitlementsresponse.h"
#include "getentitlementsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace MarketplaceEntitlementService {

/**
 * @class  GetEntitlementsResponse
 *
 * @brief  Handles MarketplaceEntitlementService GetEntitlements responses.
 *
 * @see    MarketplaceEntitlementServiceClient::getEntitlements
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetEntitlementsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
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

/**
 * @brief  Parse a MarketplaceEntitlementService GetEntitlements response.
 *
 * @param  response  Response to parse.
 */
void GetEntitlementsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetEntitlementsResponsePrivate
 *
 * @brief  Private implementation for GetEntitlementsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetEntitlementsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetEntitlementsResponse instance.
 */
GetEntitlementsResponsePrivate::GetEntitlementsResponsePrivate(
    GetEntitlementsQueueResponse * const q) : GetEntitlementsPrivate(q)
{

}

/**
 * @brief  Parse an MarketplaceEntitlementService GetEntitlementsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetEntitlementsResponsePrivate::GetEntitlementsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetEntitlementsResponse"));
    /// @todo
}
