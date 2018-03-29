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

#include "updateservicespecificcredentialrequest.h"
#include "updateservicespecificcredentialrequest_p.h"
#include "updateservicespecificcredentialresponse.h"
#include "iamrequest_p.h"

namespace AWS {
namespace IAM {

/**
 * @class  UpdateServiceSpecificCredentialRequest
 *
 * @brief  Implements IAM UpdateServiceSpecificCredential requests.
 *
 * @see    IAMClient::updateServiceSpecificCredential
 */

/**
 * @brief  Constructs a new UpdateServiceSpecificCredentialRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateServiceSpecificCredentialRequest::UpdateServiceSpecificCredentialRequest(const UpdateServiceSpecificCredentialRequest &other)
    : IAMRequest(new UpdateServiceSpecificCredentialRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateServiceSpecificCredentialRequest object.
 */
UpdateServiceSpecificCredentialRequest::UpdateServiceSpecificCredentialRequest()
    : IAMRequest(new UpdateServiceSpecificCredentialRequestPrivate(IAMRequest::UpdateServiceSpecificCredentialAction, this))
{

}

bool UpdateServiceSpecificCredentialRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateServiceSpecificCredentialResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateServiceSpecificCredentialResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IAMClient::send
 */
AwsAbstractResponse * UpdateServiceSpecificCredentialRequest::response(QNetworkReply * const reply) const
{
    return new UpdateServiceSpecificCredentialResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateServiceSpecificCredentialRequestPrivate
 *
 * @brief  Private implementation for UpdateServiceSpecificCredentialRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateServiceSpecificCredentialRequestPrivate object.
 *
 * @param  action  IAM action being performed.
 * @param  q       Pointer to this object's public UpdateServiceSpecificCredentialRequest instance.
 */
UpdateServiceSpecificCredentialRequestPrivate::UpdateServiceSpecificCredentialRequestPrivate(
    const IAMRequest::Action action, UpdateServiceSpecificCredentialRequest * const q)
    : UpdateServiceSpecificCredentialPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateServiceSpecificCredentialRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateServiceSpecificCredentialRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateServiceSpecificCredentialRequest instance.
 */
UpdateServiceSpecificCredentialRequestPrivate::UpdateServiceSpecificCredentialRequestPrivate(
    const UpdateServiceSpecificCredentialRequestPrivate &other, UpdateServiceSpecificCredentialRequest * const q)
    : UpdateServiceSpecificCredentialPrivate(other, q)
{

}

} // namespace IAM
} // namespace AWS
