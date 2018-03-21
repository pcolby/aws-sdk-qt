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

#include "gethealthcheckcountrequest.h"
#include "gethealthcheckcountrequest_p.h"
#include "gethealthcheckcountresponse.h"
#include "route53request_p.h"

namespace AWS {
namespace Route53 {

/**
 * @class  GetHealthCheckCountRequest
 *
 * @brief  Implements Route53 GetHealthCheckCount requests.
 *
 * @see    Route53Client::getHealthCheckCount
 */

/**
 * @brief  Constructs a new GetHealthCheckCountResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetHealthCheckCountResponse::GetHealthCheckCountResponse(

/**
 * @brief  Constructs a new GetHealthCheckCountRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetHealthCheckCountRequest::GetHealthCheckCountRequest(const GetHealthCheckCountRequest &other)
    : Route53Request(new GetHealthCheckCountRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetHealthCheckCountRequest object.
 */
GetHealthCheckCountRequest::GetHealthCheckCountRequest()
    : Route53Request(new GetHealthCheckCountRequestPrivate(Route53Request::GetHealthCheckCountAction, this))
{

}

bool GetHealthCheckCountRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetHealthCheckCountResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetHealthCheckCountResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  Route53Client::send
 */
AwsAbstractResponse * GetHealthCheckCountRequest::response(QNetworkReply * const reply) const
{
    return new GetHealthCheckCountResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetHealthCheckCountRequestPrivate
 *
 * @brief  Private implementation for GetHealthCheckCountRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetHealthCheckCountRequestPrivate object.
 *
 * @param  action  Route53 action being performed.
 * @param  q       Pointer to this object's public GetHealthCheckCountRequest instance.
 */
GetHealthCheckCountRequestPrivate::GetHealthCheckCountRequestPrivate(
    const Route53Request::Action action, GetHealthCheckCountRequest * const q)
    : GetHealthCheckCountPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetHealthCheckCountRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetHealthCheckCountRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetHealthCheckCountRequest instance.
 */
GetHealthCheckCountRequestPrivate::GetHealthCheckCountRequestPrivate(
    const GetHealthCheckCountRequestPrivate &other, GetHealthCheckCountRequest * const q)
    : GetHealthCheckCountPrivate(other, q)
{

}
