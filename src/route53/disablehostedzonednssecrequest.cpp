// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disablehostedzonednssecrequest.h"
#include "disablehostedzonednssecrequest_p.h"
#include "disablehostedzonednssecresponse.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::DisableHostedZoneDNSSECRequest
 * \brief The DisableHostedZoneDNSSECRequest class provides an interface for Route53 DisableHostedZoneDNSSEC requests.
 *
 * \inmodule QtAwsRoute53
 *
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
 *
 * \sa Route53Client::disableHostedZoneDNSSEC
 */

/*!
 * Constructs a copy of \a other.
 */
DisableHostedZoneDNSSECRequest::DisableHostedZoneDNSSECRequest(const DisableHostedZoneDNSSECRequest &other)
    : Route53Request(new DisableHostedZoneDNSSECRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DisableHostedZoneDNSSECRequest object.
 */
DisableHostedZoneDNSSECRequest::DisableHostedZoneDNSSECRequest()
    : Route53Request(new DisableHostedZoneDNSSECRequestPrivate(Route53Request::DisableHostedZoneDNSSECAction, this))
{

}

/*!
 * \reimp
 */
bool DisableHostedZoneDNSSECRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DisableHostedZoneDNSSECResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DisableHostedZoneDNSSECRequest::response(QNetworkReply * const reply) const
{
    return new DisableHostedZoneDNSSECResponse(*this, reply);
}

/*!
 * \class QtAws::Route53::DisableHostedZoneDNSSECRequestPrivate
 * \brief The DisableHostedZoneDNSSECRequestPrivate class provides private implementation for DisableHostedZoneDNSSECRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a DisableHostedZoneDNSSECRequestPrivate object for Route53 \a action,
 * with public implementation \a q.
 */
DisableHostedZoneDNSSECRequestPrivate::DisableHostedZoneDNSSECRequestPrivate(
    const Route53Request::Action action, DisableHostedZoneDNSSECRequest * const q)
    : Route53RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DisableHostedZoneDNSSECRequest
 * class' copy constructor.
 */
DisableHostedZoneDNSSECRequestPrivate::DisableHostedZoneDNSSECRequestPrivate(
    const DisableHostedZoneDNSSECRequestPrivate &other, DisableHostedZoneDNSSECRequest * const q)
    : Route53RequestPrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws
