// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listsafetyrulesrequest.h"
#include "listsafetyrulesrequest_p.h"
#include "listsafetyrulesresponse.h"
#include "route53recoverycontrolconfigrequest_p.h"

namespace QtAws {
namespace Route53RecoveryControlConfig {

/*!
 * \class QtAws::Route53RecoveryControlConfig::ListSafetyRulesRequest
 * \brief The ListSafetyRulesRequest class provides an interface for Route53RecoveryControlConfig ListSafetyRules requests.
 *
 * \inmodule QtAwsRoute53RecoveryControlConfig
 *
 *  Recovery Control Configuration API Reference for Amazon Route 53 Application Recovery
 *
 * \sa Route53RecoveryControlConfigClient::listSafetyRules
 */

/*!
 * Constructs a copy of \a other.
 */
ListSafetyRulesRequest::ListSafetyRulesRequest(const ListSafetyRulesRequest &other)
    : Route53RecoveryControlConfigRequest(new ListSafetyRulesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListSafetyRulesRequest object.
 */
ListSafetyRulesRequest::ListSafetyRulesRequest()
    : Route53RecoveryControlConfigRequest(new ListSafetyRulesRequestPrivate(Route53RecoveryControlConfigRequest::ListSafetyRulesAction, this))
{

}

/*!
 * \reimp
 */
bool ListSafetyRulesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListSafetyRulesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListSafetyRulesRequest::response(QNetworkReply * const reply) const
{
    return new ListSafetyRulesResponse(*this, reply);
}

/*!
 * \class QtAws::Route53RecoveryControlConfig::ListSafetyRulesRequestPrivate
 * \brief The ListSafetyRulesRequestPrivate class provides private implementation for ListSafetyRulesRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53RecoveryControlConfig
 */

/*!
 * Constructs a ListSafetyRulesRequestPrivate object for Route53RecoveryControlConfig \a action,
 * with public implementation \a q.
 */
ListSafetyRulesRequestPrivate::ListSafetyRulesRequestPrivate(
    const Route53RecoveryControlConfigRequest::Action action, ListSafetyRulesRequest * const q)
    : Route53RecoveryControlConfigRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListSafetyRulesRequest
 * class' copy constructor.
 */
ListSafetyRulesRequestPrivate::ListSafetyRulesRequestPrivate(
    const ListSafetyRulesRequestPrivate &other, ListSafetyRulesRequest * const q)
    : Route53RecoveryControlConfigRequestPrivate(other, q)
{

}

} // namespace Route53RecoveryControlConfig
} // namespace QtAws
