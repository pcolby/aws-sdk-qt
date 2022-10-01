// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
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
