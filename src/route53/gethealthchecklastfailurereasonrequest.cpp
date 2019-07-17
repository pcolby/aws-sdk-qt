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

#include "gethealthchecklastfailurereasonrequest.h"
#include "gethealthchecklastfailurereasonrequest_p.h"
#include "gethealthchecklastfailurereasonresponse.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::GetHealthCheckLastFailureReasonRequest
 * \brief The GetHealthCheckLastFailureReasonRequest class provides an interface for Route53 GetHealthCheckLastFailureReason requests.
 *
 * \inmodule QtAwsRoute53
 *
 *
 * \sa Route53Client::getHealthCheckLastFailureReason
 */

/*!
 * Constructs a copy of \a other.
 */
GetHealthCheckLastFailureReasonRequest::GetHealthCheckLastFailureReasonRequest(const GetHealthCheckLastFailureReasonRequest &other)
    : Route53Request(new GetHealthCheckLastFailureReasonRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetHealthCheckLastFailureReasonRequest object.
 */
GetHealthCheckLastFailureReasonRequest::GetHealthCheckLastFailureReasonRequest()
    : Route53Request(new GetHealthCheckLastFailureReasonRequestPrivate(Route53Request::GetHealthCheckLastFailureReasonAction, this))
{

}

/*!
 * \reimp
 */
bool GetHealthCheckLastFailureReasonRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetHealthCheckLastFailureReasonResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetHealthCheckLastFailureReasonRequest::response(QNetworkReply * const reply) const
{
    return new GetHealthCheckLastFailureReasonResponse(*this, reply);
}

/*!
 * \class QtAws::Route53::GetHealthCheckLastFailureReasonRequestPrivate
 * \brief The GetHealthCheckLastFailureReasonRequestPrivate class provides private implementation for GetHealthCheckLastFailureReasonRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a GetHealthCheckLastFailureReasonRequestPrivate object for Route53 \a action,
 * with public implementation \a q.
 */
GetHealthCheckLastFailureReasonRequestPrivate::GetHealthCheckLastFailureReasonRequestPrivate(
    const Route53Request::Action action, GetHealthCheckLastFailureReasonRequest * const q)
    : Route53RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetHealthCheckLastFailureReasonRequest
 * class' copy constructor.
 */
GetHealthCheckLastFailureReasonRequestPrivate::GetHealthCheckLastFailureReasonRequestPrivate(
    const GetHealthCheckLastFailureReasonRequestPrivate &other, GetHealthCheckLastFailureReasonRequest * const q)
    : Route53RequestPrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws
