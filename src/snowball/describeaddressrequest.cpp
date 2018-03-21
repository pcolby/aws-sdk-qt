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

#include "describeaddressrequest.h"
#include "describeaddressrequest_p.h"
#include "describeaddressresponse.h"
#include "snowballrequest_p.h"

namespace AWS {
namespace Snowball {

/**
 * @class  DescribeAddressRequest
 *
 * @brief  Implements Snowball DescribeAddress requests.
 *
 * @see    SnowballClient::describeAddress
 */

/**
 * @brief  Constructs a new DescribeAddressResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeAddressResponse::DescribeAddressResponse(

/**
 * @brief  Constructs a new DescribeAddressRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeAddressRequest::DescribeAddressRequest(const DescribeAddressRequest &other)
    : SnowballRequest(new DescribeAddressRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeAddressRequest object.
 */
DescribeAddressRequest::DescribeAddressRequest()
    : SnowballRequest(new DescribeAddressRequestPrivate(SnowballRequest::DescribeAddressAction, this))
{

}

bool DescribeAddressRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeAddressResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeAddressResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SnowballClient::send
 */
AwsAbstractResponse * DescribeAddressRequest::response(QNetworkReply * const reply) const
{
    return new DescribeAddressResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeAddressRequestPrivate
 *
 * @brief  Private implementation for DescribeAddressRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeAddressRequestPrivate object.
 *
 * @param  action  Snowball action being performed.
 * @param  q       Pointer to this object's public DescribeAddressRequest instance.
 */
DescribeAddressRequestPrivate::DescribeAddressRequestPrivate(
    const SnowballRequest::Action action, DescribeAddressRequest * const q)
    : DescribeAddressPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeAddressRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeAddressRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeAddressRequest instance.
 */
DescribeAddressRequestPrivate::DescribeAddressRequestPrivate(
    const DescribeAddressRequestPrivate &other, DescribeAddressRequest * const q)
    : DescribeAddressPrivate(other, q)
{

}
