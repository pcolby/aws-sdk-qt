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

#include "encryptrequest.h"
#include "encryptrequest_p.h"
#include "encryptresponse.h"
#include "kmsrequest_p.h"

namespace AWS {
namespace KMS {

/**
 * @class  EncryptRequest
 *
 * @brief  Implements KMS Encrypt requests.
 *
 * @see    KMSClient::encrypt
 */

/**
 * @brief  Constructs a new EncryptResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
EncryptResponse::EncryptResponse(

/**
 * @brief  Constructs a new EncryptRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
EncryptRequest::EncryptRequest(const EncryptRequest &other)
    : KMSRequest(new EncryptRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new EncryptRequest object.
 */
EncryptRequest::EncryptRequest()
    : KMSRequest(new EncryptRequestPrivate(KMSRequest::EncryptAction, this))
{

}

bool EncryptRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an EncryptResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An EncryptResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  KMSClient::send
 */
AwsAbstractResponse * EncryptRequest::response(QNetworkReply * const reply) const
{
    return new EncryptResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  EncryptRequestPrivate
 *
 * @brief  Private implementation for EncryptRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new EncryptRequestPrivate object.
 *
 * @param  action  KMS action being performed.
 * @param  q       Pointer to this object's public EncryptRequest instance.
 */
EncryptRequestPrivate::EncryptRequestPrivate(
    const KMSRequest::Action action, EncryptRequest * const q)
    : EncryptPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new EncryptRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the EncryptRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public EncryptRequest instance.
 */
EncryptRequestPrivate::EncryptRequestPrivate(
    const EncryptRequestPrivate &other, EncryptRequest * const q)
    : EncryptPrivate(other, q)
{

}

} // namespace KMS
} // namespace AWS
