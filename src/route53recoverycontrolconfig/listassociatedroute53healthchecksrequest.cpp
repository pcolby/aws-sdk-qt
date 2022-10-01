// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
