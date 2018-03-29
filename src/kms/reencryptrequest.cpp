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

#include "reencryptrequest.h"
#include "reencryptrequest_p.h"
#include "reencryptresponse.h"
#include "kmsrequest_p.h"

namespace QtAws {
namespace KMS {

/**
 * @class  ReEncryptRequest
 *
 * @brief  Implements KMS ReEncrypt requests.
 *
 * @see    KMSClient::reEncrypt
 */

/**
 * @brief  Constructs a new ReEncryptRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ReEncryptRequest::ReEncryptRequest(const ReEncryptRequest &other)
    : KMSRequest(new ReEncryptRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ReEncryptRequest object.
 */
ReEncryptRequest::ReEncryptRequest()
    : KMSRequest(new ReEncryptRequestPrivate(KMSRequest::ReEncryptAction, this))
{

}

bool ReEncryptRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ReEncryptResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ReEncryptResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  KMSClient::send
 */
AwsAbstractResponse * ReEncryptRequest::response(QNetworkReply * const reply) const
{
    return new ReEncryptResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ReEncryptRequestPrivate
 *
 * @brief  Private implementation for ReEncryptRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ReEncryptRequestPrivate object.
 *
 * @param  action  KMS action being performed.
 * @param  q       Pointer to this object's public ReEncryptRequest instance.
 */
ReEncryptRequestPrivate::ReEncryptRequestPrivate(
    const KMSRequest::Action action, ReEncryptRequest * const q)
    : ReEncryptPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ReEncryptRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ReEncryptRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ReEncryptRequest instance.
 */
ReEncryptRequestPrivate::ReEncryptRequestPrivate(
    const ReEncryptRequestPrivate &other, ReEncryptRequest * const q)
    : ReEncryptPrivate(other, q)
{

}

} // namespace KMS
} // namespace QtAws
