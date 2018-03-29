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

#include "getattributevaluesrequest.h"
#include "getattributevaluesrequest_p.h"
#include "getattributevaluesresponse.h"
#include "pricingrequest_p.h"

namespace AWS {
namespace Pricing {

/**
 * @class  GetAttributeValuesRequest
 *
 * @brief  Implements Pricing GetAttributeValues requests.
 *
 * @see    PricingClient::getAttributeValues
 */

/**
 * @brief  Constructs a new GetAttributeValuesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetAttributeValuesRequest::GetAttributeValuesRequest(const GetAttributeValuesRequest &other)
    : PricingRequest(new GetAttributeValuesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetAttributeValuesRequest object.
 */
GetAttributeValuesRequest::GetAttributeValuesRequest()
    : PricingRequest(new GetAttributeValuesRequestPrivate(PricingRequest::GetAttributeValuesAction, this))
{

}

bool GetAttributeValuesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetAttributeValuesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetAttributeValuesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  PricingClient::send
 */
AwsAbstractResponse * GetAttributeValuesRequest::response(QNetworkReply * const reply) const
{
    return new GetAttributeValuesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetAttributeValuesRequestPrivate
 *
 * @brief  Private implementation for GetAttributeValuesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetAttributeValuesRequestPrivate object.
 *
 * @param  action  Pricing action being performed.
 * @param  q       Pointer to this object's public GetAttributeValuesRequest instance.
 */
GetAttributeValuesRequestPrivate::GetAttributeValuesRequestPrivate(
    const PricingRequest::Action action, GetAttributeValuesRequest * const q)
    : GetAttributeValuesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetAttributeValuesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetAttributeValuesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetAttributeValuesRequest instance.
 */
GetAttributeValuesRequestPrivate::GetAttributeValuesRequestPrivate(
    const GetAttributeValuesRequestPrivate &other, GetAttributeValuesRequest * const q)
    : GetAttributeValuesPrivate(other, q)
{

}

} // namespace Pricing
} // namespace AWS
