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

#include "deletedbclusterparametergrouprequest.h"
#include "deletedbclusterparametergrouprequest_p.h"
#include "deletedbclusterparametergroupresponse.h"
#include "rdsrequest_p.h"

namespace QtAws {
namespace RDS {

/**
 * @class  DeleteDBClusterParameterGroupRequest
 *
 * @brief  Implements RDS DeleteDBClusterParameterGroup requests.
 *
 * @see    RDSClient::deleteDBClusterParameterGroup
 */

/**
 * @brief  Constructs a new DeleteDBClusterParameterGroupRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteDBClusterParameterGroupRequest::DeleteDBClusterParameterGroupRequest(const DeleteDBClusterParameterGroupRequest &other)
    : RDSRequest(new DeleteDBClusterParameterGroupRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteDBClusterParameterGroupRequest object.
 */
DeleteDBClusterParameterGroupRequest::DeleteDBClusterParameterGroupRequest()
    : RDSRequest(new DeleteDBClusterParameterGroupRequestPrivate(RDSRequest::DeleteDBClusterParameterGroupAction, this))
{

}

bool DeleteDBClusterParameterGroupRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteDBClusterParameterGroupResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteDBClusterParameterGroupResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  RDSClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteDBClusterParameterGroupRequest::response(QNetworkReply * const reply) const
{
    return new DeleteDBClusterParameterGroupResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteDBClusterParameterGroupRequestPrivate
 *
 * @brief  Private implementation for DeleteDBClusterParameterGroupRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteDBClusterParameterGroupRequestPrivate object.
 *
 * @param  action  RDS action being performed.
 * @param  q       Pointer to this object's public DeleteDBClusterParameterGroupRequest instance.
 */
DeleteDBClusterParameterGroupRequestPrivate::DeleteDBClusterParameterGroupRequestPrivate(
    const RDSRequest::Action action, DeleteDBClusterParameterGroupRequest * const q)
    : RDSRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteDBClusterParameterGroupRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteDBClusterParameterGroupRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteDBClusterParameterGroupRequest instance.
 */
DeleteDBClusterParameterGroupRequestPrivate::DeleteDBClusterParameterGroupRequestPrivate(
    const DeleteDBClusterParameterGroupRequestPrivate &other, DeleteDBClusterParameterGroupRequest * const q)
    : RDSRequestPrivate(other, q)
{

}

} // namespace RDS
} // namespace QtAws
