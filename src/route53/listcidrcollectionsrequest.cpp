// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listcidrcollectionsrequest.h"
#include "listcidrcollectionsrequest_p.h"
#include "listcidrcollectionsresponse.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::ListCidrCollectionsRequest
 * \brief The ListCidrCollectionsRequest class provides an interface for Route53 ListCidrCollections requests.
 *
 * \inmodule QtAwsRoute53
 *
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
 *
 * \sa Route53Client::listCidrCollections
 */

/*!
 * Constructs a copy of \a other.
 */
ListCidrCollectionsRequest::ListCidrCollectionsRequest(const ListCidrCollectionsRequest &other)
    : Route53Request(new ListCidrCollectionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListCidrCollectionsRequest object.
 */
ListCidrCollectionsRequest::ListCidrCollectionsRequest()
    : Route53Request(new ListCidrCollectionsRequestPrivate(Route53Request::ListCidrCollectionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListCidrCollectionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListCidrCollectionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListCidrCollectionsRequest::response(QNetworkReply * const reply) const
{
    return new ListCidrCollectionsResponse(*this, reply);
}

/*!
 * \class QtAws::Route53::ListCidrCollectionsRequestPrivate
 * \brief The ListCidrCollectionsRequestPrivate class provides private implementation for ListCidrCollectionsRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a ListCidrCollectionsRequestPrivate object for Route53 \a action,
 * with public implementation \a q.
 */
ListCidrCollectionsRequestPrivate::ListCidrCollectionsRequestPrivate(
    const Route53Request::Action action, ListCidrCollectionsRequest * const q)
    : Route53RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListCidrCollectionsRequest
 * class' copy constructor.
 */
ListCidrCollectionsRequestPrivate::ListCidrCollectionsRequestPrivate(
    const ListCidrCollectionsRequestPrivate &other, ListCidrCollectionsRequest * const q)
    : Route53RequestPrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws
