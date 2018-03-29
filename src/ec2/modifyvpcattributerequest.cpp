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

#include "modifyvpcattributerequest.h"
#include "modifyvpcattributerequest_p.h"
#include "modifyvpcattributeresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/**
 * @class  ModifyVpcAttributeRequest
 *
 * @brief  Implements EC2 ModifyVpcAttribute requests.
 *
 * @see    EC2Client::modifyVpcAttribute
 */

/**
 * @brief  Constructs a new ModifyVpcAttributeRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ModifyVpcAttributeRequest::ModifyVpcAttributeRequest(const ModifyVpcAttributeRequest &other)
    : EC2Request(new ModifyVpcAttributeRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ModifyVpcAttributeRequest object.
 */
ModifyVpcAttributeRequest::ModifyVpcAttributeRequest()
    : EC2Request(new ModifyVpcAttributeRequestPrivate(EC2Request::ModifyVpcAttributeAction, this))
{

}

bool ModifyVpcAttributeRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ModifyVpcAttributeResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ModifyVpcAttributeResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * ModifyVpcAttributeRequest::response(QNetworkReply * const reply) const
{
    return new ModifyVpcAttributeResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ModifyVpcAttributeRequestPrivate
 *
 * @brief  Private implementation for ModifyVpcAttributeRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ModifyVpcAttributeRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public ModifyVpcAttributeRequest instance.
 */
ModifyVpcAttributeRequestPrivate::ModifyVpcAttributeRequestPrivate(
    const EC2Request::Action action, ModifyVpcAttributeRequest * const q)
    : ModifyVpcAttributePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ModifyVpcAttributeRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ModifyVpcAttributeRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ModifyVpcAttributeRequest instance.
 */
ModifyVpcAttributeRequestPrivate::ModifyVpcAttributeRequestPrivate(
    const ModifyVpcAttributeRequestPrivate &other, ModifyVpcAttributeRequest * const q)
    : ModifyVpcAttributePrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
