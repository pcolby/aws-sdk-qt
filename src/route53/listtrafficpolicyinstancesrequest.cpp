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

#include "listtrafficpolicyinstancesrequest.h"
#include "listtrafficpolicyinstancesrequest_p.h"
#include "listtrafficpolicyinstancesresponse.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::ListTrafficPolicyInstancesRequest
 * \brief The ListTrafficPolicyInstancesRequest class provides an interface for Route53 ListTrafficPolicyInstances requests.
 *
 * \inmodule QtAwsRoute53
 *
 *
 * \sa Route53Client::listTrafficPolicyInstances
 */

/*!
 * Constructs a copy of \a other.
 */
ListTrafficPolicyInstancesRequest::ListTrafficPolicyInstancesRequest(const ListTrafficPolicyInstancesRequest &other)
    : Route53Request(new ListTrafficPolicyInstancesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListTrafficPolicyInstancesRequest object.
 */
ListTrafficPolicyInstancesRequest::ListTrafficPolicyInstancesRequest()
    : Route53Request(new ListTrafficPolicyInstancesRequestPrivate(Route53Request::ListTrafficPolicyInstancesAction, this))
{

}

/*!
 * \reimp
 */
bool ListTrafficPolicyInstancesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListTrafficPolicyInstancesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListTrafficPolicyInstancesRequest::response(QNetworkReply * const reply) const
{
    return new ListTrafficPolicyInstancesResponse(*this, reply);
}

/*!
 * \class QtAws::Route53::ListTrafficPolicyInstancesRequestPrivate
 * \brief The ListTrafficPolicyInstancesRequestPrivate class provides private implementation for ListTrafficPolicyInstancesRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a ListTrafficPolicyInstancesRequestPrivate object for Route53 \a action,
 * with public implementation \a q.
 */
ListTrafficPolicyInstancesRequestPrivate::ListTrafficPolicyInstancesRequestPrivate(
    const Route53Request::Action action, ListTrafficPolicyInstancesRequest * const q)
    : Route53RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListTrafficPolicyInstancesRequest
 * class' copy constructor.
 */
ListTrafficPolicyInstancesRequestPrivate::ListTrafficPolicyInstancesRequestPrivate(
    const ListTrafficPolicyInstancesRequestPrivate &other, ListTrafficPolicyInstancesRequest * const q)
    : Route53RequestPrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws
