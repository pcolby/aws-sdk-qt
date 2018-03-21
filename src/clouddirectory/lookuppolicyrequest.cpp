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

#include "lookuppolicyrequest.h"
#include "lookuppolicyrequest_p.h"
#include "lookuppolicyresponse.h"
#include "clouddirectoryrequest_p.h"

namespace AWS {
namespace CloudDirectory {

/**
 * @class  LookupPolicyRequest
 *
 * @brief  Implements CloudDirectory LookupPolicy requests.
 *
 * @see    CloudDirectoryClient::lookupPolicy
 */

/**
 * @brief  Constructs a new LookupPolicyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
LookupPolicyRequest::LookupPolicyRequest(const LookupPolicyRequest &other)
    : CloudDirectoryRequest(new LookupPolicyRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new LookupPolicyRequest object.
 */
LookupPolicyRequest::LookupPolicyRequest()
    : CloudDirectoryRequest(new LookupPolicyRequestPrivate(CloudDirectoryRequest::LookupPolicyAction, this))
{

}

bool LookupPolicyRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an LookupPolicyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An LookupPolicyResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudDirectoryClient::send
 */
AwsAbstractResponse * LookupPolicyRequest::response(QNetworkReply * const reply) const
{
    return new LookupPolicyResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  LookupPolicyRequestPrivate
 *
 * @brief  Private implementation for LookupPolicyRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new LookupPolicyRequestPrivate object.
 *
 * @param  action  CloudDirectory action being performed.
 * @param  q       Pointer to this object's public LookupPolicyRequest instance.
 */
LookupPolicyRequestPrivate::LookupPolicyRequestPrivate(
    const CloudDirectoryRequest::Action action, LookupPolicyRequest * const q)
    : LookupPolicyPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new LookupPolicyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the LookupPolicyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public LookupPolicyRequest instance.
 */
LookupPolicyRequestPrivate::LookupPolicyRequestPrivate(
    const LookupPolicyRequestPrivate &other, LookupPolicyRequest * const q)
    : LookupPolicyPrivate(other, q)
{

}

} // namespace CloudDirectory
} // namespace AWS
