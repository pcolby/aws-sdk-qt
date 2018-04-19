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

#include "deletehealthcheckrequest.h"
#include "deletehealthcheckrequest_p.h"
#include "deletehealthcheckresponse.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::DeleteHealthCheckRequest
 * \brief The DeleteHealthCheckRequest class provides an interface for Route53 DeleteHealthCheck requests.
 *
 * \inmodule QtAwsRoute53
 *
 *
 * \sa Route53Client::deleteHealthCheck
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteHealthCheckRequest::DeleteHealthCheckRequest(const DeleteHealthCheckRequest &other)
    : Route53Request(new DeleteHealthCheckRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteHealthCheckRequest object.
 */
DeleteHealthCheckRequest::DeleteHealthCheckRequest()
    : Route53Request(new DeleteHealthCheckRequestPrivate(Route53Request::DeleteHealthCheckAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteHealthCheckRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteHealthCheckResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteHealthCheckRequest::response(QNetworkReply * const reply) const
{
    return new DeleteHealthCheckResponse(*this, reply);
}

/*!
 * \class QtAws::Route53::DeleteHealthCheckRequestPrivate
 * \brief The DeleteHealthCheckRequestPrivate class provides private implementation for DeleteHealthCheckRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a DeleteHealthCheckRequestPrivate object for Route53 \a action,
 * with public implementation \a q.
 */
DeleteHealthCheckRequestPrivate::DeleteHealthCheckRequestPrivate(
    const Route53Request::Action action, DeleteHealthCheckRequest * const q)
    : Route53RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteHealthCheckRequest
 * class' copy constructor.
 */
DeleteHealthCheckRequestPrivate::DeleteHealthCheckRequestPrivate(
    const DeleteHealthCheckRequestPrivate &other, DeleteHealthCheckRequest * const q)
    : Route53RequestPrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws
