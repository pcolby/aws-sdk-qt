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

#include "copydbclusterparametergrouprequest.h"
#include "copydbclusterparametergrouprequest_p.h"
#include "copydbclusterparametergroupresponse.h"
#include "rdsrequest_p.h"

namespace QtAws {
namespace RDS {

/**
 * @class  CopyDBClusterParameterGroupRequest
 *
 * @brief  Implements RDS CopyDBClusterParameterGroup requests.
 *
 * @see    RDSClient::copyDBClusterParameterGroup
 */

/**
 * @brief  Constructs a new CopyDBClusterParameterGroupRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CopyDBClusterParameterGroupRequest::CopyDBClusterParameterGroupRequest(const CopyDBClusterParameterGroupRequest &other)
    : RDSRequest(new CopyDBClusterParameterGroupRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CopyDBClusterParameterGroupRequest object.
 */
CopyDBClusterParameterGroupRequest::CopyDBClusterParameterGroupRequest()
    : RDSRequest(new CopyDBClusterParameterGroupRequestPrivate(RDSRequest::CopyDBClusterParameterGroupAction, this))
{

}

bool CopyDBClusterParameterGroupRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CopyDBClusterParameterGroupResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CopyDBClusterParameterGroupResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  RDSClient::send
 */
QtAws::Core::AwsAbstractResponse * CopyDBClusterParameterGroupRequest::response(QNetworkReply * const reply) const
{
    return new CopyDBClusterParameterGroupResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CopyDBClusterParameterGroupRequestPrivate
 *
 * @brief  Private implementation for CopyDBClusterParameterGroupRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CopyDBClusterParameterGroupRequestPrivate object.
 *
 * @param  action  RDS action being performed.
 * @param  q       Pointer to this object's public CopyDBClusterParameterGroupRequest instance.
 */
CopyDBClusterParameterGroupRequestPrivate::CopyDBClusterParameterGroupRequestPrivate(
    const RDSRequest::Action action, CopyDBClusterParameterGroupRequest * const q)
    : CopyDBClusterParameterGroupPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CopyDBClusterParameterGroupRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CopyDBClusterParameterGroupRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CopyDBClusterParameterGroupRequest instance.
 */
CopyDBClusterParameterGroupRequestPrivate::CopyDBClusterParameterGroupRequestPrivate(
    const CopyDBClusterParameterGroupRequestPrivate &other, CopyDBClusterParameterGroupRequest * const q)
    : CopyDBClusterParameterGroupPrivate(other, q)
{

}

} // namespace RDS
} // namespace QtAws
