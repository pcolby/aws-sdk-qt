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

#include "describeavailabilityoptionsrequest.h"
#include "describeavailabilityoptionsrequest_p.h"
#include "describeavailabilityoptionsresponse.h"
#include "cloudsearchrequest_p.h"

namespace AWS {
namespace CloudSearch {

/**
 * @class  DescribeAvailabilityOptionsRequest
 *
 * @brief  Implements CloudSearch DescribeAvailabilityOptions requests.
 *
 * @see    CloudSearchClient::describeAvailabilityOptions
 */

/**
 * @brief  Constructs a new DescribeAvailabilityOptionsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeAvailabilityOptionsRequest::DescribeAvailabilityOptionsRequest(const DescribeAvailabilityOptionsRequest &other)
    : CloudSearchRequest(new DescribeAvailabilityOptionsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeAvailabilityOptionsRequest object.
 */
DescribeAvailabilityOptionsRequest::DescribeAvailabilityOptionsRequest()
    : CloudSearchRequest(new DescribeAvailabilityOptionsRequestPrivate(CloudSearchRequest::DescribeAvailabilityOptionsAction, this))
{

}

bool DescribeAvailabilityOptionsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeAvailabilityOptionsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeAvailabilityOptionsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudSearchClient::send
 */
AwsAbstractResponse * DescribeAvailabilityOptionsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeAvailabilityOptionsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeAvailabilityOptionsRequestPrivate
 *
 * @brief  Private implementation for DescribeAvailabilityOptionsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeAvailabilityOptionsRequestPrivate object.
 *
 * @param  action  CloudSearch action being performed.
 * @param  q       Pointer to this object's public DescribeAvailabilityOptionsRequest instance.
 */
DescribeAvailabilityOptionsRequestPrivate::DescribeAvailabilityOptionsRequestPrivate(
    const CloudSearchRequest::Action action, DescribeAvailabilityOptionsRequest * const q)
    : DescribeAvailabilityOptionsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeAvailabilityOptionsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeAvailabilityOptionsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeAvailabilityOptionsRequest instance.
 */
DescribeAvailabilityOptionsRequestPrivate::DescribeAvailabilityOptionsRequestPrivate(
    const DescribeAvailabilityOptionsRequestPrivate &other, DescribeAvailabilityOptionsRequest * const q)
    : DescribeAvailabilityOptionsPrivate(other, q)
{

}

} // namespace CloudSearch
} // namespace AWS
