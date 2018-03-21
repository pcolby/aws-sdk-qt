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

#include "registercrossaccountaccessrolerequest.h"
#include "registercrossaccountaccessrolerequest_p.h"
#include "registercrossaccountaccessroleresponse.h"
#include "inspectorrequest_p.h"

namespace AWS {
namespace Inspector {

/**
 * @class  RegisterCrossAccountAccessRoleRequest
 *
 * @brief  Implements Inspector RegisterCrossAccountAccessRole requests.
 *
 * @see    InspectorClient::registerCrossAccountAccessRole
 */

/**
 * @brief  Constructs a new RegisterCrossAccountAccessRoleRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RegisterCrossAccountAccessRoleRequest::RegisterCrossAccountAccessRoleRequest(const RegisterCrossAccountAccessRoleRequest &other)
    : InspectorRequest(new RegisterCrossAccountAccessRoleRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new RegisterCrossAccountAccessRoleRequest object.
 */
RegisterCrossAccountAccessRoleRequest::RegisterCrossAccountAccessRoleRequest()
    : InspectorRequest(new RegisterCrossAccountAccessRoleRequestPrivate(InspectorRequest::RegisterCrossAccountAccessRoleAction, this))
{

}

bool RegisterCrossAccountAccessRoleRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an RegisterCrossAccountAccessRoleResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RegisterCrossAccountAccessRoleResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  InspectorClient::send
 */
AwsAbstractResponse * RegisterCrossAccountAccessRoleRequest::response(QNetworkReply * const reply) const
{
    return new RegisterCrossAccountAccessRoleResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  RegisterCrossAccountAccessRoleRequestPrivate
 *
 * @brief  Private implementation for RegisterCrossAccountAccessRoleRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RegisterCrossAccountAccessRoleRequestPrivate object.
 *
 * @param  action  Inspector action being performed.
 * @param  q       Pointer to this object's public RegisterCrossAccountAccessRoleRequest instance.
 */
RegisterCrossAccountAccessRoleRequestPrivate::RegisterCrossAccountAccessRoleRequestPrivate(
    const InspectorRequest::Action action, RegisterCrossAccountAccessRoleRequest * const q)
    : RegisterCrossAccountAccessRolePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new RegisterCrossAccountAccessRoleRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RegisterCrossAccountAccessRoleRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RegisterCrossAccountAccessRoleRequest instance.
 */
RegisterCrossAccountAccessRoleRequestPrivate::RegisterCrossAccountAccessRoleRequestPrivate(
    const RegisterCrossAccountAccessRoleRequestPrivate &other, RegisterCrossAccountAccessRoleRequest * const q)
    : RegisterCrossAccountAccessRolePrivate(other, q)
{

}

} // namespace Inspector
} // namespace AWS
