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

#include "attachpolicyrequest.h"
#include "attachpolicyrequest_p.h"
#include "attachpolicyresponse.h"
#include "clouddirectoryrequest_p.h"

namespace QtAws {
namespace CloudDirectory {

/**
 * @class  AttachPolicyRequest
 *
 * @brief  Implements CloudDirectory AttachPolicy requests.
 *
 * @see    CloudDirectoryClient::attachPolicy
 */

/**
 * @brief  Constructs a new AttachPolicyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AttachPolicyRequest::AttachPolicyRequest(const AttachPolicyRequest &other)
    : CloudDirectoryRequest(new AttachPolicyRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AttachPolicyRequest object.
 */
AttachPolicyRequest::AttachPolicyRequest()
    : CloudDirectoryRequest(new AttachPolicyRequestPrivate(CloudDirectoryRequest::AttachPolicyAction, this))
{

}

bool AttachPolicyRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AttachPolicyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AttachPolicyResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CloudDirectoryClient::send
 */
QtAws::Core::AwsAbstractResponse * AttachPolicyRequest::response(QNetworkReply * const reply) const
{
    return new AttachPolicyResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AttachPolicyRequestPrivate
 *
 * @brief  Private implementation for AttachPolicyRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AttachPolicyRequestPrivate object.
 *
 * @param  action  CloudDirectory action being performed.
 * @param  q       Pointer to this object's public AttachPolicyRequest instance.
 */
AttachPolicyRequestPrivate::AttachPolicyRequestPrivate(
    const CloudDirectoryRequest::Action action, AttachPolicyRequest * const q)
    : CloudDirectoryRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AttachPolicyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AttachPolicyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AttachPolicyRequest instance.
 */
AttachPolicyRequestPrivate::AttachPolicyRequestPrivate(
    const AttachPolicyRequestPrivate &other, AttachPolicyRequest * const q)
    : CloudDirectoryRequestPrivate(other, q)
{

}

} // namespace CloudDirectory
} // namespace QtAws
