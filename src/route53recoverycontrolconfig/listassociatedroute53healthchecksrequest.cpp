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

#include "listassociatedroute53healthchecksrequest.h"
#include "listassociatedroute53healthchecksrequest_p.h"
#include "listassociatedroute53healthchecksresponse.h"
#include "route53recoverycontrolconfigrequest_p.h"

namespace QtAws {
namespace Route53RecoveryControlConfig {

/*!
 * \class QtAws::Route53RecoveryControlConfig::ListAssociatedRoute53HealthChecksRequest
 * \brief The ListAssociatedRoute53HealthChecksRequest class provides an interface for Route53RecoveryControlConfig ListAssociatedRoute53HealthChecks requests.
 *
 * \inmodule QtAwsRoute53RecoveryControlConfig
 *
 *  Recovery Control Configuration API Reference for Amazon Route 53 Application Recovery
 *
 * \sa Route53RecoveryControlConfigClient::listAssociatedRoute53HealthChecks
 */

/*!
 * Constructs a copy of \a other.
 */
ListAssociatedRoute53HealthChecksRequest::ListAssociatedRoute53HealthChecksRequest(const ListAssociatedRoute53HealthChecksRequest &other)
    : Route53RecoveryControlConfigRequest(new ListAssociatedRoute53HealthChecksRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListAssociatedRoute53HealthChecksRequest object.
 */
ListAssociatedRoute53HealthChecksRequest::ListAssociatedRoute53HealthChecksRequest()
    : Route53RecoveryControlConfigRequest(new ListAssociatedRoute53HealthChecksRequestPrivate(Route53RecoveryControlConfigRequest::ListAssociatedRoute53HealthChecksAction, this))
{

}

/*!
 * \reimp
 */
bool ListAssociatedRoute53HealthChecksRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListAssociatedRoute53HealthChecksResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListAssociatedRoute53HealthChecksRequest::response(QNetworkReply * const reply) const
{
    return new ListAssociatedRoute53HealthChecksResponse(*this, reply);
}

/*!
 * \class QtAws::Route53RecoveryControlConfig::ListAssociatedRoute53HealthChecksRequestPrivate
 * \brief The ListAssociatedRoute53HealthChecksRequestPrivate class provides private implementation for ListAssociatedRoute53HealthChecksRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53RecoveryControlConfig
 */

/*!
 * Constructs a ListAssociatedRoute53HealthChecksRequestPrivate object for Route53RecoveryControlConfig \a action,
 * with public implementation \a q.
 */
ListAssociatedRoute53HealthChecksRequestPrivate::ListAssociatedRoute53HealthChecksRequestPrivate(
    const Route53RecoveryControlConfigRequest::Action action, ListAssociatedRoute53HealthChecksRequest * const q)
    : Route53RecoveryControlConfigRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListAssociatedRoute53HealthChecksRequest
 * class' copy constructor.
 */
ListAssociatedRoute53HealthChecksRequestPrivate::ListAssociatedRoute53HealthChecksRequestPrivate(
    const ListAssociatedRoute53HealthChecksRequestPrivate &other, ListAssociatedRoute53HealthChecksRequest * const q)
    : Route53RecoveryControlConfigRequestPrivate(other, q)
{

}

} // namespace Route53RecoveryControlConfig
} // namespace QtAws
