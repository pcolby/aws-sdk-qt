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

#include "marketplaceentitlementserviceclientresponse.h"
#include "marketplaceentitlementserviceclientresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace MarketplaceEntitlementService {

/**
 * @class  MarketplaceEntitlementServiceClientResponse
 *
 * @brief  Handles MarketplaceEntitlementService MarketplaceEntitlementServiceClient responses.
 *
 * @see    MarketplaceEntitlementServiceClient::marketplaceEntitlementServiceClient
 */

/**
 * @brief  Constructs a new MarketplaceEntitlementServiceClientResponse object.
 *
 * @param  parent   This object's parent.
 */
MarketplaceEntitlementServiceClientResponse::MarketplaceEntitlementServiceClientResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new MarketplaceEntitlementServiceClientResponsePrivate(this), parent)
{

}

/**
 * @internal
 *
 * @class  MarketplaceEntitlementServiceClientResponsePrivate
 *
 * @brief  Private implementation for MarketplaceEntitlementServiceClientResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new MarketplaceEntitlementServiceClientResponsePrivate object.
 *
 * @param  q  Pointer to this object's public MarketplaceEntitlementServiceClientResponse instance.
 */
MarketplaceEntitlementServiceClientResponsePrivate::MarketplaceEntitlementServiceClientResponsePrivate(
    MarketplaceEntitlementServiceClientQueueResponse * const q) : MarketplaceEntitlementServiceClientPrivate(q)
{

}

} // namespace MarketplaceEntitlementService
} // namespace QtAws
