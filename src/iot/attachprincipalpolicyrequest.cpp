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

#include "attachprincipalpolicyrequest.h"
#include "attachprincipalpolicyrequest_p.h"
#include "attachprincipalpolicyresponse.h"
#include "iotrequest_p.h"

namespace QtAws {
namespace IoT {

/**
 * @class  AttachPrincipalPolicyRequest
 *
 * @brief  Implements IoT AttachPrincipalPolicy requests.
 *
 * @see    IoTClient::attachPrincipalPolicy
 */

/**
 * @brief  Constructs a new AttachPrincipalPolicyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AttachPrincipalPolicyRequest::AttachPrincipalPolicyRequest(const AttachPrincipalPolicyRequest &other)
    : IoTRequest(new AttachPrincipalPolicyRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AttachPrincipalPolicyRequest object.
 */
AttachPrincipalPolicyRequest::AttachPrincipalPolicyRequest()
    : IoTRequest(new AttachPrincipalPolicyRequestPrivate(IoTRequest::AttachPrincipalPolicyAction, this))
{

}

bool AttachPrincipalPolicyRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AttachPrincipalPolicyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AttachPrincipalPolicyResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IoTClient::send
 */
AwsAbstractResponse * AttachPrincipalPolicyRequest::response(QNetworkReply * const reply) const
{
    return new AttachPrincipalPolicyResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AttachPrincipalPolicyRequestPrivate
 *
 * @brief  Private implementation for AttachPrincipalPolicyRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AttachPrincipalPolicyRequestPrivate object.
 *
 * @param  action  IoT action being performed.
 * @param  q       Pointer to this object's public AttachPrincipalPolicyRequest instance.
 */
AttachPrincipalPolicyRequestPrivate::AttachPrincipalPolicyRequestPrivate(
    const IoTRequest::Action action, AttachPrincipalPolicyRequest * const q)
    : AttachPrincipalPolicyPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AttachPrincipalPolicyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AttachPrincipalPolicyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AttachPrincipalPolicyRequest instance.
 */
AttachPrincipalPolicyRequestPrivate::AttachPrincipalPolicyRequestPrivate(
    const AttachPrincipalPolicyRequestPrivate &other, AttachPrincipalPolicyRequest * const q)
    : AttachPrincipalPolicyPrivate(other, q)
{

}

} // namespace IoT
} // namespace QtAws
