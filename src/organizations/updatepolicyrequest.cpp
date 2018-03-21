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

#include "updatepolicyrequest.h"
#include "updatepolicyrequest_p.h"
#include "updatepolicyresponse.h"
#include "organizationsrequest_p.h"

namespace AWS {
namespace Organizations {

/**
 * @class  UpdatePolicyRequest
 *
 * @brief  Implements Organizations UpdatePolicy requests.
 *
 * @see    OrganizationsClient::updatePolicy
 */

/**
 * @brief  Constructs a new UpdatePolicyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdatePolicyResponse::UpdatePolicyResponse(

/**
 * @brief  Constructs a new UpdatePolicyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdatePolicyRequest::UpdatePolicyRequest(const UpdatePolicyRequest &other)
    : OrganizationsRequest(new UpdatePolicyRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdatePolicyRequest object.
 */
UpdatePolicyRequest::UpdatePolicyRequest()
    : OrganizationsRequest(new UpdatePolicyRequestPrivate(OrganizationsRequest::UpdatePolicyAction, this))
{

}

bool UpdatePolicyRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdatePolicyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdatePolicyResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  OrganizationsClient::send
 */
AwsAbstractResponse * UpdatePolicyRequest::response(QNetworkReply * const reply) const
{
    return new UpdatePolicyResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdatePolicyRequestPrivate
 *
 * @brief  Private implementation for UpdatePolicyRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdatePolicyRequestPrivate object.
 *
 * @param  action  Organizations action being performed.
 * @param  q       Pointer to this object's public UpdatePolicyRequest instance.
 */
UpdatePolicyRequestPrivate::UpdatePolicyRequestPrivate(
    const OrganizationsRequest::Action action, UpdatePolicyRequest * const q)
    : UpdatePolicyPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdatePolicyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdatePolicyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdatePolicyRequest instance.
 */
UpdatePolicyRequestPrivate::UpdatePolicyRequestPrivate(
    const UpdatePolicyRequestPrivate &other, UpdatePolicyRequest * const q)
    : UpdatePolicyPrivate(other, q)
{

}

} // namespace Organizations
} // namespace AWS
