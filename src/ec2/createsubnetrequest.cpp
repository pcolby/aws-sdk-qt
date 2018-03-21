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

#include "createsubnetrequest.h"
#include "createsubnetrequest_p.h"
#include "createsubnetresponse.h"
#include "ec2request_p.h"

namespace AWS {
namespace EC2 {

/**
 * @class  CreateSubnetRequest
 *
 * @brief  Implements EC2 CreateSubnet requests.
 *
 * @see    EC2Client::createSubnet
 */

/**
 * @brief  Constructs a new CreateSubnetRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateSubnetRequest::CreateSubnetRequest(const CreateSubnetRequest &other)
    : EC2Request(new CreateSubnetRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateSubnetRequest object.
 */
CreateSubnetRequest::CreateSubnetRequest()
    : EC2Request(new CreateSubnetRequestPrivate(EC2Request::CreateSubnetAction, this))
{

}

bool CreateSubnetRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateSubnetResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateSubnetResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * CreateSubnetRequest::response(QNetworkReply * const reply) const
{
    return new CreateSubnetResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateSubnetRequestPrivate
 *
 * @brief  Private implementation for CreateSubnetRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateSubnetRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public CreateSubnetRequest instance.
 */
CreateSubnetRequestPrivate::CreateSubnetRequestPrivate(
    const EC2Request::Action action, CreateSubnetRequest * const q)
    : CreateSubnetPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateSubnetRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateSubnetRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateSubnetRequest instance.
 */
CreateSubnetRequestPrivate::CreateSubnetRequestPrivate(
    const CreateSubnetRequestPrivate &other, CreateSubnetRequest * const q)
    : CreateSubnetPrivate(other, q)
{

}

} // namespace EC2
} // namespace AWS
