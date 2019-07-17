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

#include "listtrafficpolicyinstancesbypolicyrequest.h"
#include "listtrafficpolicyinstancesbypolicyrequest_p.h"
#include "listtrafficpolicyinstancesbypolicyresponse.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::ListTrafficPolicyInstancesByPolicyRequest
 * \brief The ListTrafficPolicyInstancesByPolicyRequest class provides an interface for Route53 ListTrafficPolicyInstancesByPolicy requests.
 *
 * \inmodule QtAwsRoute53
 *
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
 *
 * \sa Route53Client::listTrafficPolicyInstancesByPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
ListTrafficPolicyInstancesByPolicyRequest::ListTrafficPolicyInstancesByPolicyRequest(const ListTrafficPolicyInstancesByPolicyRequest &other)
    : Route53Request(new ListTrafficPolicyInstancesByPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListTrafficPolicyInstancesByPolicyRequest object.
 */
ListTrafficPolicyInstancesByPolicyRequest::ListTrafficPolicyInstancesByPolicyRequest()
    : Route53Request(new ListTrafficPolicyInstancesByPolicyRequestPrivate(Route53Request::ListTrafficPolicyInstancesByPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool ListTrafficPolicyInstancesByPolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListTrafficPolicyInstancesByPolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListTrafficPolicyInstancesByPolicyRequest::response(QNetworkReply * const reply) const
{
    return new ListTrafficPolicyInstancesByPolicyResponse(*this, reply);
}

/*!
 * \class QtAws::Route53::ListTrafficPolicyInstancesByPolicyRequestPrivate
 * \brief The ListTrafficPolicyInstancesByPolicyRequestPrivate class provides private implementation for ListTrafficPolicyInstancesByPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a ListTrafficPolicyInstancesByPolicyRequestPrivate object for Route53 \a action,
 * with public implementation \a q.
 */
ListTrafficPolicyInstancesByPolicyRequestPrivate::ListTrafficPolicyInstancesByPolicyRequestPrivate(
    const Route53Request::Action action, ListTrafficPolicyInstancesByPolicyRequest * const q)
    : Route53RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListTrafficPolicyInstancesByPolicyRequest
 * class' copy constructor.
 */
ListTrafficPolicyInstancesByPolicyRequestPrivate::ListTrafficPolicyInstancesByPolicyRequestPrivate(
    const ListTrafficPolicyInstancesByPolicyRequestPrivate &other, ListTrafficPolicyInstancesByPolicyRequest * const q)
    : Route53RequestPrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws
