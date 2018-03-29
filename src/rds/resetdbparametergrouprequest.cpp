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

#include "resetdbparametergrouprequest.h"
#include "resetdbparametergrouprequest_p.h"
#include "resetdbparametergroupresponse.h"
#include "rdsrequest_p.h"

namespace QtAws {
namespace RDS {

/**
 * @class  ResetDBParameterGroupRequest
 *
 * @brief  Implements RDS ResetDBParameterGroup requests.
 *
 * @see    RDSClient::resetDBParameterGroup
 */

/**
 * @brief  Constructs a new ResetDBParameterGroupRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ResetDBParameterGroupRequest::ResetDBParameterGroupRequest(const ResetDBParameterGroupRequest &other)
    : RDSRequest(new ResetDBParameterGroupRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ResetDBParameterGroupRequest object.
 */
ResetDBParameterGroupRequest::ResetDBParameterGroupRequest()
    : RDSRequest(new ResetDBParameterGroupRequestPrivate(RDSRequest::ResetDBParameterGroupAction, this))
{

}

bool ResetDBParameterGroupRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ResetDBParameterGroupResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ResetDBParameterGroupResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  RDSClient::send
 */
QtAws::Core::AwsAbstractResponse * ResetDBParameterGroupRequest::response(QNetworkReply * const reply) const
{
    return new ResetDBParameterGroupResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ResetDBParameterGroupRequestPrivate
 *
 * @brief  Private implementation for ResetDBParameterGroupRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ResetDBParameterGroupRequestPrivate object.
 *
 * @param  action  RDS action being performed.
 * @param  q       Pointer to this object's public ResetDBParameterGroupRequest instance.
 */
ResetDBParameterGroupRequestPrivate::ResetDBParameterGroupRequestPrivate(
    const RDSRequest::Action action, ResetDBParameterGroupRequest * const q)
    : ResetDBParameterGroupPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ResetDBParameterGroupRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ResetDBParameterGroupRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ResetDBParameterGroupRequest instance.
 */
ResetDBParameterGroupRequestPrivate::ResetDBParameterGroupRequestPrivate(
    const ResetDBParameterGroupRequestPrivate &other, ResetDBParameterGroupRequest * const q)
    : ResetDBParameterGroupPrivate(other, q)
{

}

} // namespace RDS
} // namespace QtAws
