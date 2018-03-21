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

#include "getidentitydkimattributesrequest.h"
#include "getidentitydkimattributesrequest_p.h"
#include "getidentitydkimattributesresponse.h"
#include "sesrequest_p.h"

namespace AWS {
namespace SES {

/**
 * @class  GetIdentityDkimAttributesRequest
 *
 * @brief  Implements SES GetIdentityDkimAttributes requests.
 *
 * @see    SESClient::getIdentityDkimAttributes
 */

/**
 * @brief  Constructs a new GetIdentityDkimAttributesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetIdentityDkimAttributesRequest::GetIdentityDkimAttributesRequest(const GetIdentityDkimAttributesRequest &other)
    : SESRequest(new GetIdentityDkimAttributesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetIdentityDkimAttributesRequest object.
 */
GetIdentityDkimAttributesRequest::GetIdentityDkimAttributesRequest()
    : SESRequest(new GetIdentityDkimAttributesRequestPrivate(SESRequest::GetIdentityDkimAttributesAction, this))
{

}

bool GetIdentityDkimAttributesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetIdentityDkimAttributesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetIdentityDkimAttributesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SESClient::send
 */
AwsAbstractResponse * GetIdentityDkimAttributesRequest::response(QNetworkReply * const reply) const
{
    return new GetIdentityDkimAttributesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetIdentityDkimAttributesRequestPrivate
 *
 * @brief  Private implementation for GetIdentityDkimAttributesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetIdentityDkimAttributesRequestPrivate object.
 *
 * @param  action  SES action being performed.
 * @param  q       Pointer to this object's public GetIdentityDkimAttributesRequest instance.
 */
GetIdentityDkimAttributesRequestPrivate::GetIdentityDkimAttributesRequestPrivate(
    const SESRequest::Action action, GetIdentityDkimAttributesRequest * const q)
    : GetIdentityDkimAttributesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetIdentityDkimAttributesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetIdentityDkimAttributesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetIdentityDkimAttributesRequest instance.
 */
GetIdentityDkimAttributesRequestPrivate::GetIdentityDkimAttributesRequestPrivate(
    const GetIdentityDkimAttributesRequestPrivate &other, GetIdentityDkimAttributesRequest * const q)
    : GetIdentityDkimAttributesPrivate(other, q)
{

}

} // namespace SES
} // namespace AWS
