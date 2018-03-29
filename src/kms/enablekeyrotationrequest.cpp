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

#include "enablekeyrotationrequest.h"
#include "enablekeyrotationrequest_p.h"
#include "enablekeyrotationresponse.h"
#include "kmsrequest_p.h"

namespace AWS {
namespace KMS {

/**
 * @class  EnableKeyRotationRequest
 *
 * @brief  Implements KMS EnableKeyRotation requests.
 *
 * @see    KMSClient::enableKeyRotation
 */

/**
 * @brief  Constructs a new EnableKeyRotationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
EnableKeyRotationRequest::EnableKeyRotationRequest(const EnableKeyRotationRequest &other)
    : KMSRequest(new EnableKeyRotationRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new EnableKeyRotationRequest object.
 */
EnableKeyRotationRequest::EnableKeyRotationRequest()
    : KMSRequest(new EnableKeyRotationRequestPrivate(KMSRequest::EnableKeyRotationAction, this))
{

}

bool EnableKeyRotationRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an EnableKeyRotationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An EnableKeyRotationResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  KMSClient::send
 */
AwsAbstractResponse * EnableKeyRotationRequest::response(QNetworkReply * const reply) const
{
    return new EnableKeyRotationResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  EnableKeyRotationRequestPrivate
 *
 * @brief  Private implementation for EnableKeyRotationRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new EnableKeyRotationRequestPrivate object.
 *
 * @param  action  KMS action being performed.
 * @param  q       Pointer to this object's public EnableKeyRotationRequest instance.
 */
EnableKeyRotationRequestPrivate::EnableKeyRotationRequestPrivate(
    const KMSRequest::Action action, EnableKeyRotationRequest * const q)
    : EnableKeyRotationPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new EnableKeyRotationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the EnableKeyRotationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public EnableKeyRotationRequest instance.
 */
EnableKeyRotationRequestPrivate::EnableKeyRotationRequestPrivate(
    const EnableKeyRotationRequestPrivate &other, EnableKeyRotationRequest * const q)
    : EnableKeyRotationPrivate(other, q)
{

}

} // namespace KMS
} // namespace AWS
