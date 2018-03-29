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

#include "rotateencryptionkeyrequest.h"
#include "rotateencryptionkeyrequest_p.h"
#include "rotateencryptionkeyresponse.h"
#include "redshiftrequest_p.h"

namespace QtAws {
namespace Redshift {

/**
 * @class  RotateEncryptionKeyRequest
 *
 * @brief  Implements Redshift RotateEncryptionKey requests.
 *
 * @see    RedshiftClient::rotateEncryptionKey
 */

/**
 * @brief  Constructs a new RotateEncryptionKeyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RotateEncryptionKeyRequest::RotateEncryptionKeyRequest(const RotateEncryptionKeyRequest &other)
    : RedshiftRequest(new RotateEncryptionKeyRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new RotateEncryptionKeyRequest object.
 */
RotateEncryptionKeyRequest::RotateEncryptionKeyRequest()
    : RedshiftRequest(new RotateEncryptionKeyRequestPrivate(RedshiftRequest::RotateEncryptionKeyAction, this))
{

}

bool RotateEncryptionKeyRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an RotateEncryptionKeyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RotateEncryptionKeyResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  RedshiftClient::send
 */
AwsAbstractResponse * RotateEncryptionKeyRequest::response(QNetworkReply * const reply) const
{
    return new RotateEncryptionKeyResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  RotateEncryptionKeyRequestPrivate
 *
 * @brief  Private implementation for RotateEncryptionKeyRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RotateEncryptionKeyRequestPrivate object.
 *
 * @param  action  Redshift action being performed.
 * @param  q       Pointer to this object's public RotateEncryptionKeyRequest instance.
 */
RotateEncryptionKeyRequestPrivate::RotateEncryptionKeyRequestPrivate(
    const RedshiftRequest::Action action, RotateEncryptionKeyRequest * const q)
    : RotateEncryptionKeyPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new RotateEncryptionKeyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RotateEncryptionKeyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RotateEncryptionKeyRequest instance.
 */
RotateEncryptionKeyRequestPrivate::RotateEncryptionKeyRequestPrivate(
    const RotateEncryptionKeyRequestPrivate &other, RotateEncryptionKeyRequest * const q)
    : RotateEncryptionKeyPrivate(other, q)
{

}

} // namespace Redshift
} // namespace QtAws
