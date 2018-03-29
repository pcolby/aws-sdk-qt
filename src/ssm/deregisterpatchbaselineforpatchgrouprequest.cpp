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

#include "deregisterpatchbaselineforpatchgrouprequest.h"
#include "deregisterpatchbaselineforpatchgrouprequest_p.h"
#include "deregisterpatchbaselineforpatchgroupresponse.h"
#include "ssmrequest_p.h"

namespace QtAws {
namespace SSM {

/**
 * @class  DeregisterPatchBaselineForPatchGroupRequest
 *
 * @brief  Implements SSM DeregisterPatchBaselineForPatchGroup requests.
 *
 * @see    SSMClient::deregisterPatchBaselineForPatchGroup
 */

/**
 * @brief  Constructs a new DeregisterPatchBaselineForPatchGroupRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeregisterPatchBaselineForPatchGroupRequest::DeregisterPatchBaselineForPatchGroupRequest(const DeregisterPatchBaselineForPatchGroupRequest &other)
    : SSMRequest(new DeregisterPatchBaselineForPatchGroupRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeregisterPatchBaselineForPatchGroupRequest object.
 */
DeregisterPatchBaselineForPatchGroupRequest::DeregisterPatchBaselineForPatchGroupRequest()
    : SSMRequest(new DeregisterPatchBaselineForPatchGroupRequestPrivate(SSMRequest::DeregisterPatchBaselineForPatchGroupAction, this))
{

}

bool DeregisterPatchBaselineForPatchGroupRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeregisterPatchBaselineForPatchGroupResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeregisterPatchBaselineForPatchGroupResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SSMClient::send
 */
QtAws::Core::AwsAbstractResponse * DeregisterPatchBaselineForPatchGroupRequest::response(QNetworkReply * const reply) const
{
    return new DeregisterPatchBaselineForPatchGroupResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeregisterPatchBaselineForPatchGroupRequestPrivate
 *
 * @brief  Private implementation for DeregisterPatchBaselineForPatchGroupRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeregisterPatchBaselineForPatchGroupRequestPrivate object.
 *
 * @param  action  SSM action being performed.
 * @param  q       Pointer to this object's public DeregisterPatchBaselineForPatchGroupRequest instance.
 */
DeregisterPatchBaselineForPatchGroupRequestPrivate::DeregisterPatchBaselineForPatchGroupRequestPrivate(
    const SSMRequest::Action action, DeregisterPatchBaselineForPatchGroupRequest * const q)
    : DeregisterPatchBaselineForPatchGroupPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeregisterPatchBaselineForPatchGroupRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeregisterPatchBaselineForPatchGroupRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeregisterPatchBaselineForPatchGroupRequest instance.
 */
DeregisterPatchBaselineForPatchGroupRequestPrivate::DeregisterPatchBaselineForPatchGroupRequestPrivate(
    const DeregisterPatchBaselineForPatchGroupRequestPrivate &other, DeregisterPatchBaselineForPatchGroupRequest * const q)
    : DeregisterPatchBaselineForPatchGroupPrivate(other, q)
{

}

} // namespace SSM
} // namespace QtAws
