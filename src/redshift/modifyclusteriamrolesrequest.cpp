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

#include "modifyclusteriamrolesrequest.h"
#include "modifyclusteriamrolesrequest_p.h"
#include "modifyclusteriamrolesresponse.h"
#include "redshiftrequest_p.h"

namespace AWS {
namespace Redshift {

/**
 * @class  ModifyClusterIamRolesRequest
 *
 * @brief  Implements Redshift ModifyClusterIamRoles requests.
 *
 * @see    RedshiftClient::modifyClusterIamRoles
 */

/**
 * @brief  Constructs a new ModifyClusterIamRolesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ModifyClusterIamRolesRequest::ModifyClusterIamRolesRequest(const ModifyClusterIamRolesRequest &other)
    : RedshiftRequest(new ModifyClusterIamRolesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ModifyClusterIamRolesRequest object.
 */
ModifyClusterIamRolesRequest::ModifyClusterIamRolesRequest()
    : RedshiftRequest(new ModifyClusterIamRolesRequestPrivate(RedshiftRequest::ModifyClusterIamRolesAction, this))
{

}

bool ModifyClusterIamRolesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ModifyClusterIamRolesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ModifyClusterIamRolesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  RedshiftClient::send
 */
AwsAbstractResponse * ModifyClusterIamRolesRequest::response(QNetworkReply * const reply) const
{
    return new ModifyClusterIamRolesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ModifyClusterIamRolesRequestPrivate
 *
 * @brief  Private implementation for ModifyClusterIamRolesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ModifyClusterIamRolesRequestPrivate object.
 *
 * @param  action  Redshift action being performed.
 * @param  q       Pointer to this object's public ModifyClusterIamRolesRequest instance.
 */
ModifyClusterIamRolesRequestPrivate::ModifyClusterIamRolesRequestPrivate(
    const RedshiftRequest::Action action, ModifyClusterIamRolesRequest * const q)
    : ModifyClusterIamRolesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ModifyClusterIamRolesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ModifyClusterIamRolesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ModifyClusterIamRolesRequest instance.
 */
ModifyClusterIamRolesRequestPrivate::ModifyClusterIamRolesRequestPrivate(
    const ModifyClusterIamRolesRequestPrivate &other, ModifyClusterIamRolesRequest * const q)
    : ModifyClusterIamRolesPrivate(other, q)
{

}

} // namespace Redshift
} // namespace AWS
