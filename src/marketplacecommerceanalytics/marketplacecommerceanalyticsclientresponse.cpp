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

#include "marketplacecommerceanalyticsclientresponse.h"
#include "marketplacecommerceanalyticsclientresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace AWS {
namespace MarketplaceCommerceAnalytics {

/**
 * @class  MarketplaceCommerceAnalyticsClientResponse
 *
 * @brief  Handles MarketplaceCommerceAnalytics MarketplaceCommerceAnalyticsClient responses.
 *
 * @see    MarketplaceCommerceAnalyticsClient::marketplaceCommerceAnalyticsClient
 */

/**
 * @brief  Constructs a new MarketplaceCommerceAnalyticsClientResponse object.
 *
 * @param  parent   This object's parent.
 */
MarketplaceCommerceAnalyticsClientResponse::MarketplaceCommerceAnalyticsClientResponse(QObject * const parent)
    : AwsAbstractResponse(new MarketplaceCommerceAnalyticsClientResponsePrivate(this), parent)
{

}

/**
 * @internal
 *
 * @class  MarketplaceCommerceAnalyticsClientResponsePrivate
 *
 * @brief  Private implementation for MarketplaceCommerceAnalyticsClientResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new MarketplaceCommerceAnalyticsClientResponsePrivate object.
 *
 * @param  q  Pointer to this object's public MarketplaceCommerceAnalyticsClientResponse instance.
 */
MarketplaceCommerceAnalyticsClientResponsePrivate::MarketplaceCommerceAnalyticsClientResponsePrivate(
    MarketplaceCommerceAnalyticsClientQueueResponse * const q) : MarketplaceCommerceAnalyticsClientPrivate(q)
{

}

} // namespace MarketplaceCommerceAnalytics
} // namespace AWS
