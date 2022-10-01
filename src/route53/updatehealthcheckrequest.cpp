// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatehealthcheckrequest.h"
#include "updatehealthcheckrequest_p.h"
#include "updatehealthcheckresponse.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::UpdateHealthCheckRequest
 * \brief The UpdateHealthCheckRequest class provides an interface for Route53 UpdateHealthCheck requests.
 *
 * \inmodule QtAwsRoute53
 *
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
 *
 * \sa Route53Client::updateHealthCheck
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateHealthCheckRequest::UpdateHealthCheckRequest(const UpdateHealthCheckRequest &other)
    : Route53Request(new UpdateHealthCheckRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateHealthCheckRequest object.
 */
UpdateHealthCheckRequest::UpdateHealthCheckRequest()
    : Route53Request(new UpdateHealthCheckRequestPrivate(Route53Request::UpdateHealthCheckAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateHealthCheckRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateHealthCheckResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateHealthCheckRequest::response(QNetworkReply * const reply) const
{
    return new UpdateHealthCheckResponse(*this, reply);
}

/*!
 * \class QtAws::Route53::UpdateHealthCheckRequestPrivate
 * \brief The UpdateHealthCheckRequestPrivate class provides private implementation for UpdateHealthCheckRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a UpdateHealthCheckRequestPrivate object for Route53 \a action,
 * with public implementation \a q.
 */
UpdateHealthCheckRequestPrivate::UpdateHealthCheckRequestPrivate(
    const Route53Request::Action action, UpdateHealthCheckRequest * const q)
    : Route53RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateHealthCheckRequest
 * class' copy constructor.
 */
UpdateHealthCheckRequestPrivate::UpdateHealthCheckRequestPrivate(
    const UpdateHealthCheckRequestPrivate &other, UpdateHealthCheckRequest * const q)
    : Route53RequestPrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws
