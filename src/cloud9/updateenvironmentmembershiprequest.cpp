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

#include "updateenvironmentmembershiprequest.h"
#include "updateenvironmentmembershiprequest_p.h"
#include "updateenvironmentmembershipresponse.h"
#include "cloud9request_p.h"

namespace QtAws {
namespace Cloud9 {

/**
 * @class  UpdateEnvironmentMembershipRequest
 *
 * @brief  Implements Cloud9 UpdateEnvironmentMembership requests.
 *
 * @see    Cloud9Client::updateEnvironmentMembership
 */

/**
 * @brief  Constructs a new UpdateEnvironmentMembershipRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateEnvironmentMembershipRequest::UpdateEnvironmentMembershipRequest(const UpdateEnvironmentMembershipRequest &other)
    : Cloud9Request(new UpdateEnvironmentMembershipRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateEnvironmentMembershipRequest object.
 */
UpdateEnvironmentMembershipRequest::UpdateEnvironmentMembershipRequest()
    : Cloud9Request(new UpdateEnvironmentMembershipRequestPrivate(Cloud9Request::UpdateEnvironmentMembershipAction, this))
{

}

bool UpdateEnvironmentMembershipRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateEnvironmentMembershipResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateEnvironmentMembershipResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  Cloud9Client::send
 */
AwsAbstractResponse * UpdateEnvironmentMembershipRequest::response(QNetworkReply * const reply) const
{
    return new UpdateEnvironmentMembershipResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateEnvironmentMembershipRequestPrivate
 *
 * @brief  Private implementation for UpdateEnvironmentMembershipRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateEnvironmentMembershipRequestPrivate object.
 *
 * @param  action  Cloud9 action being performed.
 * @param  q       Pointer to this object's public UpdateEnvironmentMembershipRequest instance.
 */
UpdateEnvironmentMembershipRequestPrivate::UpdateEnvironmentMembershipRequestPrivate(
    const Cloud9Request::Action action, UpdateEnvironmentMembershipRequest * const q)
    : UpdateEnvironmentMembershipPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateEnvironmentMembershipRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateEnvironmentMembershipRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateEnvironmentMembershipRequest instance.
 */
UpdateEnvironmentMembershipRequestPrivate::UpdateEnvironmentMembershipRequestPrivate(
    const UpdateEnvironmentMembershipRequestPrivate &other, UpdateEnvironmentMembershipRequest * const q)
    : UpdateEnvironmentMembershipPrivate(other, q)
{

}

} // namespace Cloud9
} // namespace QtAws
