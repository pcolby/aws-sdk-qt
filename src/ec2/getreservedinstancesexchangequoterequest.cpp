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

#include "getreservedinstancesexchangequoterequest.h"
#include "getreservedinstancesexchangequoterequest_p.h"
#include "getreservedinstancesexchangequoteresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/**
 * @class  GetReservedInstancesExchangeQuoteRequest
 *
 * @brief  Implements EC2 GetReservedInstancesExchangeQuote requests.
 *
 * @see    EC2Client::getReservedInstancesExchangeQuote
 */

/**
 * @brief  Constructs a new GetReservedInstancesExchangeQuoteRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetReservedInstancesExchangeQuoteRequest::GetReservedInstancesExchangeQuoteRequest(const GetReservedInstancesExchangeQuoteRequest &other)
    : EC2Request(new GetReservedInstancesExchangeQuoteRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetReservedInstancesExchangeQuoteRequest object.
 */
GetReservedInstancesExchangeQuoteRequest::GetReservedInstancesExchangeQuoteRequest()
    : EC2Request(new GetReservedInstancesExchangeQuoteRequestPrivate(EC2Request::GetReservedInstancesExchangeQuoteAction, this))
{

}

bool GetReservedInstancesExchangeQuoteRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetReservedInstancesExchangeQuoteResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetReservedInstancesExchangeQuoteResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  EC2Client::send
 */
QtAws::Core::AwsAbstractResponse * GetReservedInstancesExchangeQuoteRequest::response(QNetworkReply * const reply) const
{
    return new GetReservedInstancesExchangeQuoteResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetReservedInstancesExchangeQuoteRequestPrivate
 *
 * @brief  Private implementation for GetReservedInstancesExchangeQuoteRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetReservedInstancesExchangeQuoteRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public GetReservedInstancesExchangeQuoteRequest instance.
 */
GetReservedInstancesExchangeQuoteRequestPrivate::GetReservedInstancesExchangeQuoteRequestPrivate(
    const EC2Request::Action action, GetReservedInstancesExchangeQuoteRequest * const q)
    : EC2RequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetReservedInstancesExchangeQuoteRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetReservedInstancesExchangeQuoteRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetReservedInstancesExchangeQuoteRequest instance.
 */
GetReservedInstancesExchangeQuoteRequestPrivate::GetReservedInstancesExchangeQuoteRequestPrivate(
    const GetReservedInstancesExchangeQuoteRequestPrivate &other, GetReservedInstancesExchangeQuoteRequest * const q)
    : EC2RequestPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
