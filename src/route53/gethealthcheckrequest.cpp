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

#include "gethealthcheckrequest.h"
#include "gethealthcheckrequest_p.h"
#include "gethealthcheckresponse.h"
#include "route53request_p.h"

namespace AWS {
namespace Route53 {

/**
 * @class  GetHealthCheckRequest
 *
 * @brief  Implements Route53 GetHealthCheck requests.
 *
 * @see    Route53Client::getHealthCheck
 */

/**
 * @brief  Constructs a new GetHealthCheckRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetHealthCheckRequest::GetHealthCheckRequest(const GetHealthCheckRequest &other)
    : Route53Request(new GetHealthCheckRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetHealthCheckRequest object.
 */
GetHealthCheckRequest::GetHealthCheckRequest()
    : Route53Request(new GetHealthCheckRequestPrivate(Route53Request::GetHealthCheckAction, this))
{

}

bool GetHealthCheckRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetHealthCheckResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetHealthCheckResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  Route53Client::send
 */
AwsAbstractResponse * GetHealthCheckRequest::response(QNetworkReply * const reply) const
{
    return new GetHealthCheckResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetHealthCheckRequestPrivate
 *
 * @brief  Private implementation for GetHealthCheckRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetHealthCheckRequestPrivate object.
 *
 * @param  action  Route53 action being performed.
 * @param  q       Pointer to this object's public GetHealthCheckRequest instance.
 */
GetHealthCheckRequestPrivate::GetHealthCheckRequestPrivate(
    const Route53Request::Action action, GetHealthCheckRequest * const q)
    : GetHealthCheckPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetHealthCheckRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetHealthCheckRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetHealthCheckRequest instance.
 */
GetHealthCheckRequestPrivate::GetHealthCheckRequestPrivate(
    const GetHealthCheckRequestPrivate &other, GetHealthCheckRequest * const q)
    : GetHealthCheckPrivate(other, q)
{

}

} // namespace Route53
} // namespace AWS
