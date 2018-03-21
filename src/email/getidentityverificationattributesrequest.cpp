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

#include "getidentityverificationattributesrequest.h"
#include "getidentityverificationattributesrequest_p.h"
#include "getidentityverificationattributesresponse.h"
#include "sesrequest_p.h"

namespace AWS {
namespace SES {

/**
 * @class  GetIdentityVerificationAttributesRequest
 *
 * @brief  Implements SES GetIdentityVerificationAttributes requests.
 *
 * @see    SESClient::getIdentityVerificationAttributes
 */

/**
 * @brief  Constructs a new GetIdentityVerificationAttributesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetIdentityVerificationAttributesResponse::GetIdentityVerificationAttributesResponse(

/**
 * @brief  Constructs a new GetIdentityVerificationAttributesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetIdentityVerificationAttributesRequest::GetIdentityVerificationAttributesRequest(const GetIdentityVerificationAttributesRequest &other)
    : SESRequest(new GetIdentityVerificationAttributesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetIdentityVerificationAttributesRequest object.
 */
GetIdentityVerificationAttributesRequest::GetIdentityVerificationAttributesRequest()
    : SESRequest(new GetIdentityVerificationAttributesRequestPrivate(SESRequest::GetIdentityVerificationAttributesAction, this))
{

}

bool GetIdentityVerificationAttributesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetIdentityVerificationAttributesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetIdentityVerificationAttributesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SESClient::send
 */
AwsAbstractResponse * GetIdentityVerificationAttributesRequest::response(QNetworkReply * const reply) const
{
    return new GetIdentityVerificationAttributesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetIdentityVerificationAttributesRequestPrivate
 *
 * @brief  Private implementation for GetIdentityVerificationAttributesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetIdentityVerificationAttributesRequestPrivate object.
 *
 * @param  action  SES action being performed.
 * @param  q       Pointer to this object's public GetIdentityVerificationAttributesRequest instance.
 */
GetIdentityVerificationAttributesRequestPrivate::GetIdentityVerificationAttributesRequestPrivate(
    const SESRequest::Action action, GetIdentityVerificationAttributesRequest * const q)
    : GetIdentityVerificationAttributesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetIdentityVerificationAttributesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetIdentityVerificationAttributesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetIdentityVerificationAttributesRequest instance.
 */
GetIdentityVerificationAttributesRequestPrivate::GetIdentityVerificationAttributesRequestPrivate(
    const GetIdentityVerificationAttributesRequestPrivate &other, GetIdentityVerificationAttributesRequest * const q)
    : GetIdentityVerificationAttributesPrivate(other, q)
{

}

} // namespace SES
} // namespace AWS
