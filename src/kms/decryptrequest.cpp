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

#include "decryptrequest.h"
#include "decryptrequest_p.h"
#include "decryptresponse.h"
#include "kmsrequest_p.h"

namespace QtAws {
namespace KMS {

/**
 * @class  DecryptRequest
 *
 * @brief  Implements KMS Decrypt requests.
 *
 * @see    KMSClient::decrypt
 */

/**
 * @brief  Constructs a new DecryptRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DecryptRequest::DecryptRequest(const DecryptRequest &other)
    : KMSRequest(new DecryptRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DecryptRequest object.
 */
DecryptRequest::DecryptRequest()
    : KMSRequest(new DecryptRequestPrivate(KMSRequest::DecryptAction, this))
{

}

bool DecryptRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DecryptResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DecryptResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  KMSClient::send
 */
AwsAbstractResponse * DecryptRequest::response(QNetworkReply * const reply) const
{
    return new DecryptResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DecryptRequestPrivate
 *
 * @brief  Private implementation for DecryptRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DecryptRequestPrivate object.
 *
 * @param  action  KMS action being performed.
 * @param  q       Pointer to this object's public DecryptRequest instance.
 */
DecryptRequestPrivate::DecryptRequestPrivate(
    const KMSRequest::Action action, DecryptRequest * const q)
    : DecryptPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DecryptRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DecryptRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DecryptRequest instance.
 */
DecryptRequestPrivate::DecryptRequestPrivate(
    const DecryptRequestPrivate &other, DecryptRequest * const q)
    : DecryptPrivate(other, q)
{

}

} // namespace KMS
} // namespace QtAws
