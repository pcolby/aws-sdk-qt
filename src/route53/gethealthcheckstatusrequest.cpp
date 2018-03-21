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

#include "gethealthcheckstatusrequest.h"
#include "gethealthcheckstatusrequest_p.h"
#include "gethealthcheckstatusresponse.h"
#include "route53request_p.h"

namespace AWS {
namespace Route53 {

/**
 * @class  GetHealthCheckStatusRequest
 *
 * @brief  Implements Route53 GetHealthCheckStatus requests.
 *
 * @see    Route53Client::getHealthCheckStatus
 */

/**
 * @brief  Constructs a new GetHealthCheckStatusResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetHealthCheckStatusResponse::GetHealthCheckStatusResponse(

/**
 * @brief  Constructs a new GetHealthCheckStatusRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetHealthCheckStatusRequest::GetHealthCheckStatusRequest(const GetHealthCheckStatusRequest &other)
    : Route53Request(new GetHealthCheckStatusRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetHealthCheckStatusRequest object.
 */
GetHealthCheckStatusRequest::GetHealthCheckStatusRequest()
    : Route53Request(new GetHealthCheckStatusRequestPrivate(Route53Request::GetHealthCheckStatusAction, this))
{

}

bool GetHealthCheckStatusRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetHealthCheckStatusResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetHealthCheckStatusResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  Route53Client::send
 */
AwsAbstractResponse * GetHealthCheckStatusRequest::response(QNetworkReply * const reply) const
{
    return new GetHealthCheckStatusResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetHealthCheckStatusRequestPrivate
 *
 * @brief  Private implementation for GetHealthCheckStatusRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetHealthCheckStatusRequestPrivate object.
 *
 * @param  action  Route53 action being performed.
 * @param  q       Pointer to this object's public GetHealthCheckStatusRequest instance.
 */
GetHealthCheckStatusRequestPrivate::GetHealthCheckStatusRequestPrivate(
    const Route53Request::Action action, GetHealthCheckStatusRequest * const q)
    : GetHealthCheckStatusPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetHealthCheckStatusRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetHealthCheckStatusRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetHealthCheckStatusRequest instance.
 */
GetHealthCheckStatusRequestPrivate::GetHealthCheckStatusRequestPrivate(
    const GetHealthCheckStatusRequestPrivate &other, GetHealthCheckStatusRequest * const q)
    : GetHealthCheckStatusPrivate(other, q)
{

}
