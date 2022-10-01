// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listrulesrequest.h"
#include "listrulesrequest_p.h"
#include "listrulesresponse.h"
#include "route53recoveryreadinessrequest_p.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

/*!
 * \class QtAws::Route53RecoveryReadiness::ListRulesRequest
 * \brief The ListRulesRequest class provides an interface for Route53RecoveryReadiness ListRules requests.
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 *
 *  Recovery
 *
 * \sa Route53RecoveryReadinessClient::listRules
 */

/*!
 * Constructs a copy of \a other.
 */
ListRulesRequest::ListRulesRequest(const ListRulesRequest &other)
    : Route53RecoveryReadinessRequest(new ListRulesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListRulesRequest object.
 */
ListRulesRequest::ListRulesRequest()
    : Route53RecoveryReadinessRequest(new ListRulesRequestPrivate(Route53RecoveryReadinessRequest::ListRulesAction, this))
{

}

/*!
 * \reimp
 */
bool ListRulesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListRulesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListRulesRequest::response(QNetworkReply * const reply) const
{
    return new ListRulesResponse(*this, reply);
}

/*!
 * \class QtAws::Route53RecoveryReadiness::ListRulesRequestPrivate
 * \brief The ListRulesRequestPrivate class provides private implementation for ListRulesRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 */

/*!
 * Constructs a ListRulesRequestPrivate object for Route53RecoveryReadiness \a action,
 * with public implementation \a q.
 */
ListRulesRequestPrivate::ListRulesRequestPrivate(
    const Route53RecoveryReadinessRequest::Action action, ListRulesRequest * const q)
    : Route53RecoveryReadinessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListRulesRequest
 * class' copy constructor.
 */
ListRulesRequestPrivate::ListRulesRequestPrivate(
    const ListRulesRequestPrivate &other, ListRulesRequest * const q)
    : Route53RecoveryReadinessRequestPrivate(other, q)
{

}

} // namespace Route53RecoveryReadiness
} // namespace QtAws
