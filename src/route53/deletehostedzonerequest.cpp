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

#include "deletehostedzonerequest.h"
#include "deletehostedzonerequest_p.h"
#include "deletehostedzoneresponse.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::DeleteHostedZoneRequest
 * \brief The DeleteHostedZoneRequest class provides an interface for Route53 DeleteHostedZone requests.
 *
 * \inmodule QtAwsRoute53
 *
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
 *
 * \sa Route53Client::deleteHostedZone
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteHostedZoneRequest::DeleteHostedZoneRequest(const DeleteHostedZoneRequest &other)
    : Route53Request(new DeleteHostedZoneRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteHostedZoneRequest object.
 */
DeleteHostedZoneRequest::DeleteHostedZoneRequest()
    : Route53Request(new DeleteHostedZoneRequestPrivate(Route53Request::DeleteHostedZoneAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteHostedZoneRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteHostedZoneResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteHostedZoneRequest::response(QNetworkReply * const reply) const
{
    return new DeleteHostedZoneResponse(*this, reply);
}

/*!
 * \class QtAws::Route53::DeleteHostedZoneRequestPrivate
 * \brief The DeleteHostedZoneRequestPrivate class provides private implementation for DeleteHostedZoneRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a DeleteHostedZoneRequestPrivate object for Route53 \a action,
 * with public implementation \a q.
 */
DeleteHostedZoneRequestPrivate::DeleteHostedZoneRequestPrivate(
    const Route53Request::Action action, DeleteHostedZoneRequest * const q)
    : Route53RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteHostedZoneRequest
 * class' copy constructor.
 */
DeleteHostedZoneRequestPrivate::DeleteHostedZoneRequestPrivate(
    const DeleteHostedZoneRequestPrivate &other, DeleteHostedZoneRequest * const q)
    : Route53RequestPrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws
