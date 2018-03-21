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

#include "modifyinstanceattributerequest.h"
#include "modifyinstanceattributerequest_p.h"
#include "modifyinstanceattributeresponse.h"
#include "ec2request_p.h"

namespace AWS {
namespace EC2 {

/**
 * @class  ModifyInstanceAttributeRequest
 *
 * @brief  Implements EC2 ModifyInstanceAttribute requests.
 *
 * @see    EC2Client::modifyInstanceAttribute
 */

/**
 * @brief  Constructs a new ModifyInstanceAttributeResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ModifyInstanceAttributeResponse::ModifyInstanceAttributeResponse(

/**
 * @brief  Constructs a new ModifyInstanceAttributeRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ModifyInstanceAttributeRequest::ModifyInstanceAttributeRequest(const ModifyInstanceAttributeRequest &other)
    : EC2Request(new ModifyInstanceAttributeRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ModifyInstanceAttributeRequest object.
 */
ModifyInstanceAttributeRequest::ModifyInstanceAttributeRequest()
    : EC2Request(new ModifyInstanceAttributeRequestPrivate(EC2Request::ModifyInstanceAttributeAction, this))
{

}

bool ModifyInstanceAttributeRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ModifyInstanceAttributeResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ModifyInstanceAttributeResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * ModifyInstanceAttributeRequest::response(QNetworkReply * const reply) const
{
    return new ModifyInstanceAttributeResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ModifyInstanceAttributeRequestPrivate
 *
 * @brief  Private implementation for ModifyInstanceAttributeRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ModifyInstanceAttributeRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public ModifyInstanceAttributeRequest instance.
 */
ModifyInstanceAttributeRequestPrivate::ModifyInstanceAttributeRequestPrivate(
    const EC2Request::Action action, ModifyInstanceAttributeRequest * const q)
    : ModifyInstanceAttributePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ModifyInstanceAttributeRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ModifyInstanceAttributeRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ModifyInstanceAttributeRequest instance.
 */
ModifyInstanceAttributeRequestPrivate::ModifyInstanceAttributeRequestPrivate(
    const ModifyInstanceAttributeRequestPrivate &other, ModifyInstanceAttributeRequest * const q)
    : ModifyInstanceAttributePrivate(other, q)
{

}

} // namespace EC2
} // namespace AWS
