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

#include "putkeypolicyrequest.h"
#include "putkeypolicyrequest_p.h"
#include "putkeypolicyresponse.h"
#include "kmsrequest_p.h"

namespace QtAws {
namespace KMS {

/**
 * @class  PutKeyPolicyRequest
 *
 * @brief  Implements KMS PutKeyPolicy requests.
 *
 * @see    KMSClient::putKeyPolicy
 */

/**
 * @brief  Constructs a new PutKeyPolicyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PutKeyPolicyRequest::PutKeyPolicyRequest(const PutKeyPolicyRequest &other)
    : KMSRequest(new PutKeyPolicyRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new PutKeyPolicyRequest object.
 */
PutKeyPolicyRequest::PutKeyPolicyRequest()
    : KMSRequest(new PutKeyPolicyRequestPrivate(KMSRequest::PutKeyPolicyAction, this))
{

}

bool PutKeyPolicyRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an PutKeyPolicyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PutKeyPolicyResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  KMSClient::send
 */
QtAws::Core::AwsAbstractResponse * PutKeyPolicyRequest::response(QNetworkReply * const reply) const
{
    return new PutKeyPolicyResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  PutKeyPolicyRequestPrivate
 *
 * @brief  Private implementation for PutKeyPolicyRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutKeyPolicyRequestPrivate object.
 *
 * @param  action  KMS action being performed.
 * @param  q       Pointer to this object's public PutKeyPolicyRequest instance.
 */
PutKeyPolicyRequestPrivate::PutKeyPolicyRequestPrivate(
    const KMSRequest::Action action, PutKeyPolicyRequest * const q)
    : KMSRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new PutKeyPolicyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PutKeyPolicyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PutKeyPolicyRequest instance.
 */
PutKeyPolicyRequestPrivate::PutKeyPolicyRequestPrivate(
    const PutKeyPolicyRequestPrivate &other, PutKeyPolicyRequest * const q)
    : KMSRequestPrivate(other, q)
{

}

} // namespace KMS
} // namespace QtAws
