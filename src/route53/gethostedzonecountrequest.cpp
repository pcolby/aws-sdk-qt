/*
    Copyright 2013-2018 Paul Colby

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

#include "gethostedzonecountrequest.h"
#include "gethostedzonecountrequest_p.h"
#include "gethostedzonecountresponse.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::GetHostedZoneCountRequest
 * \brief The GetHostedZoneCountRequest class provides an interface for Route53 GetHostedZoneCount requests.
 *
 * \inmodule QtAwsRoute53
 *
 *
 * \sa Route53Client::getHostedZoneCount
 */

/*!
 * Constructs a copy of \a other.
 */
GetHostedZoneCountRequest::GetHostedZoneCountRequest(const GetHostedZoneCountRequest &other)
    : Route53Request(new GetHostedZoneCountRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetHostedZoneCountRequest object.
 */
GetHostedZoneCountRequest::GetHostedZoneCountRequest()
    : Route53Request(new GetHostedZoneCountRequestPrivate(Route53Request::GetHostedZoneCountAction, this))
{

}

/*!
 * \reimp
 */
bool GetHostedZoneCountRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetHostedZoneCountResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetHostedZoneCountRequest::response(QNetworkReply * const reply) const
{
    return new GetHostedZoneCountResponse(*this, reply);
}

/*!
 * \class QtAws::Route53::GetHostedZoneCountRequestPrivate
 * \brief The GetHostedZoneCountRequestPrivate class provides private implementation for GetHostedZoneCountRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a GetHostedZoneCountRequestPrivate object for Route53 \a action,
 * with public implementation \a q.
 */
GetHostedZoneCountRequestPrivate::GetHostedZoneCountRequestPrivate(
    const Route53Request::Action action, GetHostedZoneCountRequest * const q)
    : Route53RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetHostedZoneCountRequest
 * class' copy constructor.
 */
GetHostedZoneCountRequestPrivate::GetHostedZoneCountRequestPrivate(
    const GetHostedZoneCountRequestPrivate &other, GetHostedZoneCountRequest * const q)
    : Route53RequestPrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws
