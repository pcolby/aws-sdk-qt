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

#include "retiregrantrequest.h"
#include "retiregrantrequest_p.h"
#include "retiregrantresponse.h"
#include "kmsrequest_p.h"

namespace AWS {
namespace KMS {

/**
 * @class  RetireGrantRequest
 *
 * @brief  Implements KMS RetireGrant requests.
 *
 * @see    KMSClient::retireGrant
 */

/**
 * @brief  Constructs a new RetireGrantResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RetireGrantResponse::RetireGrantResponse(

/**
 * @brief  Constructs a new RetireGrantRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RetireGrantRequest::RetireGrantRequest(const RetireGrantRequest &other)
    : KMSRequest(new RetireGrantRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new RetireGrantRequest object.
 */
RetireGrantRequest::RetireGrantRequest()
    : KMSRequest(new RetireGrantRequestPrivate(KMSRequest::RetireGrantAction, this))
{

}

bool RetireGrantRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an RetireGrantResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RetireGrantResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  KMSClient::send
 */
AwsAbstractResponse * RetireGrantRequest::response(QNetworkReply * const reply) const
{
    return new RetireGrantResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  RetireGrantRequestPrivate
 *
 * @brief  Private implementation for RetireGrantRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RetireGrantRequestPrivate object.
 *
 * @param  action  KMS action being performed.
 * @param  q       Pointer to this object's public RetireGrantRequest instance.
 */
RetireGrantRequestPrivate::RetireGrantRequestPrivate(
    const KMSRequest::Action action, RetireGrantRequest * const q)
    : RetireGrantPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new RetireGrantRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RetireGrantRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RetireGrantRequest instance.
 */
RetireGrantRequestPrivate::RetireGrantRequestPrivate(
    const RetireGrantRequestPrivate &other, RetireGrantRequest * const q)
    : RetireGrantPrivate(other, q)
{

}
