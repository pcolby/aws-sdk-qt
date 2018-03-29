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

#include "resetdbclusterparametergrouprequest.h"
#include "resetdbclusterparametergrouprequest_p.h"
#include "resetdbclusterparametergroupresponse.h"
#include "rdsrequest_p.h"

namespace QtAws {
namespace RDS {

/**
 * @class  ResetDBClusterParameterGroupRequest
 *
 * @brief  Implements RDS ResetDBClusterParameterGroup requests.
 *
 * @see    RDSClient::resetDBClusterParameterGroup
 */

/**
 * @brief  Constructs a new ResetDBClusterParameterGroupRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ResetDBClusterParameterGroupRequest::ResetDBClusterParameterGroupRequest(const ResetDBClusterParameterGroupRequest &other)
    : RDSRequest(new ResetDBClusterParameterGroupRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ResetDBClusterParameterGroupRequest object.
 */
ResetDBClusterParameterGroupRequest::ResetDBClusterParameterGroupRequest()
    : RDSRequest(new ResetDBClusterParameterGroupRequestPrivate(RDSRequest::ResetDBClusterParameterGroupAction, this))
{

}

bool ResetDBClusterParameterGroupRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ResetDBClusterParameterGroupResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ResetDBClusterParameterGroupResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  RDSClient::send
 */
QtAws::Core::AwsAbstractResponse * ResetDBClusterParameterGroupRequest::response(QNetworkReply * const reply) const
{
    return new ResetDBClusterParameterGroupResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ResetDBClusterParameterGroupRequestPrivate
 *
 * @brief  Private implementation for ResetDBClusterParameterGroupRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ResetDBClusterParameterGroupRequestPrivate object.
 *
 * @param  action  RDS action being performed.
 * @param  q       Pointer to this object's public ResetDBClusterParameterGroupRequest instance.
 */
ResetDBClusterParameterGroupRequestPrivate::ResetDBClusterParameterGroupRequestPrivate(
    const RDSRequest::Action action, ResetDBClusterParameterGroupRequest * const q)
    : RDSRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ResetDBClusterParameterGroupRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ResetDBClusterParameterGroupRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ResetDBClusterParameterGroupRequest instance.
 */
ResetDBClusterParameterGroupRequestPrivate::ResetDBClusterParameterGroupRequestPrivate(
    const ResetDBClusterParameterGroupRequestPrivate &other, ResetDBClusterParameterGroupRequest * const q)
    : RDSRequestPrivate(other, q)
{

}

} // namespace RDS
} // namespace QtAws
