/*
    Copyright 2013-2019 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "gethostedzonelimitrequest.h"
#include "gethostedzonelimitrequest_p.h"
#include "gethostedzonelimitresponse.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::GetHostedZoneLimitRequest
 * \brief The GetHostedZoneLimitRequest class provides an interface for Route53 GetHostedZoneLimit requests.
 *
 * \inmodule QtAwsRoute53
 *
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
 *
 * \sa Route53Client::getHostedZoneLimit
 */

/*!
 * Constructs a copy of \a other.
 */
GetHostedZoneLimitRequest::GetHostedZoneLimitRequest(const GetHostedZoneLimitRequest &other)
    : Route53Request(new GetHostedZoneLimitRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetHostedZoneLimitRequest object.
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
 * Returns a GetHostedZoneLimitResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetHostedZoneLimitRequest::response(QNetworkReply * const reply) const
{
    return new GetHostedZoneLimitResponse(*this, reply);
}

/*!
 * \class QtAws::Route53::GetHostedZoneLimitRequestPrivate
 * \brief The GetHostedZoneLimitRequestPrivate class provides private implementation for GetHostedZoneLimitRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a GetHostedZoneLimitRequestPrivate object for Route53 \a action,
 * with public implementation \a q.
 */
GetHostedZoneLimitRequestPrivate::GetHostedZoneLimitRequestPrivate(
    const Route53Request::Action action, GetHostedZoneLimitRequest * const q)
    : Route53RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetHostedZoneLimitRequest
 * class' copy constructor.
 */
GetHostedZoneLimitRequestPrivate::GetHostedZoneLimitRequestPrivate(
    const GetHostedZoneLimitRequestPrivate &other, GetHostedZoneLimitRequest * const q)
    : Route53RequestPrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws
