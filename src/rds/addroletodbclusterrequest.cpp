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

#include "addroletodbclusterrequest.h"
#include "addroletodbclusterrequest_p.h"
#include "addroletodbclusterresponse.h"
#include "rdsrequest_p.h"

namespace QtAws {
namespace RDS {

/**
 * @class  AddRoleToDBClusterRequest
 *
 * @brief  Implements RDS AddRoleToDBCluster requests.
 *
 * @see    RDSClient::addRoleToDBCluster
 */

/**
 * @brief  Constructs a new AddRoleToDBClusterRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AddRoleToDBClusterRequest::AddRoleToDBClusterRequest(const AddRoleToDBClusterRequest &other)
    : RDSRequest(new AddRoleToDBClusterRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AddRoleToDBClusterRequest object.
 */
AddRoleToDBClusterRequest::AddRoleToDBClusterRequest()
    : RDSRequest(new AddRoleToDBClusterRequestPrivate(RDSRequest::AddRoleToDBClusterAction, this))
{

}

bool AddRoleToDBClusterRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AddRoleToDBClusterResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AddRoleToDBClusterResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  RDSClient::send
 */
AwsAbstractResponse * AddRoleToDBClusterRequest::response(QNetworkReply * const reply) const
{
    return new AddRoleToDBClusterResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AddRoleToDBClusterRequestPrivate
 *
 * @brief  Private implementation for AddRoleToDBClusterRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AddRoleToDBClusterRequestPrivate object.
 *
 * @param  action  RDS action being performed.
 * @param  q       Pointer to this object's public AddRoleToDBClusterRequest instance.
 */
AddRoleToDBClusterRequestPrivate::AddRoleToDBClusterRequestPrivate(
    const RDSRequest::Action action, AddRoleToDBClusterRequest * const q)
    : AddRoleToDBClusterPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AddRoleToDBClusterRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AddRoleToDBClusterRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AddRoleToDBClusterRequest instance.
 */
AddRoleToDBClusterRequestPrivate::AddRoleToDBClusterRequestPrivate(
    const AddRoleToDBClusterRequestPrivate &other, AddRoleToDBClusterRequest * const q)
    : AddRoleToDBClusterPrivate(other, q)
{

}

} // namespace RDS
} // namespace QtAws
