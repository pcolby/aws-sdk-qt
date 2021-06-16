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

#include "getdnssecrequest.h"
#include "getdnssecrequest_p.h"
#include "getdnssecresponse.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::GetDNSSECRequest
 * \brief The GetDNSSECRequest class provides an interface for Route53 GetDNSSEC requests.
 *
 * \inmodule QtAwsRoute53
 *
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
 *
 * \sa Route53Client::getDNSSEC
 */

/*!
 * Constructs a copy of \a other.
 */
GetDNSSECRequest::GetDNSSECRequest(const GetDNSSECRequest &other)
    : Route53Request(new GetDNSSECRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetDNSSECRequest object.
 */
GetDNSSECRequest::GetDNSSECRequest()
    : Route53Request(new GetDNSSECRequestPrivate(Route53Request::GetDNSSECAction, this))
{

}

/*!
 * \reimp
 */
bool GetDNSSECRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetDNSSECResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDNSSECRequest::response(QNetworkReply * const reply) const
{
    return new GetDNSSECResponse(*this, reply);
}

/*!
 * \class QtAws::Route53::GetDNSSECRequestPrivate
 * \brief The GetDNSSECRequestPrivate class provides private implementation for GetDNSSECRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a GetDNSSECRequestPrivate object for Route53 \a action,
 * with public implementation \a q.
 */
GetDNSSECRequestPrivate::GetDNSSECRequestPrivate(
    const Route53Request::Action action, GetDNSSECRequest * const q)
    : Route53RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetDNSSECRequest
 * class' copy constructor.
 */
GetDNSSECRequestPrivate::GetDNSSECRequestPrivate(
    const GetDNSSECRequestPrivate &other, GetDNSSECRequest * const q)
    : Route53RequestPrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws
