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
