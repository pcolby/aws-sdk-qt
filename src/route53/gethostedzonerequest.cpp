// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "gethostedzonerequest.h"
#include "gethostedzonerequest_p.h"
#include "gethostedzoneresponse.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::GetHostedZoneRequest
 * \brief The GetHostedZoneRequest class provides an interface for Route53 GetHostedZone requests.
 *
 * \inmodule QtAwsRoute53
 *
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
 *
 * \sa Route53Client::getHostedZone
 */

/*!
 * Constructs a copy of \a other.
 */
GetHostedZoneRequest::GetHostedZoneRequest(const GetHostedZoneRequest &other)
    : Route53Request(new GetHostedZoneRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetHostedZoneRequest object.
 */
GetHostedZoneRequest::GetHostedZoneRequest()
    : Route53Request(new GetHostedZoneRequestPrivate(Route53Request::GetHostedZoneAction, this))
{

}

/*!
 * \reimp
 */
bool GetHostedZoneRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetHostedZoneResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetHostedZoneRequest::response(QNetworkReply * const reply) const
{
    return new GetHostedZoneResponse(*this, reply);
}

/*!
 * \class QtAws::Route53::GetHostedZoneRequestPrivate
 * \brief The GetHostedZoneRequestPrivate class provides private implementation for GetHostedZoneRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a GetHostedZoneRequestPrivate object for Route53 \a action,
 * with public implementation \a q.
 */
GetHostedZoneRequestPrivate::GetHostedZoneRequestPrivate(
    const Route53Request::Action action, GetHostedZoneRequest * const q)
    : Route53RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetHostedZoneRequest
 * class' copy constructor.
 */
GetHostedZoneRequestPrivate::GetHostedZoneRequestPrivate(
    const GetHostedZoneRequestPrivate &other, GetHostedZoneRequest * const q)
    : Route53RequestPrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws
