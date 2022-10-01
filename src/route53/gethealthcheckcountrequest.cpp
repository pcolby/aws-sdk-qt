// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "gethealthcheckcountrequest.h"
#include "gethealthcheckcountrequest_p.h"
#include "gethealthcheckcountresponse.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::GetHealthCheckCountRequest
 * \brief The GetHealthCheckCountRequest class provides an interface for Route53 GetHealthCheckCount requests.
 *
 * \inmodule QtAwsRoute53
 *
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
 *
 * \sa Route53Client::getHealthCheckCount
 */

/*!
 * Constructs a copy of \a other.
 */
GetHealthCheckCountRequest::GetHealthCheckCountRequest(const GetHealthCheckCountRequest &other)
    : Route53Request(new GetHealthCheckCountRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetHealthCheckCountRequest object.
 */
GetHealthCheckCountRequest::GetHealthCheckCountRequest()
    : Route53Request(new GetHealthCheckCountRequestPrivate(Route53Request::GetHealthCheckCountAction, this))
{

}

/*!
 * \reimp
 */
bool GetHealthCheckCountRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetHealthCheckCountResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetHealthCheckCountRequest::response(QNetworkReply * const reply) const
{
    return new GetHealthCheckCountResponse(*this, reply);
}

/*!
 * \class QtAws::Route53::GetHealthCheckCountRequestPrivate
 * \brief The GetHealthCheckCountRequestPrivate class provides private implementation for GetHealthCheckCountRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a GetHealthCheckCountRequestPrivate object for Route53 \a action,
 * with public implementation \a q.
 */
GetHealthCheckCountRequestPrivate::GetHealthCheckCountRequestPrivate(
    const Route53Request::Action action, GetHealthCheckCountRequest * const q)
    : Route53RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetHealthCheckCountRequest
 * class' copy constructor.
 */
GetHealthCheckCountRequestPrivate::GetHealthCheckCountRequestPrivate(
    const GetHealthCheckCountRequestPrivate &other, GetHealthCheckCountRequest * const q)
    : Route53RequestPrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws
