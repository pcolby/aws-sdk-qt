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

#include "getidentitynotificationattributesrequest.h"
#include "getidentitynotificationattributesrequest_p.h"
#include "getidentitynotificationattributesresponse.h"
#include "sesrequest_p.h"

namespace AWS {
namespace SES {

/**
 * @class  GetIdentityNotificationAttributesRequest
 *
 * @brief  Implements SES GetIdentityNotificationAttributes requests.
 *
 * @see    SESClient::getIdentityNotificationAttributes
 */

/**
 * @brief  Constructs a new GetIdentityNotificationAttributesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetIdentityNotificationAttributesRequest::GetIdentityNotificationAttributesRequest(const GetIdentityNotificationAttributesRequest &other)
    : SESRequest(new GetIdentityNotificationAttributesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetIdentityNotificationAttributesRequest object.
 */
GetIdentityNotificationAttributesRequest::GetIdentityNotificationAttributesRequest()
    : SESRequest(new GetIdentityNotificationAttributesRequestPrivate(SESRequest::GetIdentityNotificationAttributesAction, this))
{

}

bool GetIdentityNotificationAttributesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetIdentityNotificationAttributesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetIdentityNotificationAttributesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SESClient::send
 */
AwsAbstractResponse * GetIdentityNotificationAttributesRequest::response(QNetworkReply * const reply) const
{
    return new GetIdentityNotificationAttributesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetIdentityNotificationAttributesRequestPrivate
 *
 * @brief  Private implementation for GetIdentityNotificationAttributesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetIdentityNotificationAttributesRequestPrivate object.
 *
 * @param  action  SES action being performed.
 * @param  q       Pointer to this object's public GetIdentityNotificationAttributesRequest instance.
 */
GetIdentityNotificationAttributesRequestPrivate::GetIdentityNotificationAttributesRequestPrivate(
    const SESRequest::Action action, GetIdentityNotificationAttributesRequest * const q)
    : GetIdentityNotificationAttributesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetIdentityNotificationAttributesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetIdentityNotificationAttributesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetIdentityNotificationAttributesRequest instance.
 */
GetIdentityNotificationAttributesRequestPrivate::GetIdentityNotificationAttributesRequestPrivate(
    const GetIdentityNotificationAttributesRequestPrivate &other, GetIdentityNotificationAttributesRequest * const q)
    : GetIdentityNotificationAttributesPrivate(other, q)
{

}

} // namespace SES
} // namespace AWS
