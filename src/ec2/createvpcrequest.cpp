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

#include "createvpcrequest.h"
#include "createvpcrequest_p.h"
#include "createvpcresponse.h"
#include "ec2request_p.h"

namespace AWS {
namespace EC2 {

/**
 * @class  CreateVpcRequest
 *
 * @brief  Implements EC2 CreateVpc requests.
 *
 * @see    EC2Client::createVpc
 */

/**
 * @brief  Constructs a new CreateVpcResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateVpcResponse::CreateVpcResponse(

/**
 * @brief  Constructs a new CreateVpcRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateVpcRequest::CreateVpcRequest(const CreateVpcRequest &other)
    : EC2Request(new CreateVpcRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateVpcRequest object.
 */
CreateVpcRequest::CreateVpcRequest()
    : EC2Request(new CreateVpcRequestPrivate(EC2Request::CreateVpcAction, this))
{

}

bool CreateVpcRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateVpcResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateVpcResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * CreateVpcRequest::response(QNetworkReply * const reply) const
{
    return new CreateVpcResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateVpcRequestPrivate
 *
 * @brief  Private implementation for CreateVpcRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateVpcRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public CreateVpcRequest instance.
 */
CreateVpcRequestPrivate::CreateVpcRequestPrivate(
    const EC2Request::Action action, CreateVpcRequest * const q)
    : CreateVpcPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateVpcRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateVpcRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateVpcRequest instance.
 */
CreateVpcRequestPrivate::CreateVpcRequestPrivate(
    const CreateVpcRequestPrivate &other, CreateVpcRequest * const q)
    : CreateVpcPrivate(other, q)
{

}
