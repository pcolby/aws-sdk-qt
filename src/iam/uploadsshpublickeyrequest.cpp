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

#include "uploadsshpublickeyrequest.h"
#include "uploadsshpublickeyrequest_p.h"
#include "uploadsshpublickeyresponse.h"
#include "iamrequest_p.h"

namespace AWS {
namespace IAM {

/**
 * @class  UploadSSHPublicKeyRequest
 *
 * @brief  Implements IAM UploadSSHPublicKey requests.
 *
 * @see    IAMClient::uploadSSHPublicKey
 */

/**
 * @brief  Constructs a new UploadSSHPublicKeyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UploadSSHPublicKeyRequest::UploadSSHPublicKeyRequest(const UploadSSHPublicKeyRequest &other)
    : IAMRequest(new UploadSSHPublicKeyRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UploadSSHPublicKeyRequest object.
 */
UploadSSHPublicKeyRequest::UploadSSHPublicKeyRequest()
    : IAMRequest(new UploadSSHPublicKeyRequestPrivate(IAMRequest::UploadSSHPublicKeyAction, this))
{

}

bool UploadSSHPublicKeyRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UploadSSHPublicKeyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UploadSSHPublicKeyResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IAMClient::send
 */
AwsAbstractResponse * UploadSSHPublicKeyRequest::response(QNetworkReply * const reply) const
{
    return new UploadSSHPublicKeyResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UploadSSHPublicKeyRequestPrivate
 *
 * @brief  Private implementation for UploadSSHPublicKeyRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UploadSSHPublicKeyRequestPrivate object.
 *
 * @param  action  IAM action being performed.
 * @param  q       Pointer to this object's public UploadSSHPublicKeyRequest instance.
 */
UploadSSHPublicKeyRequestPrivate::UploadSSHPublicKeyRequestPrivate(
    const IAMRequest::Action action, UploadSSHPublicKeyRequest * const q)
    : UploadSSHPublicKeyPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UploadSSHPublicKeyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UploadSSHPublicKeyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UploadSSHPublicKeyRequest instance.
 */
UploadSSHPublicKeyRequestPrivate::UploadSSHPublicKeyRequestPrivate(
    const UploadSSHPublicKeyRequestPrivate &other, UploadSSHPublicKeyRequest * const q)
    : UploadSSHPublicKeyPrivate(other, q)
{

}

} // namespace IAM
} // namespace AWS
