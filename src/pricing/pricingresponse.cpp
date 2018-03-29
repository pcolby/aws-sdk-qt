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

#include "pricingresponse.h"
#include "pricingresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pricing {

/**
 * @class  PricingResponse
 *
 * @brief  Handles Pricing Pricing responses.
 *
 * @see    PricingClient::pricing
 */

/**
 * @brief  Constructs a new PricingResponse object.
 *
 * @param  parent   This object's parent.
 */
PricingResponse::PricingResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new PricingResponsePrivate(this), parent)
{

}

/**
 * @internal
 *
 * @class  PricingResponsePrivate
 *
 * @brief  Private implementation for PricingResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PricingResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PricingResponse instance.
 */
PricingResponsePrivate::PricingResponsePrivate(
    PricingQueueResponse * const q) : PricingPrivate(q)
{

}

} // namespace Pricing
} // namespace QtAws
