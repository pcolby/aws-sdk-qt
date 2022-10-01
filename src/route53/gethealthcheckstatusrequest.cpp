// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "gethealthcheckstatusrequest.h"
#include "gethealthcheckstatusrequest_p.h"
#include "gethealthcheckstatusresponse.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::GetHealthCheckStatusRequest
 * \brief The GetHealthCheckStatusRequest class provides an interface for Route53 GetHealthCheckStatus requests.
 *
 * \inmodule QtAwsRoute53
 *
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
 *
 * \sa Route53Client::getHealthCheckStatus
 */

/*!
 * Constructs a copy of \a other.
 */
GetHealthCheckStatusRequest::GetHealthCheckStatusRequest(const GetHealthCheckStatusRequest &other)
    : Route53Request(new GetHealthCheckStatusRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetHealthCheckStatusRequest object.
 */
GetHealthCheckStatusRequest::GetHealthCheckStatusRequest()
    : Route53Request(new GetHealthCheckStatusRequestPrivate(Route53Request::GetHealthCheckStatusAction, this))
{

}

/*!
 * \reimp
 */
bool GetHealthCheckStatusRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetHealthCheckStatusResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetHealthCheckStatusRequest::response(QNetworkReply * const reply) const
{
    return new GetHealthCheckStatusResponse(*this, reply);
}

/*!
 * \class QtAws::Route53::GetHealthCheckStatusRequestPrivate
 * \brief The GetHealthCheckStatusRequestPrivate class provides private implementation for GetHealthCheckStatusRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a GetHealthCheckStatusRequestPrivate object for Route53 \a action,
 * with public implementation \a q.
 */
GetHealthCheckStatusRequestPrivate::GetHealthCheckStatusRequestPrivate(
    const Route53Request::Action action, GetHealthCheckStatusRequest * const q)
    : Route53RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetHealthCheckStatusRequest
 * class' copy constructor.
 */
GetHealthCheckStatusRequestPrivate::GetHealthCheckStatusRequestPrivate(
    const GetHealthCheckStatusRequestPrivate &other, GetHealthCheckStatusRequest * const q)
    : Route53RequestPrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws
