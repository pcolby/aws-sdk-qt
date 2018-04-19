/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

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
 *
 * Constructs a AssociateVPCWithHostedZoneRequestPrivate object for Route53 \a action with,
 * public implementation \a q.
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
