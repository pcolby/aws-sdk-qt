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

#include "createdefaultvpcrequest.h"
#include "createdefaultvpcrequest_p.h"
#include "createdefaultvpcresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/**
 * @class  CreateDefaultVpcRequest
 *
 * @brief  Implements EC2 CreateDefaultVpc requests.
 *
 * @see    EC2Client::createDefaultVpc
 */

/**
 * @brief  Constructs a new CreateDefaultVpcRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateDefaultVpcRequest::CreateDefaultVpcRequest(const CreateDefaultVpcRequest &other)
    : EC2Request(new CreateDefaultVpcRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateDefaultVpcRequest object.
 */
CreateDefaultVpcRequest::CreateDefaultVpcRequest()
    : EC2Request(new CreateDefaultVpcRequestPrivate(EC2Request::CreateDefaultVpcAction, this))
{

}

bool CreateDefaultVpcRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateDefaultVpcResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateDefaultVpcResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  EC2Client::send
 */
QtAws::Core::AwsAbstractResponse * CreateDefaultVpcRequest::response(QNetworkReply * const reply) const
{
    return new CreateDefaultVpcResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateDefaultVpcRequestPrivate
 *
 * @brief  Private implementation for CreateDefaultVpcRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateDefaultVpcRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public CreateDefaultVpcRequest instance.
 */
CreateDefaultVpcRequestPrivate::CreateDefaultVpcRequestPrivate(
    const EC2Request::Action action, CreateDefaultVpcRequest * const q)
    : EC2RequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateDefaultVpcRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateDefaultVpcRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateDefaultVpcRequest instance.
 */
CreateDefaultVpcRequestPrivate::CreateDefaultVpcRequestPrivate(
    const CreateDefaultVpcRequestPrivate &other, CreateDefaultVpcRequest * const q)
    : EC2RequestPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
