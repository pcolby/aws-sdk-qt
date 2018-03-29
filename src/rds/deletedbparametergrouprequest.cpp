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

#include "deletedbparametergrouprequest.h"
#include "deletedbparametergrouprequest_p.h"
#include "deletedbparametergroupresponse.h"
#include "rdsrequest_p.h"

namespace QtAws {
namespace RDS {

/**
 * @class  DeleteDBParameterGroupRequest
 *
 * @brief  Implements RDS DeleteDBParameterGroup requests.
 *
 * @see    RDSClient::deleteDBParameterGroup
 */

/**
 * @brief  Constructs a new DeleteDBParameterGroupRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteDBParameterGroupRequest::DeleteDBParameterGroupRequest(const DeleteDBParameterGroupRequest &other)
    : RDSRequest(new DeleteDBParameterGroupRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteDBParameterGroupRequest object.
 */
DeleteDBParameterGroupRequest::DeleteDBParameterGroupRequest()
    : RDSRequest(new DeleteDBParameterGroupRequestPrivate(RDSRequest::DeleteDBParameterGroupAction, this))
{

}

bool DeleteDBParameterGroupRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteDBParameterGroupResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteDBParameterGroupResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  RDSClient::send
 */
AwsAbstractResponse * DeleteDBParameterGroupRequest::response(QNetworkReply * const reply) const
{
    return new DeleteDBParameterGroupResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteDBParameterGroupRequestPrivate
 *
 * @brief  Private implementation for DeleteDBParameterGroupRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteDBParameterGroupRequestPrivate object.
 *
 * @param  action  RDS action being performed.
 * @param  q       Pointer to this object's public DeleteDBParameterGroupRequest instance.
 */
DeleteDBParameterGroupRequestPrivate::DeleteDBParameterGroupRequestPrivate(
    const RDSRequest::Action action, DeleteDBParameterGroupRequest * const q)
    : DeleteDBParameterGroupPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteDBParameterGroupRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteDBParameterGroupRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteDBParameterGroupRequest instance.
 */
DeleteDBParameterGroupRequestPrivate::DeleteDBParameterGroupRequestPrivate(
    const DeleteDBParameterGroupRequestPrivate &other, DeleteDBParameterGroupRequest * const q)
    : DeleteDBParameterGroupPrivate(other, q)
{

}

} // namespace RDS
} // namespace QtAws
