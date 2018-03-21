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

#include "modifylunaclientrequest.h"
#include "modifylunaclientrequest_p.h"
#include "modifylunaclientresponse.h"
#include "cloudhsmrequest_p.h"

namespace AWS {
namespace CloudHSM {

/**
 * @class  ModifyLunaClientRequest
 *
 * @brief  Implements CloudHSM ModifyLunaClient requests.
 *
 * @see    CloudHSMClient::modifyLunaClient
 */

/**
 * @brief  Constructs a new ModifyLunaClientRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ModifyLunaClientRequest::ModifyLunaClientRequest(const ModifyLunaClientRequest &other)
    : CloudHSMRequest(new ModifyLunaClientRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ModifyLunaClientRequest object.
 */
ModifyLunaClientRequest::ModifyLunaClientRequest()
    : CloudHSMRequest(new ModifyLunaClientRequestPrivate(CloudHSMRequest::ModifyLunaClientAction, this))
{

}

bool ModifyLunaClientRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ModifyLunaClientResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ModifyLunaClientResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudHSMClient::send
 */
AwsAbstractResponse * ModifyLunaClientRequest::response(QNetworkReply * const reply) const
{
    return new ModifyLunaClientResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ModifyLunaClientRequestPrivate
 *
 * @brief  Private implementation for ModifyLunaClientRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ModifyLunaClientRequestPrivate object.
 *
 * @param  action  CloudHSM action being performed.
 * @param  q       Pointer to this object's public ModifyLunaClientRequest instance.
 */
ModifyLunaClientRequestPrivate::ModifyLunaClientRequestPrivate(
    const CloudHSMRequest::Action action, ModifyLunaClientRequest * const q)
    : ModifyLunaClientPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ModifyLunaClientRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ModifyLunaClientRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ModifyLunaClientRequest instance.
 */
ModifyLunaClientRequestPrivate::ModifyLunaClientRequestPrivate(
    const ModifyLunaClientRequestPrivate &other, ModifyLunaClientRequest * const q)
    : ModifyLunaClientPrivate(other, q)
{

}

} // namespace CloudHSM
} // namespace AWS
