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

#include "listtrafficpolicyinstancesbyhostedzonerequest.h"
#include "listtrafficpolicyinstancesbyhostedzonerequest_p.h"
#include "listtrafficpolicyinstancesbyhostedzoneresponse.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::ListTrafficPolicyInstancesByHostedZoneRequest
 * \brief The ListTrafficPolicyInstancesByHostedZoneRequest class provides an interface for Route53 ListTrafficPolicyInstancesByHostedZone requests.
 *
 * \inmodule QtAwsRoute53
 *
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
 *
 * \sa Route53Client::listTrafficPolicyInstancesByHostedZone
 */

/*!
 * Constructs a copy of \a other.
 */
ListTrafficPolicyInstancesByHostedZoneRequest::ListTrafficPolicyInstancesByHostedZoneRequest(const ListTrafficPolicyInstancesByHostedZoneRequest &other)
    : Route53Request(new ListTrafficPolicyInstancesByHostedZoneRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListTrafficPolicyInstancesByHostedZoneRequest object.
 */
ListTrafficPolicyInstancesByHostedZoneRequest::ListTrafficPolicyInstancesByHostedZoneRequest()
    : Route53Request(new ListTrafficPolicyInstancesByHostedZoneRequestPrivate(Route53Request::ListTrafficPolicyInstancesByHostedZoneAction, this))
{

}

/*!
 * \reimp
 */
bool ListTrafficPolicyInstancesByHostedZoneRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListTrafficPolicyInstancesByHostedZoneResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListTrafficPolicyInstancesByHostedZoneRequest::response(QNetworkReply * const reply) const
{
    return new ListTrafficPolicyInstancesByHostedZoneResponse(*this, reply);
}

/*!
 * \class QtAws::Route53::ListTrafficPolicyInstancesByHostedZoneRequestPrivate
 * \brief The ListTrafficPolicyInstancesByHostedZoneRequestPrivate class provides private implementation for ListTrafficPolicyInstancesByHostedZoneRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a ListTrafficPolicyInstancesByHostedZoneRequestPrivate object for Route53 \a action,
 * with public implementation \a q.
 */
ListTrafficPolicyInstancesByHostedZoneRequestPrivate::ListTrafficPolicyInstancesByHostedZoneRequestPrivate(
    const Route53Request::Action action, ListTrafficPolicyInstancesByHostedZoneRequest * const q)
    : Route53RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListTrafficPolicyInstancesByHostedZoneRequest
 * class' copy constructor.
 */
ListTrafficPolicyInstancesByHostedZoneRequestPrivate::ListTrafficPolicyInstancesByHostedZoneRequestPrivate(
    const ListTrafficPolicyInstancesByHostedZoneRequestPrivate &other, ListTrafficPolicyInstancesByHostedZoneRequest * const q)
    : Route53RequestPrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws
