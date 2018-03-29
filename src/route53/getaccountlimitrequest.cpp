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

#include "getaccountlimitrequest.h"
#include "getaccountlimitrequest_p.h"
#include "getaccountlimitresponse.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/**
 * @class  GetAccountLimitRequest
 *
 * @brief  Implements Route53 GetAccountLimit requests.
 *
 * @see    Route53Client::getAccountLimit
 */

/**
 * @brief  Constructs a new GetAccountLimitRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetAccountLimitRequest::GetAccountLimitRequest(const GetAccountLimitRequest &other)
    : Route53Request(new GetAccountLimitRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetAccountLimitRequest object.
 */
GetAccountLimitRequest::GetAccountLimitRequest()
    : Route53Request(new GetAccountLimitRequestPrivate(Route53Request::GetAccountLimitAction, this))
{

}

bool GetAccountLimitRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetAccountLimitResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetAccountLimitResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  Route53Client::send
 */
QtAws::Core::AwsAbstractResponse * GetAccountLimitRequest::response(QNetworkReply * const reply) const
{
    return new GetAccountLimitResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetAccountLimitRequestPrivate
 *
 * @brief  Private implementation for GetAccountLimitRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetAccountLimitRequestPrivate object.
 *
 * @param  action  Route53 action being performed.
 * @param  q       Pointer to this object's public GetAccountLimitRequest instance.
 */
GetAccountLimitRequestPrivate::GetAccountLimitRequestPrivate(
    const Route53Request::Action action, GetAccountLimitRequest * const q)
    : GetAccountLimitPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetAccountLimitRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetAccountLimitRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetAccountLimitRequest instance.
 */
GetAccountLimitRequestPrivate::GetAccountLimitRequestPrivate(
    const GetAccountLimitRequestPrivate &other, GetAccountLimitRequest * const q)
    : GetAccountLimitPrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws
