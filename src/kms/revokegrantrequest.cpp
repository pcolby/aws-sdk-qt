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

#include "revokegrantrequest.h"
#include "revokegrantrequest_p.h"
#include "revokegrantresponse.h"
#include "kmsrequest_p.h"

namespace AWS {
namespace KMS {

/**
 * @class  RevokeGrantRequest
 *
 * @brief  Implements KMS RevokeGrant requests.
 *
 * @see    KMSClient::revokeGrant
 */

/**
 * @brief  Constructs a new RevokeGrantRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RevokeGrantRequest::RevokeGrantRequest(const RevokeGrantRequest &other)
    : KMSRequest(new RevokeGrantRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new RevokeGrantRequest object.
 */
RevokeGrantRequest::RevokeGrantRequest()
    : KMSRequest(new RevokeGrantRequestPrivate(KMSRequest::RevokeGrantAction, this))
{

}

bool RevokeGrantRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an RevokeGrantResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RevokeGrantResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  KMSClient::send
 */
AwsAbstractResponse * RevokeGrantRequest::response(QNetworkReply * const reply) const
{
    return new RevokeGrantResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  RevokeGrantRequestPrivate
 *
 * @brief  Private implementation for RevokeGrantRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RevokeGrantRequestPrivate object.
 *
 * @param  action  KMS action being performed.
 * @param  q       Pointer to this object's public RevokeGrantRequest instance.
 */
RevokeGrantRequestPrivate::RevokeGrantRequestPrivate(
    const KMSRequest::Action action, RevokeGrantRequest * const q)
    : RevokeGrantPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new RevokeGrantRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RevokeGrantRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RevokeGrantRequest instance.
 */
RevokeGrantRequestPrivate::RevokeGrantRequestPrivate(
    const RevokeGrantRequestPrivate &other, RevokeGrantRequest * const q)
    : RevokeGrantPrivate(other, q)
{

}

} // namespace KMS
} // namespace AWS
