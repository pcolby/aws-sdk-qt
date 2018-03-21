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

#include "decodeauthorizationmessagerequest.h"
#include "decodeauthorizationmessagerequest_p.h"
#include "decodeauthorizationmessageresponse.h"
#include "stsrequest_p.h"

namespace AWS {
namespace STS {

/**
 * @class  DecodeAuthorizationMessageRequest
 *
 * @brief  Implements STS DecodeAuthorizationMessage requests.
 *
 * @see    STSClient::decodeAuthorizationMessage
 */

/**
 * @brief  Constructs a new DecodeAuthorizationMessageRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DecodeAuthorizationMessageRequest::DecodeAuthorizationMessageRequest(const DecodeAuthorizationMessageRequest &other)
    : STSRequest(new DecodeAuthorizationMessageRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DecodeAuthorizationMessageRequest object.
 */
DecodeAuthorizationMessageRequest::DecodeAuthorizationMessageRequest()
    : STSRequest(new DecodeAuthorizationMessageRequestPrivate(STSRequest::DecodeAuthorizationMessageAction, this))
{

}

bool DecodeAuthorizationMessageRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DecodeAuthorizationMessageResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DecodeAuthorizationMessageResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  STSClient::send
 */
AwsAbstractResponse * DecodeAuthorizationMessageRequest::response(QNetworkReply * const reply) const
{
    return new DecodeAuthorizationMessageResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DecodeAuthorizationMessageRequestPrivate
 *
 * @brief  Private implementation for DecodeAuthorizationMessageRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DecodeAuthorizationMessageRequestPrivate object.
 *
 * @param  action  STS action being performed.
 * @param  q       Pointer to this object's public DecodeAuthorizationMessageRequest instance.
 */
DecodeAuthorizationMessageRequestPrivate::DecodeAuthorizationMessageRequestPrivate(
    const STSRequest::Action action, DecodeAuthorizationMessageRequest * const q)
    : DecodeAuthorizationMessagePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DecodeAuthorizationMessageRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DecodeAuthorizationMessageRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DecodeAuthorizationMessageRequest instance.
 */
DecodeAuthorizationMessageRequestPrivate::DecodeAuthorizationMessageRequestPrivate(
    const DecodeAuthorizationMessageRequestPrivate &other, DecodeAuthorizationMessageRequest * const q)
    : DecodeAuthorizationMessagePrivate(other, q)
{

}

} // namespace STS
} // namespace AWS
