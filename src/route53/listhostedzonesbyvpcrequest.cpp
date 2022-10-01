// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listhostedzonesbyvpcrequest.h"
#include "listhostedzonesbyvpcrequest_p.h"
#include "listhostedzonesbyvpcresponse.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::ListHostedZonesByVPCRequest
 * \brief The ListHostedZonesByVPCRequest class provides an interface for Route53 ListHostedZonesByVPC requests.
 *
 * \inmodule QtAwsRoute53
 *
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
 *
 * \sa Route53Client::listHostedZonesByVPC
 */

/*!
 * Constructs a copy of \a other.
 */
ListHostedZonesByVPCRequest::ListHostedZonesByVPCRequest(const ListHostedZonesByVPCRequest &other)
    : Route53Request(new ListHostedZonesByVPCRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListHostedZonesByVPCRequest object.
 */
ListHostedZonesByVPCRequest::ListHostedZonesByVPCRequest()
    : Route53Request(new ListHostedZonesByVPCRequestPrivate(Route53Request::ListHostedZonesByVPCAction, this))
{

}

/*!
 * \reimp
 */
bool ListHostedZonesByVPCRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListHostedZonesByVPCResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListHostedZonesByVPCRequest::response(QNetworkReply * const reply) const
{
    return new ListHostedZonesByVPCResponse(*this, reply);
}

/*!
 * \class QtAws::Route53::ListHostedZonesByVPCRequestPrivate
 * \brief The ListHostedZonesByVPCRequestPrivate class provides private implementation for ListHostedZonesByVPCRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a ListHostedZonesByVPCRequestPrivate object for Route53 \a action,
 * with public implementation \a q.
 */
ListHostedZonesByVPCRequestPrivate::ListHostedZonesByVPCRequestPrivate(
    const Route53Request::Action action, ListHostedZonesByVPCRequest * const q)
    : Route53RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListHostedZonesByVPCRequest
 * class' copy constructor.
 */
ListHostedZonesByVPCRequestPrivate::ListHostedZonesByVPCRequestPrivate(
    const ListHostedZonesByVPCRequestPrivate &other, ListHostedZonesByVPCRequest * const q)
    : Route53RequestPrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws
