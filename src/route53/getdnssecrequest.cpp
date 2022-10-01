// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
