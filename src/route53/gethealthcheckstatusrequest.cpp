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

#include "gethealthcheckstatusrequest.h"
#include "gethealthcheckstatusrequest_p.h"
#include "gethealthcheckstatusresponse.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::GetHealthCheckStatusRequest
 * \brief The GetHealthCheckStatusRequest class provides an interface for Route53 GetHealthCheckStatus requests.
 *
 * \inmodule QtAwsRoute53
 *
 *
 * \sa Route53Client::getHealthCheckStatus
 */

/*!
 * Constructs a copy of \a other.
 */
GetHealthCheckStatusRequest::GetHealthCheckStatusRequest(const GetHealthCheckStatusRequest &other)
    : Route53Request(new GetHealthCheckStatusRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetHealthCheckStatusRequest object.
 */
GetHealthCheckStatusRequest::GetHealthCheckStatusRequest()
    : Route53Request(new GetHealthCheckStatusRequestPrivate(Route53Request::GetHealthCheckStatusAction, this))
{

}

/*!
 * \reimp
 */
bool GetHealthCheckStatusRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetHealthCheckStatusResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetHealthCheckStatusRequest::response(QNetworkReply * const reply) const
{
    return new GetHealthCheckStatusResponse(*this, reply);
}

/*!
 * \class QtAws::Route53::GetHealthCheckStatusRequestPrivate
 * \brief The GetHealthCheckStatusRequestPrivate class provides private implementation for GetHealthCheckStatusRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 *
 * Constructs a GetHealthCheckStatusRequestPrivate object for Route53 \a action with,
 * public implementation \a q.
 */
GetHealthCheckStatusRequestPrivate::GetHealthCheckStatusRequestPrivate(
    const Route53Request::Action action, GetHealthCheckStatusRequest * const q)
    : Route53RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetHealthCheckStatusRequest
 * class' copy constructor.
 */
GetHealthCheckStatusRequestPrivate::GetHealthCheckStatusRequestPrivate(
    const GetHealthCheckStatusRequestPrivate &other, GetHealthCheckStatusRequest * const q)
    : Route53RequestPrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws
