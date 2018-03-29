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

#include "detachpolicyrequest.h"
#include "detachpolicyrequest_p.h"
#include "detachpolicyresponse.h"
#include "clouddirectoryrequest_p.h"

namespace QtAws {
namespace CloudDirectory {

/**
 * @class  DetachPolicyRequest
 *
 * @brief  Implements CloudDirectory DetachPolicy requests.
 *
 * @see    CloudDirectoryClient::detachPolicy
 */

/**
 * @brief  Constructs a new DetachPolicyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DetachPolicyRequest::DetachPolicyRequest(const DetachPolicyRequest &other)
    : CloudDirectoryRequest(new DetachPolicyRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DetachPolicyRequest object.
 */
DetachPolicyRequest::DetachPolicyRequest()
    : CloudDirectoryRequest(new DetachPolicyRequestPrivate(CloudDirectoryRequest::DetachPolicyAction, this))
{

}

bool DetachPolicyRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DetachPolicyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DetachPolicyResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CloudDirectoryClient::send
 */
QtAws::Core::AwsAbstractResponse * DetachPolicyRequest::response(QNetworkReply * const reply) const
{
    return new DetachPolicyResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DetachPolicyRequestPrivate
 *
 * @brief  Private implementation for DetachPolicyRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DetachPolicyRequestPrivate object.
 *
 * @param  action  CloudDirectory action being performed.
 * @param  q       Pointer to this object's public DetachPolicyRequest instance.
 */
DetachPolicyRequestPrivate::DetachPolicyRequestPrivate(
    const CloudDirectoryRequest::Action action, DetachPolicyRequest * const q)
    : DetachPolicyPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DetachPolicyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DetachPolicyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DetachPolicyRequest instance.
 */
DetachPolicyRequestPrivate::DetachPolicyRequestPrivate(
    const DetachPolicyRequestPrivate &other, DetachPolicyRequest * const q)
    : DetachPolicyPrivate(other, q)
{

}

} // namespace CloudDirectory
} // namespace QtAws
