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

#include "describenetworkinterfaceattributerequest.h"
#include "describenetworkinterfaceattributerequest_p.h"
#include "describenetworkinterfaceattributeresponse.h"
#include "ec2request_p.h"

namespace AWS {
namespace EC2 {

/**
 * @class  DescribeNetworkInterfaceAttributeRequest
 *
 * @brief  Implements EC2 DescribeNetworkInterfaceAttribute requests.
 *
 * @see    EC2Client::describeNetworkInterfaceAttribute
 */

/**
 * @brief  Constructs a new DescribeNetworkInterfaceAttributeResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeNetworkInterfaceAttributeResponse::DescribeNetworkInterfaceAttributeResponse(

/**
 * @brief  Constructs a new DescribeNetworkInterfaceAttributeRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeNetworkInterfaceAttributeRequest::DescribeNetworkInterfaceAttributeRequest(const DescribeNetworkInterfaceAttributeRequest &other)
    : EC2Request(new DescribeNetworkInterfaceAttributeRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeNetworkInterfaceAttributeRequest object.
 */
DescribeNetworkInterfaceAttributeRequest::DescribeNetworkInterfaceAttributeRequest()
    : EC2Request(new DescribeNetworkInterfaceAttributeRequestPrivate(EC2Request::DescribeNetworkInterfaceAttributeAction, this))
{

}

bool DescribeNetworkInterfaceAttributeRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeNetworkInterfaceAttributeResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeNetworkInterfaceAttributeResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * DescribeNetworkInterfaceAttributeRequest::response(QNetworkReply * const reply) const
{
    return new DescribeNetworkInterfaceAttributeResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeNetworkInterfaceAttributeRequestPrivate
 *
 * @brief  Private implementation for DescribeNetworkInterfaceAttributeRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeNetworkInterfaceAttributeRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public DescribeNetworkInterfaceAttributeRequest instance.
 */
DescribeNetworkInterfaceAttributeRequestPrivate::DescribeNetworkInterfaceAttributeRequestPrivate(
    const EC2Request::Action action, DescribeNetworkInterfaceAttributeRequest * const q)
    : DescribeNetworkInterfaceAttributePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeNetworkInterfaceAttributeRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeNetworkInterfaceAttributeRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeNetworkInterfaceAttributeRequest instance.
 */
DescribeNetworkInterfaceAttributeRequestPrivate::DescribeNetworkInterfaceAttributeRequestPrivate(
    const DescribeNetworkInterfaceAttributeRequestPrivate &other, DescribeNetworkInterfaceAttributeRequest * const q)
    : DescribeNetworkInterfaceAttributePrivate(other, q)
{

}

} // namespace EC2
} // namespace AWS
