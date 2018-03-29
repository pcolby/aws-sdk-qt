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

#include "deleteoptiongrouprequest.h"
#include "deleteoptiongrouprequest_p.h"
#include "deleteoptiongroupresponse.h"
#include "rdsrequest_p.h"

namespace QtAws {
namespace RDS {

/**
 * @class  DeleteOptionGroupRequest
 *
 * @brief  Implements RDS DeleteOptionGroup requests.
 *
 * @see    RDSClient::deleteOptionGroup
 */

/**
 * @brief  Constructs a new DeleteOptionGroupRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteOptionGroupRequest::DeleteOptionGroupRequest(const DeleteOptionGroupRequest &other)
    : RDSRequest(new DeleteOptionGroupRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteOptionGroupRequest object.
 */
DeleteOptionGroupRequest::DeleteOptionGroupRequest()
    : RDSRequest(new DeleteOptionGroupRequestPrivate(RDSRequest::DeleteOptionGroupAction, this))
{

}

bool DeleteOptionGroupRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteOptionGroupResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteOptionGroupResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  RDSClient::send
 */
AwsAbstractResponse * DeleteOptionGroupRequest::response(QNetworkReply * const reply) const
{
    return new DeleteOptionGroupResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteOptionGroupRequestPrivate
 *
 * @brief  Private implementation for DeleteOptionGroupRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteOptionGroupRequestPrivate object.
 *
 * @param  action  RDS action being performed.
 * @param  q       Pointer to this object's public DeleteOptionGroupRequest instance.
 */
DeleteOptionGroupRequestPrivate::DeleteOptionGroupRequestPrivate(
    const RDSRequest::Action action, DeleteOptionGroupRequest * const q)
    : DeleteOptionGroupPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteOptionGroupRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteOptionGroupRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteOptionGroupRequest instance.
 */
DeleteOptionGroupRequestPrivate::DeleteOptionGroupRequestPrivate(
    const DeleteOptionGroupRequestPrivate &other, DeleteOptionGroupRequest * const q)
    : DeleteOptionGroupPrivate(other, q)
{

}

} // namespace RDS
} // namespace QtAws
