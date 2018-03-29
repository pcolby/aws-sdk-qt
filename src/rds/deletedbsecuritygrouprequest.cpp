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

#include "deletedbsecuritygrouprequest.h"
#include "deletedbsecuritygrouprequest_p.h"
#include "deletedbsecuritygroupresponse.h"
#include "rdsrequest_p.h"

namespace QtAws {
namespace RDS {

/**
 * @class  DeleteDBSecurityGroupRequest
 *
 * @brief  Implements RDS DeleteDBSecurityGroup requests.
 *
 * @see    RDSClient::deleteDBSecurityGroup
 */

/**
 * @brief  Constructs a new DeleteDBSecurityGroupRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteDBSecurityGroupRequest::DeleteDBSecurityGroupRequest(const DeleteDBSecurityGroupRequest &other)
    : RDSRequest(new DeleteDBSecurityGroupRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteDBSecurityGroupRequest object.
 */
DeleteDBSecurityGroupRequest::DeleteDBSecurityGroupRequest()
    : RDSRequest(new DeleteDBSecurityGroupRequestPrivate(RDSRequest::DeleteDBSecurityGroupAction, this))
{

}

bool DeleteDBSecurityGroupRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteDBSecurityGroupResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteDBSecurityGroupResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  RDSClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteDBSecurityGroupRequest::response(QNetworkReply * const reply) const
{
    return new DeleteDBSecurityGroupResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteDBSecurityGroupRequestPrivate
 *
 * @brief  Private implementation for DeleteDBSecurityGroupRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteDBSecurityGroupRequestPrivate object.
 *
 * @param  action  RDS action being performed.
 * @param  q       Pointer to this object's public DeleteDBSecurityGroupRequest instance.
 */
DeleteDBSecurityGroupRequestPrivate::DeleteDBSecurityGroupRequestPrivate(
    const RDSRequest::Action action, DeleteDBSecurityGroupRequest * const q)
    : RDSRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteDBSecurityGroupRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteDBSecurityGroupRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteDBSecurityGroupRequest instance.
 */
DeleteDBSecurityGroupRequestPrivate::DeleteDBSecurityGroupRequestPrivate(
    const DeleteDBSecurityGroupRequestPrivate &other, DeleteDBSecurityGroupRequest * const q)
    : RDSRequestPrivate(other, q)
{

}

} // namespace RDS
} // namespace QtAws
