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

#include "gethostedzonecountrequest.h"
#include "gethostedzonecountrequest_p.h"
#include "gethostedzonecountresponse.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/**
 * @class  GetHostedZoneCountRequest
 *
 * @brief  Implements Route53 GetHostedZoneCount requests.
 *
 * @see    Route53Client::getHostedZoneCount
 */

/**
 * @brief  Constructs a new GetHostedZoneCountRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetHostedZoneCountRequest::GetHostedZoneCountRequest(const GetHostedZoneCountRequest &other)
    : Route53Request(new GetHostedZoneCountRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetHostedZoneCountRequest object.
 */
GetHostedZoneCountRequest::GetHostedZoneCountRequest()
    : Route53Request(new GetHostedZoneCountRequestPrivate(Route53Request::GetHostedZoneCountAction, this))
{

}

bool GetHostedZoneCountRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetHostedZoneCountResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetHostedZoneCountResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  Route53Client::send
 */
AwsAbstractResponse * GetHostedZoneCountRequest::response(QNetworkReply * const reply) const
{
    return new GetHostedZoneCountResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetHostedZoneCountRequestPrivate
 *
 * @brief  Private implementation for GetHostedZoneCountRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetHostedZoneCountRequestPrivate object.
 *
 * @param  action  Route53 action being performed.
 * @param  q       Pointer to this object's public GetHostedZoneCountRequest instance.
 */
GetHostedZoneCountRequestPrivate::GetHostedZoneCountRequestPrivate(
    const Route53Request::Action action, GetHostedZoneCountRequest * const q)
    : GetHostedZoneCountPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetHostedZoneCountRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetHostedZoneCountRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetHostedZoneCountRequest instance.
 */
GetHostedZoneCountRequestPrivate::GetHostedZoneCountRequestPrivate(
    const GetHostedZoneCountRequestPrivate &other, GetHostedZoneCountRequest * const q)
    : GetHostedZoneCountPrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws
