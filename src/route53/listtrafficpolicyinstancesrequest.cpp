// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
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
