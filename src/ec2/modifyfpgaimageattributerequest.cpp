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

#include "modifyfpgaimageattributerequest.h"
#include "modifyfpgaimageattributerequest_p.h"
#include "modifyfpgaimageattributeresponse.h"
#include "ec2request_p.h"

namespace AWS {
namespace EC2 {

/**
 * @class  ModifyFpgaImageAttributeRequest
 *
 * @brief  Implements EC2 ModifyFpgaImageAttribute requests.
 *
 * @see    EC2Client::modifyFpgaImageAttribute
 */

/**
 * @brief  Constructs a new ModifyFpgaImageAttributeResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ModifyFpgaImageAttributeResponse::ModifyFpgaImageAttributeResponse(

/**
 * @brief  Constructs a new ModifyFpgaImageAttributeRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ModifyFpgaImageAttributeRequest::ModifyFpgaImageAttributeRequest(const ModifyFpgaImageAttributeRequest &other)
    : EC2Request(new ModifyFpgaImageAttributeRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ModifyFpgaImageAttributeRequest object.
 */
ModifyFpgaImageAttributeRequest::ModifyFpgaImageAttributeRequest()
    : EC2Request(new ModifyFpgaImageAttributeRequestPrivate(EC2Request::ModifyFpgaImageAttributeAction, this))
{

}

bool ModifyFpgaImageAttributeRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ModifyFpgaImageAttributeResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ModifyFpgaImageAttributeResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * ModifyFpgaImageAttributeRequest::response(QNetworkReply * const reply) const
{
    return new ModifyFpgaImageAttributeResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ModifyFpgaImageAttributeRequestPrivate
 *
 * @brief  Private implementation for ModifyFpgaImageAttributeRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ModifyFpgaImageAttributeRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public ModifyFpgaImageAttributeRequest instance.
 */
ModifyFpgaImageAttributeRequestPrivate::ModifyFpgaImageAttributeRequestPrivate(
    const EC2Request::Action action, ModifyFpgaImageAttributeRequest * const q)
    : ModifyFpgaImageAttributePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ModifyFpgaImageAttributeRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ModifyFpgaImageAttributeRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ModifyFpgaImageAttributeRequest instance.
 */
ModifyFpgaImageAttributeRequestPrivate::ModifyFpgaImageAttributeRequestPrivate(
    const ModifyFpgaImageAttributeRequestPrivate &other, ModifyFpgaImageAttributeRequest * const q)
    : ModifyFpgaImageAttributePrivate(other, q)
{

}
