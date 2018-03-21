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

#include "gethealthchecklastfailurereasonrequest.h"
#include "gethealthchecklastfailurereasonrequest_p.h"
#include "gethealthchecklastfailurereasonresponse.h"
#include "route53request_p.h"

namespace AWS {
namespace Route53 {

/**
 * @class  GetHealthCheckLastFailureReasonRequest
 *
 * @brief  Implements Route53 GetHealthCheckLastFailureReason requests.
 *
 * @see    Route53Client::getHealthCheckLastFailureReason
 */

/**
 * @brief  Constructs a new GetHealthCheckLastFailureReasonRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetHealthCheckLastFailureReasonRequest::GetHealthCheckLastFailureReasonRequest(const GetHealthCheckLastFailureReasonRequest &other)
    : Route53Request(new GetHealthCheckLastFailureReasonRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetHealthCheckLastFailureReasonRequest object.
 */
GetHealthCheckLastFailureReasonRequest::GetHealthCheckLastFailureReasonRequest()
    : Route53Request(new GetHealthCheckLastFailureReasonRequestPrivate(Route53Request::GetHealthCheckLastFailureReasonAction, this))
{

}

bool GetHealthCheckLastFailureReasonRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetHealthCheckLastFailureReasonResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetHealthCheckLastFailureReasonResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  Route53Client::send
 */
AwsAbstractResponse * GetHealthCheckLastFailureReasonRequest::response(QNetworkReply * const reply) const
{
    return new GetHealthCheckLastFailureReasonResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetHealthCheckLastFailureReasonRequestPrivate
 *
 * @brief  Private implementation for GetHealthCheckLastFailureReasonRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetHealthCheckLastFailureReasonRequestPrivate object.
 *
 * @param  action  Route53 action being performed.
 * @param  q       Pointer to this object's public GetHealthCheckLastFailureReasonRequest instance.
 */
GetHealthCheckLastFailureReasonRequestPrivate::GetHealthCheckLastFailureReasonRequestPrivate(
    const Route53Request::Action action, GetHealthCheckLastFailureReasonRequest * const q)
    : GetHealthCheckLastFailureReasonPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetHealthCheckLastFailureReasonRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetHealthCheckLastFailureReasonRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetHealthCheckLastFailureReasonRequest instance.
 */
GetHealthCheckLastFailureReasonRequestPrivate::GetHealthCheckLastFailureReasonRequestPrivate(
    const GetHealthCheckLastFailureReasonRequestPrivate &other, GetHealthCheckLastFailureReasonRequest * const q)
    : GetHealthCheckLastFailureReasonPrivate(other, q)
{

}

} // namespace Route53
} // namespace AWS
