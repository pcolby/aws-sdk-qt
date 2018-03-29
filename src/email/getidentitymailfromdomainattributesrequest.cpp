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

#include "getidentitymailfromdomainattributesrequest.h"
#include "getidentitymailfromdomainattributesrequest_p.h"
#include "getidentitymailfromdomainattributesresponse.h"
#include "sesrequest_p.h"

namespace AWS {
namespace SES {

/**
 * @class  GetIdentityMailFromDomainAttributesRequest
 *
 * @brief  Implements SES GetIdentityMailFromDomainAttributes requests.
 *
 * @see    SESClient::getIdentityMailFromDomainAttributes
 */

/**
 * @brief  Constructs a new GetIdentityMailFromDomainAttributesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetIdentityMailFromDomainAttributesRequest::GetIdentityMailFromDomainAttributesRequest(const GetIdentityMailFromDomainAttributesRequest &other)
    : SESRequest(new GetIdentityMailFromDomainAttributesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetIdentityMailFromDomainAttributesRequest object.
 */
GetIdentityMailFromDomainAttributesRequest::GetIdentityMailFromDomainAttributesRequest()
    : SESRequest(new GetIdentityMailFromDomainAttributesRequestPrivate(SESRequest::GetIdentityMailFromDomainAttributesAction, this))
{

}

bool GetIdentityMailFromDomainAttributesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetIdentityMailFromDomainAttributesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetIdentityMailFromDomainAttributesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SESClient::send
 */
AwsAbstractResponse * GetIdentityMailFromDomainAttributesRequest::response(QNetworkReply * const reply) const
{
    return new GetIdentityMailFromDomainAttributesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetIdentityMailFromDomainAttributesRequestPrivate
 *
 * @brief  Private implementation for GetIdentityMailFromDomainAttributesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetIdentityMailFromDomainAttributesRequestPrivate object.
 *
 * @param  action  SES action being performed.
 * @param  q       Pointer to this object's public GetIdentityMailFromDomainAttributesRequest instance.
 */
GetIdentityMailFromDomainAttributesRequestPrivate::GetIdentityMailFromDomainAttributesRequestPrivate(
    const SESRequest::Action action, GetIdentityMailFromDomainAttributesRequest * const q)
    : GetIdentityMailFromDomainAttributesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetIdentityMailFromDomainAttributesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetIdentityMailFromDomainAttributesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetIdentityMailFromDomainAttributesRequest instance.
 */
GetIdentityMailFromDomainAttributesRequestPrivate::GetIdentityMailFromDomainAttributesRequestPrivate(
    const GetIdentityMailFromDomainAttributesRequestPrivate &other, GetIdentityMailFromDomainAttributesRequest * const q)
    : GetIdentityMailFromDomainAttributesPrivate(other, q)
{

}

} // namespace SES
} // namespace AWS
