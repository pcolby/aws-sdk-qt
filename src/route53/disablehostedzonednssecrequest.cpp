/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
