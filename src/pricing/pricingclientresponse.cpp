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

#include "pricingclientresponse.h"
#include "pricingclientresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pricing {

/**
 * @class  PricingClientResponse
 *
 * @brief  Handles Pricing PricingClient responses.
 *
 * @see    PricingClient::pricingClient
 */

/**
 * @brief  Constructs a new PricingClientResponse object.
 *
 * @param  parent   This object's parent.
 */
PricingClientResponse::PricingClientResponse(QObject * const parent)
    : AwsAbstractResponse(new PricingClientResponsePrivate(this), parent)
{

}

/**
 * @internal
 *
 * @class  PricingClientResponsePrivate
 *
 * @brief  Private implementation for PricingClientResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PricingClientResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PricingClientResponse instance.
 */
PricingClientResponsePrivate::PricingClientResponsePrivate(
    PricingClientQueueResponse * const q) : PricingClientPrivate(q)
{

}

} // namespace Pricing
} // namespace QtAws
