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

#include "moveaddresstovpcrequest.h"
#include "moveaddresstovpcrequest_p.h"
#include "moveaddresstovpcresponse.h"
#include "ec2request_p.h"

namespace AWS {
namespace EC2 {

/**
 * @class  MoveAddressToVpcRequest
 *
 * @brief  Implements EC2 MoveAddressToVpc requests.
 *
 * @see    EC2Client::moveAddressToVpc
 */

/**
 * @brief  Constructs a new MoveAddressToVpcResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
MoveAddressToVpcResponse::MoveAddressToVpcResponse(

/**
 * @brief  Constructs a new MoveAddressToVpcRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
MoveAddressToVpcRequest::MoveAddressToVpcRequest(const MoveAddressToVpcRequest &other)
    : EC2Request(new MoveAddressToVpcRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new MoveAddressToVpcRequest object.
 */
MoveAddressToVpcRequest::MoveAddressToVpcRequest()
    : EC2Request(new MoveAddressToVpcRequestPrivate(EC2Request::MoveAddressToVpcAction, this))
{

}

bool MoveAddressToVpcRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an MoveAddressToVpcResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An MoveAddressToVpcResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * MoveAddressToVpcRequest::response(QNetworkReply * const reply) const
{
    return new MoveAddressToVpcResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  MoveAddressToVpcRequestPrivate
 *
 * @brief  Private implementation for MoveAddressToVpcRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new MoveAddressToVpcRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public MoveAddressToVpcRequest instance.
 */
MoveAddressToVpcRequestPrivate::MoveAddressToVpcRequestPrivate(
    const EC2Request::Action action, MoveAddressToVpcRequest * const q)
    : MoveAddressToVpcPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new MoveAddressToVpcRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the MoveAddressToVpcRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public MoveAddressToVpcRequest instance.
 */
MoveAddressToVpcRequestPrivate::MoveAddressToVpcRequestPrivate(
    const MoveAddressToVpcRequestPrivate &other, MoveAddressToVpcRequest * const q)
    : MoveAddressToVpcPrivate(other, q)
{

}

} // namespace EC2
} // namespace AWS
