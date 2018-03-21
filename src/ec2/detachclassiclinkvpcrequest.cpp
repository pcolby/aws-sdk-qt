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

#include "detachclassiclinkvpcrequest.h"
#include "detachclassiclinkvpcrequest_p.h"
#include "detachclassiclinkvpcresponse.h"
#include "ec2request_p.h"

namespace AWS {
namespace EC2 {

/**
 * @class  DetachClassicLinkVpcRequest
 *
 * @brief  Implements EC2 DetachClassicLinkVpc requests.
 *
 * @see    EC2Client::detachClassicLinkVpc
 */

/**
 * @brief  Constructs a new DetachClassicLinkVpcRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DetachClassicLinkVpcRequest::DetachClassicLinkVpcRequest(const DetachClassicLinkVpcRequest &other)
    : EC2Request(new DetachClassicLinkVpcRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DetachClassicLinkVpcRequest object.
 */
DetachClassicLinkVpcRequest::DetachClassicLinkVpcRequest()
    : EC2Request(new DetachClassicLinkVpcRequestPrivate(EC2Request::DetachClassicLinkVpcAction, this))
{

}

bool DetachClassicLinkVpcRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DetachClassicLinkVpcResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DetachClassicLinkVpcResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * DetachClassicLinkVpcRequest::response(QNetworkReply * const reply) const
{
    return new DetachClassicLinkVpcResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DetachClassicLinkVpcRequestPrivate
 *
 * @brief  Private implementation for DetachClassicLinkVpcRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DetachClassicLinkVpcRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public DetachClassicLinkVpcRequest instance.
 */
DetachClassicLinkVpcRequestPrivate::DetachClassicLinkVpcRequestPrivate(
    const EC2Request::Action action, DetachClassicLinkVpcRequest * const q)
    : DetachClassicLinkVpcPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DetachClassicLinkVpcRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DetachClassicLinkVpcRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DetachClassicLinkVpcRequest instance.
 */
DetachClassicLinkVpcRequestPrivate::DetachClassicLinkVpcRequestPrivate(
    const DetachClassicLinkVpcRequestPrivate &other, DetachClassicLinkVpcRequest * const q)
    : DetachClassicLinkVpcPrivate(other, q)
{

}

} // namespace EC2
} // namespace AWS
