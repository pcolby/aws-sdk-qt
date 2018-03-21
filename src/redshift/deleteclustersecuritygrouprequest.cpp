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

#include "deleteclustersecuritygrouprequest.h"
#include "deleteclustersecuritygrouprequest_p.h"
#include "deleteclustersecuritygroupresponse.h"
#include "redshiftrequest_p.h"

namespace AWS {
namespace Redshift {

/**
 * @class  DeleteClusterSecurityGroupRequest
 *
 * @brief  Implements Redshift DeleteClusterSecurityGroup requests.
 *
 * @see    RedshiftClient::deleteClusterSecurityGroup
 */

/**
 * @brief  Constructs a new DeleteClusterSecurityGroupResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteClusterSecurityGroupResponse::DeleteClusterSecurityGroupResponse(

/**
 * @brief  Constructs a new DeleteClusterSecurityGroupRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteClusterSecurityGroupRequest::DeleteClusterSecurityGroupRequest(const DeleteClusterSecurityGroupRequest &other)
    : RedshiftRequest(new DeleteClusterSecurityGroupRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteClusterSecurityGroupRequest object.
 */
DeleteClusterSecurityGroupRequest::DeleteClusterSecurityGroupRequest()
    : RedshiftRequest(new DeleteClusterSecurityGroupRequestPrivate(RedshiftRequest::DeleteClusterSecurityGroupAction, this))
{

}

bool DeleteClusterSecurityGroupRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteClusterSecurityGroupResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteClusterSecurityGroupResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  RedshiftClient::send
 */
AwsAbstractResponse * DeleteClusterSecurityGroupRequest::response(QNetworkReply * const reply) const
{
    return new DeleteClusterSecurityGroupResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteClusterSecurityGroupRequestPrivate
 *
 * @brief  Private implementation for DeleteClusterSecurityGroupRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteClusterSecurityGroupRequestPrivate object.
 *
 * @param  action  Redshift action being performed.
 * @param  q       Pointer to this object's public DeleteClusterSecurityGroupRequest instance.
 */
DeleteClusterSecurityGroupRequestPrivate::DeleteClusterSecurityGroupRequestPrivate(
    const RedshiftRequest::Action action, DeleteClusterSecurityGroupRequest * const q)
    : DeleteClusterSecurityGroupPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteClusterSecurityGroupRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteClusterSecurityGroupRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteClusterSecurityGroupRequest instance.
 */
DeleteClusterSecurityGroupRequestPrivate::DeleteClusterSecurityGroupRequestPrivate(
    const DeleteClusterSecurityGroupRequestPrivate &other, DeleteClusterSecurityGroupRequest * const q)
    : DeleteClusterSecurityGroupPrivate(other, q)
{

}
