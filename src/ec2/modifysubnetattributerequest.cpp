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

#include "modifysubnetattributerequest.h"
#include "modifysubnetattributerequest_p.h"
#include "modifysubnetattributeresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/**
 * @class  ModifySubnetAttributeRequest
 *
 * @brief  Implements EC2 ModifySubnetAttribute requests.
 *
 * @see    EC2Client::modifySubnetAttribute
 */

/**
 * @brief  Constructs a new ModifySubnetAttributeRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ModifySubnetAttributeRequest::ModifySubnetAttributeRequest(const ModifySubnetAttributeRequest &other)
    : EC2Request(new ModifySubnetAttributeRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ModifySubnetAttributeRequest object.
 */
ModifySubnetAttributeRequest::ModifySubnetAttributeRequest()
    : EC2Request(new ModifySubnetAttributeRequestPrivate(EC2Request::ModifySubnetAttributeAction, this))
{

}

bool ModifySubnetAttributeRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ModifySubnetAttributeResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ModifySubnetAttributeResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * ModifySubnetAttributeRequest::response(QNetworkReply * const reply) const
{
    return new ModifySubnetAttributeResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ModifySubnetAttributeRequestPrivate
 *
 * @brief  Private implementation for ModifySubnetAttributeRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ModifySubnetAttributeRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public ModifySubnetAttributeRequest instance.
 */
ModifySubnetAttributeRequestPrivate::ModifySubnetAttributeRequestPrivate(
    const EC2Request::Action action, ModifySubnetAttributeRequest * const q)
    : ModifySubnetAttributePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ModifySubnetAttributeRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ModifySubnetAttributeRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ModifySubnetAttributeRequest instance.
 */
ModifySubnetAttributeRequestPrivate::ModifySubnetAttributeRequestPrivate(
    const ModifySubnetAttributeRequestPrivate &other, ModifySubnetAttributeRequest * const q)
    : ModifySubnetAttributePrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
