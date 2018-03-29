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

#include "updatesshpublickeyrequest.h"
#include "updatesshpublickeyrequest_p.h"
#include "updatesshpublickeyresponse.h"
#include "iamrequest_p.h"

namespace AWS {
namespace IAM {

/**
 * @class  UpdateSSHPublicKeyRequest
 *
 * @brief  Implements IAM UpdateSSHPublicKey requests.
 *
 * @see    IAMClient::updateSSHPublicKey
 */

/**
 * @brief  Constructs a new UpdateSSHPublicKeyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateSSHPublicKeyRequest::UpdateSSHPublicKeyRequest(const UpdateSSHPublicKeyRequest &other)
    : IAMRequest(new UpdateSSHPublicKeyRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateSSHPublicKeyRequest object.
 */
UpdateSSHPublicKeyRequest::UpdateSSHPublicKeyRequest()
    : IAMRequest(new UpdateSSHPublicKeyRequestPrivate(IAMRequest::UpdateSSHPublicKeyAction, this))
{

}

bool UpdateSSHPublicKeyRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateSSHPublicKeyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateSSHPublicKeyResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IAMClient::send
 */
AwsAbstractResponse * UpdateSSHPublicKeyRequest::response(QNetworkReply * const reply) const
{
    return new UpdateSSHPublicKeyResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateSSHPublicKeyRequestPrivate
 *
 * @brief  Private implementation for UpdateSSHPublicKeyRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateSSHPublicKeyRequestPrivate object.
 *
 * @param  action  IAM action being performed.
 * @param  q       Pointer to this object's public UpdateSSHPublicKeyRequest instance.
 */
UpdateSSHPublicKeyRequestPrivate::UpdateSSHPublicKeyRequestPrivate(
    const IAMRequest::Action action, UpdateSSHPublicKeyRequest * const q)
    : UpdateSSHPublicKeyPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateSSHPublicKeyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateSSHPublicKeyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateSSHPublicKeyRequest instance.
 */
UpdateSSHPublicKeyRequestPrivate::UpdateSSHPublicKeyRequestPrivate(
    const UpdateSSHPublicKeyRequestPrivate &other, UpdateSSHPublicKeyRequest * const q)
    : UpdateSSHPublicKeyPrivate(other, q)
{

}

} // namespace IAM
} // namespace AWS
