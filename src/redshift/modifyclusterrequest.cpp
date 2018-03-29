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

#include "modifyclusterrequest.h"
#include "modifyclusterrequest_p.h"
#include "modifyclusterresponse.h"
#include "redshiftrequest_p.h"

namespace AWS {
namespace Redshift {

/**
 * @class  ModifyClusterRequest
 *
 * @brief  Implements Redshift ModifyCluster requests.
 *
 * @see    RedshiftClient::modifyCluster
 */

/**
 * @brief  Constructs a new ModifyClusterRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ModifyClusterRequest::ModifyClusterRequest(const ModifyClusterRequest &other)
    : RedshiftRequest(new ModifyClusterRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ModifyClusterRequest object.
 */
ModifyClusterRequest::ModifyClusterRequest()
    : RedshiftRequest(new ModifyClusterRequestPrivate(RedshiftRequest::ModifyClusterAction, this))
{

}

bool ModifyClusterRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ModifyClusterResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ModifyClusterResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  RedshiftClient::send
 */
AwsAbstractResponse * ModifyClusterRequest::response(QNetworkReply * const reply) const
{
    return new ModifyClusterResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ModifyClusterRequestPrivate
 *
 * @brief  Private implementation for ModifyClusterRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ModifyClusterRequestPrivate object.
 *
 * @param  action  Redshift action being performed.
 * @param  q       Pointer to this object's public ModifyClusterRequest instance.
 */
ModifyClusterRequestPrivate::ModifyClusterRequestPrivate(
    const RedshiftRequest::Action action, ModifyClusterRequest * const q)
    : ModifyClusterPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ModifyClusterRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ModifyClusterRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ModifyClusterRequest instance.
 */
ModifyClusterRequestPrivate::ModifyClusterRequestPrivate(
    const ModifyClusterRequestPrivate &other, ModifyClusterRequest * const q)
    : ModifyClusterPrivate(other, q)
{

}

} // namespace Redshift
} // namespace AWS
