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

#include "deleteclustersubnetgrouprequest.h"
#include "deleteclustersubnetgrouprequest_p.h"
#include "deleteclustersubnetgroupresponse.h"
#include "redshiftrequest_p.h"

namespace AWS {
namespace Redshift {

/**
 * @class  DeleteClusterSubnetGroupRequest
 *
 * @brief  Implements Redshift DeleteClusterSubnetGroup requests.
 *
 * @see    RedshiftClient::deleteClusterSubnetGroup
 */

/**
 * @brief  Constructs a new DeleteClusterSubnetGroupResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteClusterSubnetGroupResponse::DeleteClusterSubnetGroupResponse(

/**
 * @brief  Constructs a new DeleteClusterSubnetGroupRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteClusterSubnetGroupRequest::DeleteClusterSubnetGroupRequest(const DeleteClusterSubnetGroupRequest &other)
    : RedshiftRequest(new DeleteClusterSubnetGroupRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteClusterSubnetGroupRequest object.
 */
DeleteClusterSubnetGroupRequest::DeleteClusterSubnetGroupRequest()
    : RedshiftRequest(new DeleteClusterSubnetGroupRequestPrivate(RedshiftRequest::DeleteClusterSubnetGroupAction, this))
{

}

bool DeleteClusterSubnetGroupRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteClusterSubnetGroupResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteClusterSubnetGroupResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  RedshiftClient::send
 */
AwsAbstractResponse * DeleteClusterSubnetGroupRequest::response(QNetworkReply * const reply) const
{
    return new DeleteClusterSubnetGroupResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteClusterSubnetGroupRequestPrivate
 *
 * @brief  Private implementation for DeleteClusterSubnetGroupRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteClusterSubnetGroupRequestPrivate object.
 *
 * @param  action  Redshift action being performed.
 * @param  q       Pointer to this object's public DeleteClusterSubnetGroupRequest instance.
 */
DeleteClusterSubnetGroupRequestPrivate::DeleteClusterSubnetGroupRequestPrivate(
    const RedshiftRequest::Action action, DeleteClusterSubnetGroupRequest * const q)
    : DeleteClusterSubnetGroupPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteClusterSubnetGroupRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteClusterSubnetGroupRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteClusterSubnetGroupRequest instance.
 */
DeleteClusterSubnetGroupRequestPrivate::DeleteClusterSubnetGroupRequestPrivate(
    const DeleteClusterSubnetGroupRequestPrivate &other, DeleteClusterSubnetGroupRequest * const q)
    : DeleteClusterSubnetGroupPrivate(other, q)
{

}

} // namespace Redshift
} // namespace AWS
