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

#include "registerpatchbaselineforpatchgrouprequest.h"
#include "registerpatchbaselineforpatchgrouprequest_p.h"
#include "registerpatchbaselineforpatchgroupresponse.h"
#include "ssmrequest_p.h"

namespace AWS {
namespace SSM {

/**
 * @class  RegisterPatchBaselineForPatchGroupRequest
 *
 * @brief  Implements SSM RegisterPatchBaselineForPatchGroup requests.
 *
 * @see    SSMClient::registerPatchBaselineForPatchGroup
 */

/**
 * @brief  Constructs a new RegisterPatchBaselineForPatchGroupResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RegisterPatchBaselineForPatchGroupResponse::RegisterPatchBaselineForPatchGroupResponse(

/**
 * @brief  Constructs a new RegisterPatchBaselineForPatchGroupRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RegisterPatchBaselineForPatchGroupRequest::RegisterPatchBaselineForPatchGroupRequest(const RegisterPatchBaselineForPatchGroupRequest &other)
    : SSMRequest(new RegisterPatchBaselineForPatchGroupRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new RegisterPatchBaselineForPatchGroupRequest object.
 */
RegisterPatchBaselineForPatchGroupRequest::RegisterPatchBaselineForPatchGroupRequest()
    : SSMRequest(new RegisterPatchBaselineForPatchGroupRequestPrivate(SSMRequest::RegisterPatchBaselineForPatchGroupAction, this))
{

}

bool RegisterPatchBaselineForPatchGroupRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an RegisterPatchBaselineForPatchGroupResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RegisterPatchBaselineForPatchGroupResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SSMClient::send
 */
AwsAbstractResponse * RegisterPatchBaselineForPatchGroupRequest::response(QNetworkReply * const reply) const
{
    return new RegisterPatchBaselineForPatchGroupResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  RegisterPatchBaselineForPatchGroupRequestPrivate
 *
 * @brief  Private implementation for RegisterPatchBaselineForPatchGroupRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RegisterPatchBaselineForPatchGroupRequestPrivate object.
 *
 * @param  action  SSM action being performed.
 * @param  q       Pointer to this object's public RegisterPatchBaselineForPatchGroupRequest instance.
 */
RegisterPatchBaselineForPatchGroupRequestPrivate::RegisterPatchBaselineForPatchGroupRequestPrivate(
    const SSMRequest::Action action, RegisterPatchBaselineForPatchGroupRequest * const q)
    : RegisterPatchBaselineForPatchGroupPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new RegisterPatchBaselineForPatchGroupRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RegisterPatchBaselineForPatchGroupRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RegisterPatchBaselineForPatchGroupRequest instance.
 */
RegisterPatchBaselineForPatchGroupRequestPrivate::RegisterPatchBaselineForPatchGroupRequestPrivate(
    const RegisterPatchBaselineForPatchGroupRequestPrivate &other, RegisterPatchBaselineForPatchGroupRequest * const q)
    : RegisterPatchBaselineForPatchGroupPrivate(other, q)
{

}

} // namespace SSM
} // namespace AWS
