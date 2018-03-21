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

#include "acceptreservedinstancesexchangequoterequest.h"
#include "acceptreservedinstancesexchangequoterequest_p.h"
#include "acceptreservedinstancesexchangequoteresponse.h"
#include "ec2request_p.h"

namespace AWS {
namespace EC2 {

/**
 * @class  AcceptReservedInstancesExchangeQuoteRequest
 *
 * @brief  Implements EC2 AcceptReservedInstancesExchangeQuote requests.
 *
 * @see    EC2Client::acceptReservedInstancesExchangeQuote
 */

/**
 * @brief  Constructs a new AcceptReservedInstancesExchangeQuoteResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AcceptReservedInstancesExchangeQuoteResponse::AcceptReservedInstancesExchangeQuoteResponse(

/**
 * @brief  Constructs a new AcceptReservedInstancesExchangeQuoteRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AcceptReservedInstancesExchangeQuoteRequest::AcceptReservedInstancesExchangeQuoteRequest(const AcceptReservedInstancesExchangeQuoteRequest &other)
    : EC2Request(new AcceptReservedInstancesExchangeQuoteRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AcceptReservedInstancesExchangeQuoteRequest object.
 */
AcceptReservedInstancesExchangeQuoteRequest::AcceptReservedInstancesExchangeQuoteRequest()
    : EC2Request(new AcceptReservedInstancesExchangeQuoteRequestPrivate(EC2Request::AcceptReservedInstancesExchangeQuoteAction, this))
{

}

bool AcceptReservedInstancesExchangeQuoteRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AcceptReservedInstancesExchangeQuoteResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AcceptReservedInstancesExchangeQuoteResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * AcceptReservedInstancesExchangeQuoteRequest::response(QNetworkReply * const reply) const
{
    return new AcceptReservedInstancesExchangeQuoteResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AcceptReservedInstancesExchangeQuoteRequestPrivate
 *
 * @brief  Private implementation for AcceptReservedInstancesExchangeQuoteRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AcceptReservedInstancesExchangeQuoteRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public AcceptReservedInstancesExchangeQuoteRequest instance.
 */
AcceptReservedInstancesExchangeQuoteRequestPrivate::AcceptReservedInstancesExchangeQuoteRequestPrivate(
    const EC2Request::Action action, AcceptReservedInstancesExchangeQuoteRequest * const q)
    : AcceptReservedInstancesExchangeQuotePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AcceptReservedInstancesExchangeQuoteRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AcceptReservedInstancesExchangeQuoteRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AcceptReservedInstancesExchangeQuoteRequest instance.
 */
AcceptReservedInstancesExchangeQuoteRequestPrivate::AcceptReservedInstancesExchangeQuoteRequestPrivate(
    const AcceptReservedInstancesExchangeQuoteRequestPrivate &other, AcceptReservedInstancesExchangeQuoteRequest * const q)
    : AcceptReservedInstancesExchangeQuotePrivate(other, q)
{

}

} // namespace EC2
} // namespace AWS
