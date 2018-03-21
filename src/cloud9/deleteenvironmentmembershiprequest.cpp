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

#include "deleteenvironmentmembershiprequest.h"
#include "deleteenvironmentmembershiprequest_p.h"
#include "deleteenvironmentmembershipresponse.h"
#include "cloud9request_p.h"

namespace AWS {
namespace Cloud9 {

/**
 * @class  DeleteEnvironmentMembershipRequest
 *
 * @brief  Implements Cloud9 DeleteEnvironmentMembership requests.
 *
 * @see    Cloud9Client::deleteEnvironmentMembership
 */

/**
 * @brief  Constructs a new DeleteEnvironmentMembershipRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteEnvironmentMembershipRequest::DeleteEnvironmentMembershipRequest(const DeleteEnvironmentMembershipRequest &other)
    : Cloud9Request(new DeleteEnvironmentMembershipRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteEnvironmentMembershipRequest object.
 */
DeleteEnvironmentMembershipRequest::DeleteEnvironmentMembershipRequest()
    : Cloud9Request(new DeleteEnvironmentMembershipRequestPrivate(Cloud9Request::DeleteEnvironmentMembershipAction, this))
{

}

bool DeleteEnvironmentMembershipRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteEnvironmentMembershipResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteEnvironmentMembershipResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  Cloud9Client::send
 */
AwsAbstractResponse * DeleteEnvironmentMembershipRequest::response(QNetworkReply * const reply) const
{
    return new DeleteEnvironmentMembershipResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteEnvironmentMembershipRequestPrivate
 *
 * @brief  Private implementation for DeleteEnvironmentMembershipRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteEnvironmentMembershipRequestPrivate object.
 *
 * @param  action  Cloud9 action being performed.
 * @param  q       Pointer to this object's public DeleteEnvironmentMembershipRequest instance.
 */
DeleteEnvironmentMembershipRequestPrivate::DeleteEnvironmentMembershipRequestPrivate(
    const Cloud9Request::Action action, DeleteEnvironmentMembershipRequest * const q)
    : DeleteEnvironmentMembershipPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteEnvironmentMembershipRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteEnvironmentMembershipRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteEnvironmentMembershipRequest instance.
 */
DeleteEnvironmentMembershipRequestPrivate::DeleteEnvironmentMembershipRequestPrivate(
    const DeleteEnvironmentMembershipRequestPrivate &other, DeleteEnvironmentMembershipRequest * const q)
    : DeleteEnvironmentMembershipPrivate(other, q)
{

}

} // namespace Cloud9
} // namespace AWS
