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

#include "getkeypolicyrequest.h"
#include "getkeypolicyrequest_p.h"
#include "getkeypolicyresponse.h"
#include "kmsrequest_p.h"

namespace AWS {
namespace KMS {

/**
 * @class  GetKeyPolicyRequest
 *
 * @brief  Implements KMS GetKeyPolicy requests.
 *
 * @see    KMSClient::getKeyPolicy
 */

/**
 * @brief  Constructs a new GetKeyPolicyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetKeyPolicyRequest::GetKeyPolicyRequest(const GetKeyPolicyRequest &other)
    : KMSRequest(new GetKeyPolicyRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetKeyPolicyRequest object.
 */
GetKeyPolicyRequest::GetKeyPolicyRequest()
    : KMSRequest(new GetKeyPolicyRequestPrivate(KMSRequest::GetKeyPolicyAction, this))
{

}

bool GetKeyPolicyRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetKeyPolicyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetKeyPolicyResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  KMSClient::send
 */
AwsAbstractResponse * GetKeyPolicyRequest::response(QNetworkReply * const reply) const
{
    return new GetKeyPolicyResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetKeyPolicyRequestPrivate
 *
 * @brief  Private implementation for GetKeyPolicyRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetKeyPolicyRequestPrivate object.
 *
 * @param  action  KMS action being performed.
 * @param  q       Pointer to this object's public GetKeyPolicyRequest instance.
 */
GetKeyPolicyRequestPrivate::GetKeyPolicyRequestPrivate(
    const KMSRequest::Action action, GetKeyPolicyRequest * const q)
    : GetKeyPolicyPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetKeyPolicyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetKeyPolicyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetKeyPolicyRequest instance.
 */
GetKeyPolicyRequestPrivate::GetKeyPolicyRequestPrivate(
    const GetKeyPolicyRequestPrivate &other, GetKeyPolicyRequest * const q)
    : GetKeyPolicyPrivate(other, q)
{

}

} // namespace KMS
} // namespace AWS
