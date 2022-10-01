// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "enablehostedzonednssecrequest.h"
#include "enablehostedzonednssecrequest_p.h"
#include "enablehostedzonednssecresponse.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::EnableHostedZoneDNSSECRequest
 * \brief The EnableHostedZoneDNSSECRequest class provides an interface for Route53 EnableHostedZoneDNSSEC requests.
 *
 * \inmodule QtAwsRoute53
 *
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
 *
 * \sa Route53Client::enableHostedZoneDNSSEC
 */

/*!
 * Constructs a copy of \a other.
 */
EnableHostedZoneDNSSECRequest::EnableHostedZoneDNSSECRequest(const EnableHostedZoneDNSSECRequest &other)
    : Route53Request(new EnableHostedZoneDNSSECRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a EnableHostedZoneDNSSECRequest object.
 */
EnableHostedZoneDNSSECRequest::EnableHostedZoneDNSSECRequest()
    : Route53Request(new EnableHostedZoneDNSSECRequestPrivate(Route53Request::EnableHostedZoneDNSSECAction, this))
{

}

/*!
 * \reimp
 */
bool EnableHostedZoneDNSSECRequest::isValid() const
{
    return false;
}


/*!
 * Returns a EnableHostedZoneDNSSECResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * EnableHostedZoneDNSSECRequest::response(QNetworkReply * const reply) const
{
    return new EnableHostedZoneDNSSECResponse(*this, reply);
}

/*!
 * \class QtAws::Route53::EnableHostedZoneDNSSECRequestPrivate
 * \brief The EnableHostedZoneDNSSECRequestPrivate class provides private implementation for EnableHostedZoneDNSSECRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a EnableHostedZoneDNSSECRequestPrivate object for Route53 \a action,
 * with public implementation \a q.
 */
EnableHostedZoneDNSSECRequestPrivate::EnableHostedZoneDNSSECRequestPrivate(
    const Route53Request::Action action, EnableHostedZoneDNSSECRequest * const q)
    : Route53RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the EnableHostedZoneDNSSECRequest
 * class' copy constructor.
 */
EnableHostedZoneDNSSECRequestPrivate::EnableHostedZoneDNSSECRequestPrivate(
    const EnableHostedZoneDNSSECRequestPrivate &other, EnableHostedZoneDNSSECRequest * const q)
    : Route53RequestPrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws
