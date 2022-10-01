// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listtrafficpolicyversionsrequest.h"
#include "listtrafficpolicyversionsrequest_p.h"
#include "listtrafficpolicyversionsresponse.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::ListTrafficPolicyVersionsRequest
 * \brief The ListTrafficPolicyVersionsRequest class provides an interface for Route53 ListTrafficPolicyVersions requests.
 *
 * \inmodule QtAwsRoute53
 *
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
 *
 * \sa Route53Client::listTrafficPolicyVersions
 */

/*!
 * Constructs a copy of \a other.
 */
ListTrafficPolicyVersionsRequest::ListTrafficPolicyVersionsRequest(const ListTrafficPolicyVersionsRequest &other)
    : Route53Request(new ListTrafficPolicyVersionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListTrafficPolicyVersionsRequest object.
 */
ListTrafficPolicyVersionsRequest::ListTrafficPolicyVersionsRequest()
    : Route53Request(new ListTrafficPolicyVersionsRequestPrivate(Route53Request::ListTrafficPolicyVersionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListTrafficPolicyVersionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListTrafficPolicyVersionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListTrafficPolicyVersionsRequest::response(QNetworkReply * const reply) const
{
    return new ListTrafficPolicyVersionsResponse(*this, reply);
}

/*!
 * \class QtAws::Route53::ListTrafficPolicyVersionsRequestPrivate
 * \brief The ListTrafficPolicyVersionsRequestPrivate class provides private implementation for ListTrafficPolicyVersionsRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a ListTrafficPolicyVersionsRequestPrivate object for Route53 \a action,
 * with public implementation \a q.
 */
ListTrafficPolicyVersionsRequestPrivate::ListTrafficPolicyVersionsRequestPrivate(
    const Route53Request::Action action, ListTrafficPolicyVersionsRequest * const q)
    : Route53RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListTrafficPolicyVersionsRequest
 * class' copy constructor.
 */
ListTrafficPolicyVersionsRequestPrivate::ListTrafficPolicyVersionsRequestPrivate(
    const ListTrafficPolicyVersionsRequestPrivate &other, ListTrafficPolicyVersionsRequest * const q)
    : Route53RequestPrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws
