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

#include "describeaggregationauthorizationsrequest.h"
#include "describeaggregationauthorizationsrequest_p.h"
#include "describeaggregationauthorizationsresponse.h"
#include "configservicerequest_p.h"

namespace QtAws {
namespace ConfigService {

/**
 * @class  DescribeAggregationAuthorizationsRequest
 *
 * @brief  Implements ConfigService DescribeAggregationAuthorizations requests.
 *
 * @see    ConfigServiceClient::describeAggregationAuthorizations
 */

/**
 * @brief  Constructs a new DescribeAggregationAuthorizationsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeAggregationAuthorizationsRequest::DescribeAggregationAuthorizationsRequest(const DescribeAggregationAuthorizationsRequest &other)
    : ConfigServiceRequest(new DescribeAggregationAuthorizationsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeAggregationAuthorizationsRequest object.
 */
DescribeAggregationAuthorizationsRequest::DescribeAggregationAuthorizationsRequest()
    : ConfigServiceRequest(new DescribeAggregationAuthorizationsRequestPrivate(ConfigServiceRequest::DescribeAggregationAuthorizationsAction, this))
{

}

bool DescribeAggregationAuthorizationsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeAggregationAuthorizationsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeAggregationAuthorizationsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ConfigServiceClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeAggregationAuthorizationsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeAggregationAuthorizationsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeAggregationAuthorizationsRequestPrivate
 *
 * @brief  Private implementation for DescribeAggregationAuthorizationsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeAggregationAuthorizationsRequestPrivate object.
 *
 * @param  action  ConfigService action being performed.
 * @param  q       Pointer to this object's public DescribeAggregationAuthorizationsRequest instance.
 */
DescribeAggregationAuthorizationsRequestPrivate::DescribeAggregationAuthorizationsRequestPrivate(
    const ConfigServiceRequest::Action action, DescribeAggregationAuthorizationsRequest * const q)
    : ConfigServiceRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeAggregationAuthorizationsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeAggregationAuthorizationsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeAggregationAuthorizationsRequest instance.
 */
DescribeAggregationAuthorizationsRequestPrivate::DescribeAggregationAuthorizationsRequestPrivate(
    const DescribeAggregationAuthorizationsRequestPrivate &other, DescribeAggregationAuthorizationsRequest * const q)
    : ConfigServiceRequestPrivate(other, q)
{

}

} // namespace ConfigService
} // namespace QtAws
