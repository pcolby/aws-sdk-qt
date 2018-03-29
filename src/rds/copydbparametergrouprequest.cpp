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

#include "copydbparametergrouprequest.h"
#include "copydbparametergrouprequest_p.h"
#include "copydbparametergroupresponse.h"
#include "rdsrequest_p.h"

namespace QtAws {
namespace RDS {

/**
 * @class  CopyDBParameterGroupRequest
 *
 * @brief  Implements RDS CopyDBParameterGroup requests.
 *
 * @see    RDSClient::copyDBParameterGroup
 */

/**
 * @brief  Constructs a new CopyDBParameterGroupRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CopyDBParameterGroupRequest::CopyDBParameterGroupRequest(const CopyDBParameterGroupRequest &other)
    : RDSRequest(new CopyDBParameterGroupRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CopyDBParameterGroupRequest object.
 */
CopyDBParameterGroupRequest::CopyDBParameterGroupRequest()
    : RDSRequest(new CopyDBParameterGroupRequestPrivate(RDSRequest::CopyDBParameterGroupAction, this))
{

}

bool CopyDBParameterGroupRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CopyDBParameterGroupResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CopyDBParameterGroupResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  RDSClient::send
 */
QtAws::Core::AwsAbstractResponse * CopyDBParameterGroupRequest::response(QNetworkReply * const reply) const
{
    return new CopyDBParameterGroupResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CopyDBParameterGroupRequestPrivate
 *
 * @brief  Private implementation for CopyDBParameterGroupRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CopyDBParameterGroupRequestPrivate object.
 *
 * @param  action  RDS action being performed.
 * @param  q       Pointer to this object's public CopyDBParameterGroupRequest instance.
 */
CopyDBParameterGroupRequestPrivate::CopyDBParameterGroupRequestPrivate(
    const RDSRequest::Action action, CopyDBParameterGroupRequest * const q)
    : CopyDBParameterGroupPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CopyDBParameterGroupRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CopyDBParameterGroupRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CopyDBParameterGroupRequest instance.
 */
CopyDBParameterGroupRequestPrivate::CopyDBParameterGroupRequestPrivate(
    const CopyDBParameterGroupRequestPrivate &other, CopyDBParameterGroupRequest * const q)
    : CopyDBParameterGroupPrivate(other, q)
{

}

} // namespace RDS
} // namespace QtAws
