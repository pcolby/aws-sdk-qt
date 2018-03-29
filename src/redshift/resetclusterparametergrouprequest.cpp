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

#include "resetclusterparametergrouprequest.h"
#include "resetclusterparametergrouprequest_p.h"
#include "resetclusterparametergroupresponse.h"
#include "redshiftrequest_p.h"

namespace AWS {
namespace Redshift {

/**
 * @class  ResetClusterParameterGroupRequest
 *
 * @brief  Implements Redshift ResetClusterParameterGroup requests.
 *
 * @see    RedshiftClient::resetClusterParameterGroup
 */

/**
 * @brief  Constructs a new ResetClusterParameterGroupRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ResetClusterParameterGroupRequest::ResetClusterParameterGroupRequest(const ResetClusterParameterGroupRequest &other)
    : RedshiftRequest(new ResetClusterParameterGroupRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ResetClusterParameterGroupRequest object.
 */
ResetClusterParameterGroupRequest::ResetClusterParameterGroupRequest()
    : RedshiftRequest(new ResetClusterParameterGroupRequestPrivate(RedshiftRequest::ResetClusterParameterGroupAction, this))
{

}

bool ResetClusterParameterGroupRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ResetClusterParameterGroupResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ResetClusterParameterGroupResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  RedshiftClient::send
 */
AwsAbstractResponse * ResetClusterParameterGroupRequest::response(QNetworkReply * const reply) const
{
    return new ResetClusterParameterGroupResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ResetClusterParameterGroupRequestPrivate
 *
 * @brief  Private implementation for ResetClusterParameterGroupRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ResetClusterParameterGroupRequestPrivate object.
 *
 * @param  action  Redshift action being performed.
 * @param  q       Pointer to this object's public ResetClusterParameterGroupRequest instance.
 */
ResetClusterParameterGroupRequestPrivate::ResetClusterParameterGroupRequestPrivate(
    const RedshiftRequest::Action action, ResetClusterParameterGroupRequest * const q)
    : ResetClusterParameterGroupPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ResetClusterParameterGroupRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ResetClusterParameterGroupRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ResetClusterParameterGroupRequest instance.
 */
ResetClusterParameterGroupRequestPrivate::ResetClusterParameterGroupRequestPrivate(
    const ResetClusterParameterGroupRequestPrivate &other, ResetClusterParameterGroupRequest * const q)
    : ResetClusterParameterGroupPrivate(other, q)
{

}

} // namespace Redshift
} // namespace AWS
