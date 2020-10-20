/*
    Copyright 2013-2020 Paul Colby

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

#include "updatehealthcheckrequest.h"
#include "updatehealthcheckrequest_p.h"
#include "updatehealthcheckresponse.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::UpdateHealthCheckRequest
 * \brief The UpdateHealthCheckRequest class provides an interface for Route53 UpdateHealthCheck requests.
 *
 * \inmodule QtAwsRoute53
 *
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
 *
 * \sa Route53Client::updateHealthCheck
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateHealthCheckRequest::UpdateHealthCheckRequest(const UpdateHealthCheckRequest &other)
    : Route53Request(new UpdateHealthCheckRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateHealthCheckRequest object.
 */
UpdateHealthCheckRequest::UpdateHealthCheckRequest()
    : Route53Request(new UpdateHealthCheckRequestPrivate(Route53Request::UpdateHealthCheckAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateHealthCheckRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateHealthCheckResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateHealthCheckRequest::response(QNetworkReply * const reply) const
{
    return new UpdateHealthCheckResponse(*this, reply);
}

/*!
 * \class QtAws::Route53::UpdateHealthCheckRequestPrivate
 * \brief The UpdateHealthCheckRequestPrivate class provides private implementation for UpdateHealthCheckRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a UpdateHealthCheckRequestPrivate object for Route53 \a action,
 * with public implementation \a q.
 */
UpdateHealthCheckRequestPrivate::UpdateHealthCheckRequestPrivate(
    const Route53Request::Action action, UpdateHealthCheckRequest * const q)
    : Route53RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateHealthCheckRequest
 * class' copy constructor.
 */
UpdateHealthCheckRequestPrivate::UpdateHealthCheckRequestPrivate(
    const UpdateHealthCheckRequestPrivate &other, UpdateHealthCheckRequest * const q)
    : Route53RequestPrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws
