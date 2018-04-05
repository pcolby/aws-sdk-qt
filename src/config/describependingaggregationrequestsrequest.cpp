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

#include "describependingaggregationrequestsrequest.h"
#include "describependingaggregationrequestsrequest_p.h"
#include "describependingaggregationrequestsresponse.h"
#include "configservicerequest_p.h"

namespace QtAws {
namespace ConfigService {

/**
 * @class  DescribePendingAggregationRequestsRequest
 *
 * @brief  Implements ConfigService DescribePendingAggregationRequests requests.
 *
 * @see    ConfigServiceClient::describePendingAggregationRequests
 */

/**
 * @brief  Constructs a new DescribePendingAggregationRequestsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribePendingAggregationRequestsRequest::DescribePendingAggregationRequestsRequest(const DescribePendingAggregationRequestsRequest &other)
    : ConfigServiceRequest(new DescribePendingAggregationRequestsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribePendingAggregationRequestsRequest object.
 */
DescribePendingAggregationRequestsRequest::DescribePendingAggregationRequestsRequest()
    : ConfigServiceRequest(new DescribePendingAggregationRequestsRequestPrivate(ConfigServiceRequest::DescribePendingAggregationRequestsAction, this))
{

}

bool DescribePendingAggregationRequestsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribePendingAggregationRequestsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribePendingAggregationRequestsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ConfigServiceClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribePendingAggregationRequestsRequest::response(QNetworkReply * const reply) const
{
    return new DescribePendingAggregationRequestsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribePendingAggregationRequestsRequestPrivate
 *
 * @brief  Private implementation for DescribePendingAggregationRequestsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribePendingAggregationRequestsRequestPrivate object.
 *
 * @param  action  ConfigService action being performed.
 * @param  q       Pointer to this object's public DescribePendingAggregationRequestsRequest instance.
 */
DescribePendingAggregationRequestsRequestPrivate::DescribePendingAggregationRequestsRequestPrivate(
    const ConfigServiceRequest::Action action, DescribePendingAggregationRequestsRequest * const q)
    : ConfigServiceRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribePendingAggregationRequestsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribePendingAggregationRequestsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribePendingAggregationRequestsRequest instance.
 */
DescribePendingAggregationRequestsRequestPrivate::DescribePendingAggregationRequestsRequestPrivate(
    const DescribePendingAggregationRequestsRequestPrivate &other, DescribePendingAggregationRequestsRequest * const q)
    : ConfigServiceRequestPrivate(other, q)
{

}

} // namespace ConfigService
} // namespace QtAws
