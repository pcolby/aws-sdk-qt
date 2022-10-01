// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
