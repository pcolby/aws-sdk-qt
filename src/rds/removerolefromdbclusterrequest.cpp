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

#include "removerolefromdbclusterrequest.h"
#include "removerolefromdbclusterrequest_p.h"
#include "removerolefromdbclusterresponse.h"
#include "rdsrequest_p.h"

namespace QtAws {
namespace RDS {

/**
 * @class  RemoveRoleFromDBClusterRequest
 *
 * @brief  Implements RDS RemoveRoleFromDBCluster requests.
 *
 * @see    RDSClient::removeRoleFromDBCluster
 */

/**
 * @brief  Constructs a new RemoveRoleFromDBClusterRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RemoveRoleFromDBClusterRequest::RemoveRoleFromDBClusterRequest(const RemoveRoleFromDBClusterRequest &other)
    : RDSRequest(new RemoveRoleFromDBClusterRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new RemoveRoleFromDBClusterRequest object.
 */
RemoveRoleFromDBClusterRequest::RemoveRoleFromDBClusterRequest()
    : RDSRequest(new RemoveRoleFromDBClusterRequestPrivate(RDSRequest::RemoveRoleFromDBClusterAction, this))
{

}

bool RemoveRoleFromDBClusterRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an RemoveRoleFromDBClusterResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RemoveRoleFromDBClusterResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  RDSClient::send
 */
QtAws::Core::AwsAbstractResponse * RemoveRoleFromDBClusterRequest::response(QNetworkReply * const reply) const
{
    return new RemoveRoleFromDBClusterResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  RemoveRoleFromDBClusterRequestPrivate
 *
 * @brief  Private implementation for RemoveRoleFromDBClusterRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RemoveRoleFromDBClusterRequestPrivate object.
 *
 * @param  action  RDS action being performed.
 * @param  q       Pointer to this object's public RemoveRoleFromDBClusterRequest instance.
 */
RemoveRoleFromDBClusterRequestPrivate::RemoveRoleFromDBClusterRequestPrivate(
    const RDSRequest::Action action, RemoveRoleFromDBClusterRequest * const q)
    : RemoveRoleFromDBClusterPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new RemoveRoleFromDBClusterRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RemoveRoleFromDBClusterRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RemoveRoleFromDBClusterRequest instance.
 */
RemoveRoleFromDBClusterRequestPrivate::RemoveRoleFromDBClusterRequestPrivate(
    const RemoveRoleFromDBClusterRequestPrivate &other, RemoveRoleFromDBClusterRequest * const q)
    : RemoveRoleFromDBClusterPrivate(other, q)
{

}

} // namespace RDS
} // namespace QtAws
