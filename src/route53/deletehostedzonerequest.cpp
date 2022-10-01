// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletehostedzonerequest.h"
#include "deletehostedzonerequest_p.h"
#include "deletehostedzoneresponse.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::DeleteHostedZoneRequest
 * \brief The DeleteHostedZoneRequest class provides an interface for Route53 DeleteHostedZone requests.
 *
 * \inmodule QtAwsRoute53
 *
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
 *
 * \sa Route53Client::deleteHostedZone
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteHostedZoneRequest::DeleteHostedZoneRequest(const DeleteHostedZoneRequest &other)
    : Route53Request(new DeleteHostedZoneRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteHostedZoneRequest object.
 */
DeleteHostedZoneRequest::DeleteHostedZoneRequest()
    : Route53Request(new DeleteHostedZoneRequestPrivate(Route53Request::DeleteHostedZoneAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteHostedZoneRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteHostedZoneResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteHostedZoneRequest::response(QNetworkReply * const reply) const
{
    return new DeleteHostedZoneResponse(*this, reply);
}

/*!
 * \class QtAws::Route53::DeleteHostedZoneRequestPrivate
 * \brief The DeleteHostedZoneRequestPrivate class provides private implementation for DeleteHostedZoneRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a DeleteHostedZoneRequestPrivate object for Route53 \a action,
 * with public implementation \a q.
 */
DeleteHostedZoneRequestPrivate::DeleteHostedZoneRequestPrivate(
    const Route53Request::Action action, DeleteHostedZoneRequest * const q)
    : Route53RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteHostedZoneRequest
 * class' copy constructor.
 */
DeleteHostedZoneRequestPrivate::DeleteHostedZoneRequestPrivate(
    const DeleteHostedZoneRequestPrivate &other, DeleteHostedZoneRequest * const q)
    : Route53RequestPrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws
