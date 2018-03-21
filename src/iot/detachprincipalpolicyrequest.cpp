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

#include "detachprincipalpolicyrequest.h"
#include "detachprincipalpolicyrequest_p.h"
#include "detachprincipalpolicyresponse.h"
#include "iotrequest_p.h"

namespace AWS {
namespace IoT {

/**
 * @class  DetachPrincipalPolicyRequest
 *
 * @brief  Implements IoT DetachPrincipalPolicy requests.
 *
 * @see    IoTClient::detachPrincipalPolicy
 */

/**
 * @brief  Constructs a new DetachPrincipalPolicyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DetachPrincipalPolicyResponse::DetachPrincipalPolicyResponse(

/**
 * @brief  Constructs a new DetachPrincipalPolicyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DetachPrincipalPolicyRequest::DetachPrincipalPolicyRequest(const DetachPrincipalPolicyRequest &other)
    : IoTRequest(new DetachPrincipalPolicyRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DetachPrincipalPolicyRequest object.
 */
DetachPrincipalPolicyRequest::DetachPrincipalPolicyRequest()
    : IoTRequest(new DetachPrincipalPolicyRequestPrivate(IoTRequest::DetachPrincipalPolicyAction, this))
{

}

bool DetachPrincipalPolicyRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DetachPrincipalPolicyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DetachPrincipalPolicyResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IoTClient::send
 */
AwsAbstractResponse * DetachPrincipalPolicyRequest::response(QNetworkReply * const reply) const
{
    return new DetachPrincipalPolicyResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DetachPrincipalPolicyRequestPrivate
 *
 * @brief  Private implementation for DetachPrincipalPolicyRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DetachPrincipalPolicyRequestPrivate object.
 *
 * @param  action  IoT action being performed.
 * @param  q       Pointer to this object's public DetachPrincipalPolicyRequest instance.
 */
DetachPrincipalPolicyRequestPrivate::DetachPrincipalPolicyRequestPrivate(
    const IoTRequest::Action action, DetachPrincipalPolicyRequest * const q)
    : DetachPrincipalPolicyPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DetachPrincipalPolicyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DetachPrincipalPolicyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DetachPrincipalPolicyRequest instance.
 */
DetachPrincipalPolicyRequestPrivate::DetachPrincipalPolicyRequestPrivate(
    const DetachPrincipalPolicyRequestPrivate &other, DetachPrincipalPolicyRequest * const q)
    : DetachPrincipalPolicyPrivate(other, q)
{

}
