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

#include "getgeolocationrequest.h"
#include "getgeolocationrequest_p.h"
#include "getgeolocationresponse.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/**
 * @class  GetGeoLocationRequest
 *
 * @brief  Implements Route53 GetGeoLocation requests.
 *
 * @see    Route53Client::getGeoLocation
 */

/**
 * @brief  Constructs a new GetGeoLocationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetGeoLocationRequest::GetGeoLocationRequest(const GetGeoLocationRequest &other)
    : Route53Request(new GetGeoLocationRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetGeoLocationRequest object.
 */
GetGeoLocationRequest::GetGeoLocationRequest()
    : Route53Request(new GetGeoLocationRequestPrivate(Route53Request::GetGeoLocationAction, this))
{

}

bool GetGeoLocationRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetGeoLocationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetGeoLocationResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  Route53Client::send
 */
AwsAbstractResponse * GetGeoLocationRequest::response(QNetworkReply * const reply) const
{
    return new GetGeoLocationResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetGeoLocationRequestPrivate
 *
 * @brief  Private implementation for GetGeoLocationRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetGeoLocationRequestPrivate object.
 *
 * @param  action  Route53 action being performed.
 * @param  q       Pointer to this object's public GetGeoLocationRequest instance.
 */
GetGeoLocationRequestPrivate::GetGeoLocationRequestPrivate(
    const Route53Request::Action action, GetGeoLocationRequest * const q)
    : GetGeoLocationPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetGeoLocationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetGeoLocationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetGeoLocationRequest instance.
 */
GetGeoLocationRequestPrivate::GetGeoLocationRequestPrivate(
    const GetGeoLocationRequestPrivate &other, GetGeoLocationRequest * const q)
    : GetGeoLocationPrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws
