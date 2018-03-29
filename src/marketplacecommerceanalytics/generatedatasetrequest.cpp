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

#include "generatedatasetrequest.h"
#include "generatedatasetrequest_p.h"
#include "generatedatasetresponse.h"
#include "marketplacecommerceanalyticsrequest_p.h"

namespace QtAws {
namespace MarketplaceCommerceAnalytics {

/**
 * @class  GenerateDataSetRequest
 *
 * @brief  Implements MarketplaceCommerceAnalytics GenerateDataSet requests.
 *
 * @see    MarketplaceCommerceAnalyticsClient::generateDataSet
 */

/**
 * @brief  Constructs a new GenerateDataSetRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GenerateDataSetRequest::GenerateDataSetRequest(const GenerateDataSetRequest &other)
    : MarketplaceCommerceAnalyticsRequest(new GenerateDataSetRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GenerateDataSetRequest object.
 */
GenerateDataSetRequest::GenerateDataSetRequest()
    : MarketplaceCommerceAnalyticsRequest(new GenerateDataSetRequestPrivate(MarketplaceCommerceAnalyticsRequest::GenerateDataSetAction, this))
{

}

bool GenerateDataSetRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GenerateDataSetResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GenerateDataSetResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  MarketplaceCommerceAnalyticsClient::send
 */
QtAws::Core::AwsAbstractResponse * GenerateDataSetRequest::response(QNetworkReply * const reply) const
{
    return new GenerateDataSetResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GenerateDataSetRequestPrivate
 *
 * @brief  Private implementation for GenerateDataSetRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GenerateDataSetRequestPrivate object.
 *
 * @param  action  MarketplaceCommerceAnalytics action being performed.
 * @param  q       Pointer to this object's public GenerateDataSetRequest instance.
 */
GenerateDataSetRequestPrivate::GenerateDataSetRequestPrivate(
    const MarketplaceCommerceAnalyticsRequest::Action action, GenerateDataSetRequest * const q)
    : MarketplaceCommerceAnalyticsRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GenerateDataSetRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GenerateDataSetRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GenerateDataSetRequest instance.
 */
GenerateDataSetRequestPrivate::GenerateDataSetRequestPrivate(
    const GenerateDataSetRequestPrivate &other, GenerateDataSetRequest * const q)
    : MarketplaceCommerceAnalyticsRequestPrivate(other, q)
{

}

} // namespace MarketplaceCommerceAnalytics
} // namespace QtAws
