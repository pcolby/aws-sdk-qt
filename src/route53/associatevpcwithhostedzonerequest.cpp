// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "associatevpcwithhostedzonerequest.h"
#include "associatevpcwithhostedzonerequest_p.h"
#include "associatevpcwithhostedzoneresponse.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::AssociateVPCWithHostedZoneRequest
 * \brief The AssociateVPCWithHostedZoneRequest class provides an interface for Route53 AssociateVPCWithHostedZone requests.
 *
 * \inmodule QtAwsRoute53
 *
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
 *
 * \sa Route53Client::associateVPCWithHostedZone
 */

/*!
 * Constructs a copy of \a other.
 */
AssociateVPCWithHostedZoneRequest::AssociateVPCWithHostedZoneRequest(const AssociateVPCWithHostedZoneRequest &other)
    : Route53Request(new AssociateVPCWithHostedZoneRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AssociateVPCWithHostedZoneRequest object.
 */
AssociateVPCWithHostedZoneRequest::AssociateVPCWithHostedZoneRequest()
    : Route53Request(new AssociateVPCWithHostedZoneRequestPrivate(Route53Request::AssociateVPCWithHostedZoneAction, this))
{

}

/*!
 * \reimp
 */
bool AssociateVPCWithHostedZoneRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AssociateVPCWithHostedZoneResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AssociateVPCWithHostedZoneRequest::response(QNetworkReply * const reply) const
{
    return new AssociateVPCWithHostedZoneResponse(*this, reply);
}

/*!
 * \class QtAws::Route53::AssociateVPCWithHostedZoneRequestPrivate
 * \brief The AssociateVPCWithHostedZoneRequestPrivate class provides private implementation for AssociateVPCWithHostedZoneRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a AssociateVPCWithHostedZoneRequestPrivate object for Route53 \a action,
 * with public implementation \a q.
 */
AssociateVPCWithHostedZoneRequestPrivate::AssociateVPCWithHostedZoneRequestPrivate(
    const Route53Request::Action action, AssociateVPCWithHostedZoneRequest * const q)
    : Route53RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AssociateVPCWithHostedZoneRequest
 * class' copy constructor.
 */
AssociateVPCWithHostedZoneRequestPrivate::AssociateVPCWithHostedZoneRequestPrivate(
    const AssociateVPCWithHostedZoneRequestPrivate &other, AssociateVPCWithHostedZoneRequest * const q)
    : Route53RequestPrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws
