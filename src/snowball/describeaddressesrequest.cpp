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

#include "describeaddressesrequest.h"
#include "describeaddressesrequest_p.h"
#include "describeaddressesresponse.h"
#include "snowballrequest_p.h"

namespace AWS {
namespace Snowball {

/**
 * @class  DescribeAddressesRequest
 *
 * @brief  Implements Snowball DescribeAddresses requests.
 *
 * @see    SnowballClient::describeAddresses
 */

/**
 * @brief  Constructs a new DescribeAddressesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeAddressesRequest::DescribeAddressesRequest(const DescribeAddressesRequest &other)
    : SnowballRequest(new DescribeAddressesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeAddressesRequest object.
 */
DescribeAddressesRequest::DescribeAddressesRequest()
    : SnowballRequest(new DescribeAddressesRequestPrivate(SnowballRequest::DescribeAddressesAction, this))
{

}

bool DescribeAddressesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeAddressesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeAddressesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SnowballClient::send
 */
AwsAbstractResponse * DescribeAddressesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeAddressesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeAddressesRequestPrivate
 *
 * @brief  Private implementation for DescribeAddressesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeAddressesRequestPrivate object.
 *
 * @param  action  Snowball action being performed.
 * @param  q       Pointer to this object's public DescribeAddressesRequest instance.
 */
DescribeAddressesRequestPrivate::DescribeAddressesRequestPrivate(
    const SnowballRequest::Action action, DescribeAddressesRequest * const q)
    : DescribeAddressesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeAddressesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeAddressesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeAddressesRequest instance.
 */
DescribeAddressesRequestPrivate::DescribeAddressesRequestPrivate(
    const DescribeAddressesRequestPrivate &other, DescribeAddressesRequest * const q)
    : DescribeAddressesPrivate(other, q)
{

}

} // namespace Snowball
} // namespace AWS
