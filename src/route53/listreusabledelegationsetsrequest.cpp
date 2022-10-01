// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listreusabledelegationsetsrequest.h"
#include "listreusabledelegationsetsrequest_p.h"
#include "listreusabledelegationsetsresponse.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::ListReusableDelegationSetsRequest
 * \brief The ListReusableDelegationSetsRequest class provides an interface for Route53 ListReusableDelegationSets requests.
 *
 * \inmodule QtAwsRoute53
 *
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
 *
 * \sa Route53Client::listReusableDelegationSets
 */

/*!
 * Constructs a copy of \a other.
 */
ListReusableDelegationSetsRequest::ListReusableDelegationSetsRequest(const ListReusableDelegationSetsRequest &other)
    : Route53Request(new ListReusableDelegationSetsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListReusableDelegationSetsRequest object.
 */
ListReusableDelegationSetsRequest::ListReusableDelegationSetsRequest()
    : Route53Request(new ListReusableDelegationSetsRequestPrivate(Route53Request::ListReusableDelegationSetsAction, this))
{

}

/*!
 * \reimp
 */
bool ListReusableDelegationSetsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListReusableDelegationSetsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListReusableDelegationSetsRequest::response(QNetworkReply * const reply) const
{
    return new ListReusableDelegationSetsResponse(*this, reply);
}

/*!
 * \class QtAws::Route53::ListReusableDelegationSetsRequestPrivate
 * \brief The ListReusableDelegationSetsRequestPrivate class provides private implementation for ListReusableDelegationSetsRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a ListReusableDelegationSetsRequestPrivate object for Route53 \a action,
 * with public implementation \a q.
 */
ListReusableDelegationSetsRequestPrivate::ListReusableDelegationSetsRequestPrivate(
    const Route53Request::Action action, ListReusableDelegationSetsRequest * const q)
    : Route53RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListReusableDelegationSetsRequest
 * class' copy constructor.
 */
ListReusableDelegationSetsRequestPrivate::ListReusableDelegationSetsRequestPrivate(
    const ListReusableDelegationSetsRequestPrivate &other, ListReusableDelegationSetsRequest * const q)
    : Route53RequestPrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws
