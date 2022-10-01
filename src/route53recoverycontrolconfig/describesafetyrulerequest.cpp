// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describesafetyrulerequest.h"
#include "describesafetyrulerequest_p.h"
#include "describesafetyruleresponse.h"
#include "route53recoverycontrolconfigrequest_p.h"

namespace QtAws {
namespace Route53RecoveryControlConfig {

/*!
 * \class QtAws::Route53RecoveryControlConfig::DescribeSafetyRuleRequest
 * \brief The DescribeSafetyRuleRequest class provides an interface for Route53RecoveryControlConfig DescribeSafetyRule requests.
 *
 * \inmodule QtAwsRoute53RecoveryControlConfig
 *
 *  Recovery Control Configuration API Reference for Amazon Route 53 Application Recovery
 *
 * \sa Route53RecoveryControlConfigClient::describeSafetyRule
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeSafetyRuleRequest::DescribeSafetyRuleRequest(const DescribeSafetyRuleRequest &other)
    : Route53RecoveryControlConfigRequest(new DescribeSafetyRuleRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeSafetyRuleRequest object.
 */
DescribeSafetyRuleRequest::DescribeSafetyRuleRequest()
    : Route53RecoveryControlConfigRequest(new DescribeSafetyRuleRequestPrivate(Route53RecoveryControlConfigRequest::DescribeSafetyRuleAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeSafetyRuleRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeSafetyRuleResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeSafetyRuleRequest::response(QNetworkReply * const reply) const
{
    return new DescribeSafetyRuleResponse(*this, reply);
}

/*!
 * \class QtAws::Route53RecoveryControlConfig::DescribeSafetyRuleRequestPrivate
 * \brief The DescribeSafetyRuleRequestPrivate class provides private implementation for DescribeSafetyRuleRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53RecoveryControlConfig
 */

/*!
 * Constructs a DescribeSafetyRuleRequestPrivate object for Route53RecoveryControlConfig \a action,
 * with public implementation \a q.
 */
DescribeSafetyRuleRequestPrivate::DescribeSafetyRuleRequestPrivate(
    const Route53RecoveryControlConfigRequest::Action action, DescribeSafetyRuleRequest * const q)
    : Route53RecoveryControlConfigRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeSafetyRuleRequest
 * class' copy constructor.
 */
DescribeSafetyRuleRequestPrivate::DescribeSafetyRuleRequestPrivate(
    const DescribeSafetyRuleRequestPrivate &other, DescribeSafetyRuleRequest * const q)
    : Route53RecoveryControlConfigRequestPrivate(other, q)
{

}

} // namespace Route53RecoveryControlConfig
} // namespace QtAws
