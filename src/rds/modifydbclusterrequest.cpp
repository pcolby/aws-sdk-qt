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

#include "modifydbclusterrequest.h"
#include "modifydbclusterrequest_p.h"
#include "modifydbclusterresponse.h"
#include "rdsrequest_p.h"

namespace QtAws {
namespace RDS {

/**
 * @class  ModifyDBClusterRequest
 *
 * @brief  Implements RDS ModifyDBCluster requests.
 *
 * @see    RDSClient::modifyDBCluster
 */

/**
 * @brief  Constructs a new ModifyDBClusterRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ModifyDBClusterRequest::ModifyDBClusterRequest(const ModifyDBClusterRequest &other)
    : RDSRequest(new ModifyDBClusterRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ModifyDBClusterRequest object.
 */
ModifyDBClusterRequest::ModifyDBClusterRequest()
    : RDSRequest(new ModifyDBClusterRequestPrivate(RDSRequest::ModifyDBClusterAction, this))
{

}

bool ModifyDBClusterRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ModifyDBClusterResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ModifyDBClusterResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  RDSClient::send
 */
AwsAbstractResponse * ModifyDBClusterRequest::response(QNetworkReply * const reply) const
{
    return new ModifyDBClusterResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ModifyDBClusterRequestPrivate
 *
 * @brief  Private implementation for ModifyDBClusterRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ModifyDBClusterRequestPrivate object.
 *
 * @param  action  RDS action being performed.
 * @param  q       Pointer to this object's public ModifyDBClusterRequest instance.
 */
ModifyDBClusterRequestPrivate::ModifyDBClusterRequestPrivate(
    const RDSRequest::Action action, ModifyDBClusterRequest * const q)
    : ModifyDBClusterPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ModifyDBClusterRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ModifyDBClusterRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ModifyDBClusterRequest instance.
 */
ModifyDBClusterRequestPrivate::ModifyDBClusterRequestPrivate(
    const ModifyDBClusterRequestPrivate &other, ModifyDBClusterRequest * const q)
    : ModifyDBClusterPrivate(other, q)
{

}

} // namespace RDS
} // namespace QtAws
