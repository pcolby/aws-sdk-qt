// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletesafetyrulerequest.h"
#include "deletesafetyrulerequest_p.h"
#include "deletesafetyruleresponse.h"
#include "route53recoverycontrolconfigrequest_p.h"

namespace QtAws {
namespace Route53RecoveryControlConfig {

/*!
 * \class QtAws::Route53RecoveryControlConfig::DeleteSafetyRuleRequest
 * \brief The DeleteSafetyRuleRequest class provides an interface for Route53RecoveryControlConfig DeleteSafetyRule requests.
 *
 * \inmodule QtAwsRoute53RecoveryControlConfig
 *
 *  Recovery Control Configuration API Reference for Amazon Route 53 Application Recovery
 *
 * \sa Route53RecoveryControlConfigClient::deleteSafetyRule
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteSafetyRuleRequest::DeleteSafetyRuleRequest(const DeleteSafetyRuleRequest &other)
    : Route53RecoveryControlConfigRequest(new DeleteSafetyRuleRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteSafetyRuleRequest object.
 */
DeleteSafetyRuleRequest::DeleteSafetyRuleRequest()
    : Route53RecoveryControlConfigRequest(new DeleteSafetyRuleRequestPrivate(Route53RecoveryControlConfigRequest::DeleteSafetyRuleAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteSafetyRuleRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteSafetyRuleResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteSafetyRuleRequest::response(QNetworkReply * const reply) const
{
    return new DeleteSafetyRuleResponse(*this, reply);
}

/*!
 * \class QtAws::Route53RecoveryControlConfig::DeleteSafetyRuleRequestPrivate
 * \brief The DeleteSafetyRuleRequestPrivate class provides private implementation for DeleteSafetyRuleRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53RecoveryControlConfig
 */

/*!
 * Constructs a DeleteSafetyRuleRequestPrivate object for Route53RecoveryControlConfig \a action,
 * with public implementation \a q.
 */
DeleteSafetyRuleRequestPrivate::DeleteSafetyRuleRequestPrivate(
    const Route53RecoveryControlConfigRequest::Action action, DeleteSafetyRuleRequest * const q)
    : Route53RecoveryControlConfigRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteSafetyRuleRequest
 * class' copy constructor.
 */
DeleteSafetyRuleRequestPrivate::DeleteSafetyRuleRequestPrivate(
    const DeleteSafetyRuleRequestPrivate &other, DeleteSafetyRuleRequest * const q)
    : Route53RecoveryControlConfigRequestPrivate(other, q)
{

}

} // namespace Route53RecoveryControlConfig
} // namespace QtAws
