/*
    Copyright 2013-2021 Paul Colby

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

#include "createhealthcheckrequest.h"
#include "createhealthcheckrequest_p.h"
#include "createhealthcheckresponse.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::CreateHealthCheckRequest
 * \brief The CreateHealthCheckRequest class provides an interface for Route53 CreateHealthCheck requests.
 *
 * \inmodule QtAwsRoute53
 *
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
 *
 * \sa Route53Client::createHealthCheck
 */

/*!
 * Constructs a copy of \a other.
 */
CreateHealthCheckRequest::CreateHealthCheckRequest(const CreateHealthCheckRequest &other)
    : Route53Request(new CreateHealthCheckRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateHealthCheckRequest object.
 */
CreateHealthCheckRequest::CreateHealthCheckRequest()
    : Route53Request(new CreateHealthCheckRequestPrivate(Route53Request::CreateHealthCheckAction, this))
{

}

/*!
 * \reimp
 */
bool CreateHealthCheckRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateHealthCheckResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateHealthCheckRequest::response(QNetworkReply * const reply) const
{
    return new CreateHealthCheckResponse(*this, reply);
}

/*!
 * \class QtAws::Route53::CreateHealthCheckRequestPrivate
 * \brief The CreateHealthCheckRequestPrivate class provides private implementation for CreateHealthCheckRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a CreateHealthCheckRequestPrivate object for Route53 \a action,
 * with public implementation \a q.
 */
CreateHealthCheckRequestPrivate::CreateHealthCheckRequestPrivate(
    const Route53Request::Action action, CreateHealthCheckRequest * const q)
    : Route53RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateHealthCheckRequest
 * class' copy constructor.
 */
CreateHealthCheckRequestPrivate::CreateHealthCheckRequestPrivate(
    const CreateHealthCheckRequestPrivate &other, CreateHealthCheckRequest * const q)
    : Route53RequestPrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws
