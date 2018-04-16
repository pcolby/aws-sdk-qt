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

#include "gethostedzonelimitrequest.h"
#include "gethostedzonelimitrequest_p.h"
#include "gethostedzonelimitresponse.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::GetHostedZoneLimitRequest
 *
 * \brief The GetHostedZoneLimitRequest class encapsulates Route53 GetHostedZoneLimit requests.
 *
 * \ingroup Route53
 *
 *
 * \sa Route53Client::getHostedZoneLimit
 */

/*!
 * @brief  Constructs a new GetHostedZoneLimitRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetHostedZoneLimitRequest::GetHostedZoneLimitRequest(const GetHostedZoneLimitRequest &other)
    : Route53Request(new GetHostedZoneLimitRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new GetHostedZoneLimitRequest object.
 */
GetHostedZoneLimitRequest::GetHostedZoneLimitRequest()
    : Route53Request(new GetHostedZoneLimitRequestPrivate(Route53Request::GetHostedZoneLimitAction, this))
{

}

/*!
 * \reimp
 */
bool GetHostedZoneLimitRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an GetHostedZoneLimitResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetHostedZoneLimitResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  Route53Client::send
 */
QtAws::Core::AwsAbstractResponse * GetHostedZoneLimitRequest::response(QNetworkReply * const reply) const
{
    return new GetHostedZoneLimitResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  GetHostedZoneLimitRequestPrivate
 *
 * @brief  Private implementation for GetHostedZoneLimitRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetHostedZoneLimitRequestPrivate object.
 *
 * @param  action  Route53 action being performed.
 * @param  q       Pointer to this object's public GetHostedZoneLimitRequest instance.
 */
GetHostedZoneLimitRequestPrivate::GetHostedZoneLimitRequestPrivate(
    const Route53Request::Action action, GetHostedZoneLimitRequest * const q)
    : Route53RequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new GetHostedZoneLimitRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetHostedZoneLimitRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetHostedZoneLimitRequest instance.
 */
GetHostedZoneLimitRequestPrivate::GetHostedZoneLimitRequestPrivate(
    const GetHostedZoneLimitRequestPrivate &other, GetHostedZoneLimitRequest * const q)
    : Route53RequestPrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws
