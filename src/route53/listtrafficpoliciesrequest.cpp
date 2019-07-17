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

#include "listtrafficpoliciesrequest.h"
#include "listtrafficpoliciesrequest_p.h"
#include "listtrafficpoliciesresponse.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::ListTrafficPoliciesRequest
 * \brief The ListTrafficPoliciesRequest class provides an interface for Route53 ListTrafficPolicies requests.
 *
 * \inmodule QtAwsRoute53
 *
 *
 * \sa Route53Client::listTrafficPolicies
 */

/*!
 * Constructs a copy of \a other.
 */
ListTrafficPoliciesRequest::ListTrafficPoliciesRequest(const ListTrafficPoliciesRequest &other)
    : Route53Request(new ListTrafficPoliciesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListTrafficPoliciesRequest object.
 */
ListTrafficPoliciesRequest::ListTrafficPoliciesRequest()
    : Route53Request(new ListTrafficPoliciesRequestPrivate(Route53Request::ListTrafficPoliciesAction, this))
{

}

/*!
 * \reimp
 */
bool ListTrafficPoliciesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListTrafficPoliciesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListTrafficPoliciesRequest::response(QNetworkReply * const reply) const
{
    return new ListTrafficPoliciesResponse(*this, reply);
}

/*!
 * \class QtAws::Route53::ListTrafficPoliciesRequestPrivate
 * \brief The ListTrafficPoliciesRequestPrivate class provides private implementation for ListTrafficPoliciesRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a ListTrafficPoliciesRequestPrivate object for Route53 \a action,
 * with public implementation \a q.
 */
ListTrafficPoliciesRequestPrivate::ListTrafficPoliciesRequestPrivate(
    const Route53Request::Action action, ListTrafficPoliciesRequest * const q)
    : Route53RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListTrafficPoliciesRequest
 * class' copy constructor.
 */
ListTrafficPoliciesRequestPrivate::ListTrafficPoliciesRequestPrivate(
    const ListTrafficPoliciesRequestPrivate &other, ListTrafficPoliciesRequest * const q)
    : Route53RequestPrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws
