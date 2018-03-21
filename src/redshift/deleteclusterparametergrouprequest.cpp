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

#include "deleteclusterparametergrouprequest.h"
#include "deleteclusterparametergrouprequest_p.h"
#include "deleteclusterparametergroupresponse.h"
#include "redshiftrequest_p.h"

namespace AWS {
namespace Redshift {

/**
 * @class  DeleteClusterParameterGroupRequest
 *
 * @brief  Implements Redshift DeleteClusterParameterGroup requests.
 *
 * @see    RedshiftClient::deleteClusterParameterGroup
 */

/**
 * @brief  Constructs a new DeleteClusterParameterGroupResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteClusterParameterGroupResponse::DeleteClusterParameterGroupResponse(

/**
 * @brief  Constructs a new DeleteClusterParameterGroupRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteClusterParameterGroupRequest::DeleteClusterParameterGroupRequest(const DeleteClusterParameterGroupRequest &other)
    : RedshiftRequest(new DeleteClusterParameterGroupRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteClusterParameterGroupRequest object.
 */
DeleteClusterParameterGroupRequest::DeleteClusterParameterGroupRequest()
    : RedshiftRequest(new DeleteClusterParameterGroupRequestPrivate(RedshiftRequest::DeleteClusterParameterGroupAction, this))
{

}

bool DeleteClusterParameterGroupRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteClusterParameterGroupResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteClusterParameterGroupResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  RedshiftClient::send
 */
AwsAbstractResponse * DeleteClusterParameterGroupRequest::response(QNetworkReply * const reply) const
{
    return new DeleteClusterParameterGroupResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteClusterParameterGroupRequestPrivate
 *
 * @brief  Private implementation for DeleteClusterParameterGroupRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteClusterParameterGroupRequestPrivate object.
 *
 * @param  action  Redshift action being performed.
 * @param  q       Pointer to this object's public DeleteClusterParameterGroupRequest instance.
 */
DeleteClusterParameterGroupRequestPrivate::DeleteClusterParameterGroupRequestPrivate(
    const RedshiftRequest::Action action, DeleteClusterParameterGroupRequest * const q)
    : DeleteClusterParameterGroupPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteClusterParameterGroupRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteClusterParameterGroupRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteClusterParameterGroupRequest instance.
 */
DeleteClusterParameterGroupRequestPrivate::DeleteClusterParameterGroupRequestPrivate(
    const DeleteClusterParameterGroupRequestPrivate &other, DeleteClusterParameterGroupRequest * const q)
    : DeleteClusterParameterGroupPrivate(other, q)
{

}
