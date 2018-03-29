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

#include "disablekeyrotationrequest.h"
#include "disablekeyrotationrequest_p.h"
#include "disablekeyrotationresponse.h"
#include "kmsrequest_p.h"

namespace QtAws {
namespace KMS {

/**
 * @class  DisableKeyRotationRequest
 *
 * @brief  Implements KMS DisableKeyRotation requests.
 *
 * @see    KMSClient::disableKeyRotation
 */

/**
 * @brief  Constructs a new DisableKeyRotationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DisableKeyRotationRequest::DisableKeyRotationRequest(const DisableKeyRotationRequest &other)
    : KMSRequest(new DisableKeyRotationRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DisableKeyRotationRequest object.
 */
DisableKeyRotationRequest::DisableKeyRotationRequest()
    : KMSRequest(new DisableKeyRotationRequestPrivate(KMSRequest::DisableKeyRotationAction, this))
{

}

bool DisableKeyRotationRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DisableKeyRotationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DisableKeyRotationResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  KMSClient::send
 */
QtAws::Core::AwsAbstractResponse * DisableKeyRotationRequest::response(QNetworkReply * const reply) const
{
    return new DisableKeyRotationResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DisableKeyRotationRequestPrivate
 *
 * @brief  Private implementation for DisableKeyRotationRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DisableKeyRotationRequestPrivate object.
 *
 * @param  action  KMS action being performed.
 * @param  q       Pointer to this object's public DisableKeyRotationRequest instance.
 */
DisableKeyRotationRequestPrivate::DisableKeyRotationRequestPrivate(
    const KMSRequest::Action action, DisableKeyRotationRequest * const q)
    : DisableKeyRotationPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DisableKeyRotationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DisableKeyRotationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DisableKeyRotationRequest instance.
 */
DisableKeyRotationRequestPrivate::DisableKeyRotationRequestPrivate(
    const DisableKeyRotationRequestPrivate &other, DisableKeyRotationRequest * const q)
    : DisableKeyRotationPrivate(other, q)
{

}

} // namespace KMS
} // namespace QtAws
