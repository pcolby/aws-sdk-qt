// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "gethealthcheckrequest.h"
#include "gethealthcheckrequest_p.h"
#include "gethealthcheckresponse.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::GetHealthCheckRequest
 * \brief The GetHealthCheckRequest class provides an interface for Route53 GetHealthCheck requests.
 *
 * \inmodule QtAwsRoute53
 *
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
 *
 * \sa Route53Client::getHealthCheck
 */

/*!
 * Constructs a copy of \a other.
 */
GetHealthCheckRequest::GetHealthCheckRequest(const GetHealthCheckRequest &other)
    : Route53Request(new GetHealthCheckRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetHealthCheckRequest object.
 */
GetHealthCheckRequest::GetHealthCheckRequest()
    : Route53Request(new GetHealthCheckRequestPrivate(Route53Request::GetHealthCheckAction, this))
{

}

/*!
 * \reimp
 */
bool GetHealthCheckRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetHealthCheckResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetHealthCheckRequest::response(QNetworkReply * const reply) const
{
    return new GetHealthCheckResponse(*this, reply);
}

/*!
 * \class QtAws::Route53::GetHealthCheckRequestPrivate
 * \brief The GetHealthCheckRequestPrivate class provides private implementation for GetHealthCheckRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a GetHealthCheckRequestPrivate object for Route53 \a action,
 * with public implementation \a q.
 */
GetHealthCheckRequestPrivate::GetHealthCheckRequestPrivate(
    const Route53Request::Action action, GetHealthCheckRequest * const q)
    : Route53RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetHealthCheckRequest
 * class' copy constructor.
 */
GetHealthCheckRequestPrivate::GetHealthCheckRequestPrivate(
    const GetHealthCheckRequestPrivate &other, GetHealthCheckRequest * const q)
    : Route53RequestPrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws
