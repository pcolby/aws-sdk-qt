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

#include "describemovingaddressesrequest.h"
#include "describemovingaddressesrequest_p.h"
#include "describemovingaddressesresponse.h"
#include "ec2request_p.h"

namespace AWS {
namespace EC2 {

/**
 * @class  DescribeMovingAddressesRequest
 *
 * @brief  Implements EC2 DescribeMovingAddresses requests.
 *
 * @see    EC2Client::describeMovingAddresses
 */

/**
 * @brief  Constructs a new DescribeMovingAddressesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeMovingAddressesResponse::DescribeMovingAddressesResponse(

/**
 * @brief  Constructs a new DescribeMovingAddressesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeMovingAddressesRequest::DescribeMovingAddressesRequest(const DescribeMovingAddressesRequest &other)
    : EC2Request(new DescribeMovingAddressesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeMovingAddressesRequest object.
 */
DescribeMovingAddressesRequest::DescribeMovingAddressesRequest()
    : EC2Request(new DescribeMovingAddressesRequestPrivate(EC2Request::DescribeMovingAddressesAction, this))
{

}

bool DescribeMovingAddressesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeMovingAddressesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeMovingAddressesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * DescribeMovingAddressesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeMovingAddressesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeMovingAddressesRequestPrivate
 *
 * @brief  Private implementation for DescribeMovingAddressesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeMovingAddressesRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public DescribeMovingAddressesRequest instance.
 */
DescribeMovingAddressesRequestPrivate::DescribeMovingAddressesRequestPrivate(
    const EC2Request::Action action, DescribeMovingAddressesRequest * const q)
    : DescribeMovingAddressesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeMovingAddressesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeMovingAddressesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeMovingAddressesRequest instance.
 */
DescribeMovingAddressesRequestPrivate::DescribeMovingAddressesRequestPrivate(
    const DescribeMovingAddressesRequestPrivate &other, DescribeMovingAddressesRequest * const q)
    : DescribeMovingAddressesPrivate(other, q)
{

}
