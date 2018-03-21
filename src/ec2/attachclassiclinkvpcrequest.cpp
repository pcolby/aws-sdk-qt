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

#include "attachclassiclinkvpcrequest.h"
#include "attachclassiclinkvpcrequest_p.h"
#include "attachclassiclinkvpcresponse.h"
#include "ec2request_p.h"

namespace AWS {
namespace EC2 {

/**
 * @class  AttachClassicLinkVpcRequest
 *
 * @brief  Implements EC2 AttachClassicLinkVpc requests.
 *
 * @see    EC2Client::attachClassicLinkVpc
 */

/**
 * @brief  Constructs a new AttachClassicLinkVpcRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AttachClassicLinkVpcRequest::AttachClassicLinkVpcRequest(const AttachClassicLinkVpcRequest &other)
    : EC2Request(new AttachClassicLinkVpcRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AttachClassicLinkVpcRequest object.
 */
AttachClassicLinkVpcRequest::AttachClassicLinkVpcRequest()
    : EC2Request(new AttachClassicLinkVpcRequestPrivate(EC2Request::AttachClassicLinkVpcAction, this))
{

}

bool AttachClassicLinkVpcRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AttachClassicLinkVpcResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AttachClassicLinkVpcResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * AttachClassicLinkVpcRequest::response(QNetworkReply * const reply) const
{
    return new AttachClassicLinkVpcResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AttachClassicLinkVpcRequestPrivate
 *
 * @brief  Private implementation for AttachClassicLinkVpcRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AttachClassicLinkVpcRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public AttachClassicLinkVpcRequest instance.
 */
AttachClassicLinkVpcRequestPrivate::AttachClassicLinkVpcRequestPrivate(
    const EC2Request::Action action, AttachClassicLinkVpcRequest * const q)
    : AttachClassicLinkVpcPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AttachClassicLinkVpcRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AttachClassicLinkVpcRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AttachClassicLinkVpcRequest instance.
 */
AttachClassicLinkVpcRequestPrivate::AttachClassicLinkVpcRequestPrivate(
    const AttachClassicLinkVpcRequestPrivate &other, AttachClassicLinkVpcRequest * const q)
    : AttachClassicLinkVpcPrivate(other, q)
{

}

} // namespace EC2
} // namespace AWS
