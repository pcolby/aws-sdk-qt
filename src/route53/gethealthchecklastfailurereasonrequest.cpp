// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "gethealthchecklastfailurereasonrequest.h"
#include "gethealthchecklastfailurereasonrequest_p.h"
#include "gethealthchecklastfailurereasonresponse.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::GetHealthCheckLastFailureReasonRequest
 * \brief The GetHealthCheckLastFailureReasonRequest class provides an interface for Route53 GetHealthCheckLastFailureReason requests.
 *
 * \inmodule QtAwsRoute53
 *
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
 *
 * \sa Route53Client::getHealthCheckLastFailureReason
 */

/*!
 * Constructs a copy of \a other.
 */
GetHealthCheckLastFailureReasonRequest::GetHealthCheckLastFailureReasonRequest(const GetHealthCheckLastFailureReasonRequest &other)
    : Route53Request(new GetHealthCheckLastFailureReasonRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetHealthCheckLastFailureReasonRequest object.
 */
GetHealthCheckLastFailureReasonRequest::GetHealthCheckLastFailureReasonRequest()
    : Route53Request(new GetHealthCheckLastFailureReasonRequestPrivate(Route53Request::GetHealthCheckLastFailureReasonAction, this))
{

}

/*!
 * \reimp
 */
bool GetHealthCheckLastFailureReasonRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetHealthCheckLastFailureReasonResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetHealthCheckLastFailureReasonRequest::response(QNetworkReply * const reply) const
{
    return new GetHealthCheckLastFailureReasonResponse(*this, reply);
}

/*!
 * \class QtAws::Route53::GetHealthCheckLastFailureReasonRequestPrivate
 * \brief The GetHealthCheckLastFailureReasonRequestPrivate class provides private implementation for GetHealthCheckLastFailureReasonRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a GetHealthCheckLastFailureReasonRequestPrivate object for Route53 \a action,
 * with public implementation \a q.
 */
GetHealthCheckLastFailureReasonRequestPrivate::GetHealthCheckLastFailureReasonRequestPrivate(
    const Route53Request::Action action, GetHealthCheckLastFailureReasonRequest * const q)
    : Route53RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetHealthCheckLastFailureReasonRequest
 * class' copy constructor.
 */
GetHealthCheckLastFailureReasonRequestPrivate::GetHealthCheckLastFailureReasonRequestPrivate(
    const GetHealthCheckLastFailureReasonRequestPrivate &other, GetHealthCheckLastFailureReasonRequest * const q)
    : Route53RequestPrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws
