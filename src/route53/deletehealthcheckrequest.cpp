// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletehealthcheckrequest.h"
#include "deletehealthcheckrequest_p.h"
#include "deletehealthcheckresponse.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::DeleteHealthCheckRequest
 * \brief The DeleteHealthCheckRequest class provides an interface for Route53 DeleteHealthCheck requests.
 *
 * \inmodule QtAwsRoute53
 *
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
 *
 * \sa Route53Client::deleteHealthCheck
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteHealthCheckRequest::DeleteHealthCheckRequest(const DeleteHealthCheckRequest &other)
    : Route53Request(new DeleteHealthCheckRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteHealthCheckRequest object.
 */
DeleteHealthCheckRequest::DeleteHealthCheckRequest()
    : Route53Request(new DeleteHealthCheckRequestPrivate(Route53Request::DeleteHealthCheckAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteHealthCheckRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteHealthCheckResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteHealthCheckRequest::response(QNetworkReply * const reply) const
{
    return new DeleteHealthCheckResponse(*this, reply);
}

/*!
 * \class QtAws::Route53::DeleteHealthCheckRequestPrivate
 * \brief The DeleteHealthCheckRequestPrivate class provides private implementation for DeleteHealthCheckRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a DeleteHealthCheckRequestPrivate object for Route53 \a action,
 * with public implementation \a q.
 */
DeleteHealthCheckRequestPrivate::DeleteHealthCheckRequestPrivate(
    const Route53Request::Action action, DeleteHealthCheckRequest * const q)
    : Route53RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteHealthCheckRequest
 * class' copy constructor.
 */
DeleteHealthCheckRequestPrivate::DeleteHealthCheckRequestPrivate(
    const DeleteHealthCheckRequestPrivate &other, DeleteHealthCheckRequest * const q)
    : Route53RequestPrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws
