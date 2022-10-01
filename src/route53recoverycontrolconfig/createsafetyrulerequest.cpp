// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createsafetyrulerequest.h"
#include "createsafetyrulerequest_p.h"
#include "createsafetyruleresponse.h"
#include "route53recoverycontrolconfigrequest_p.h"

namespace QtAws {
namespace Route53RecoveryControlConfig {

/*!
 * \class QtAws::Route53RecoveryControlConfig::CreateSafetyRuleRequest
 * \brief The CreateSafetyRuleRequest class provides an interface for Route53RecoveryControlConfig CreateSafetyRule requests.
 *
 * \inmodule QtAwsRoute53RecoveryControlConfig
 *
 *  Recovery Control Configuration API Reference for Amazon Route 53 Application Recovery
 *
 * \sa Route53RecoveryControlConfigClient::createSafetyRule
 */

/*!
 * Constructs a copy of \a other.
 */
CreateSafetyRuleRequest::CreateSafetyRuleRequest(const CreateSafetyRuleRequest &other)
    : Route53RecoveryControlConfigRequest(new CreateSafetyRuleRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateSafetyRuleRequest object.
 */
CreateSafetyRuleRequest::CreateSafetyRuleRequest()
    : Route53RecoveryControlConfigRequest(new CreateSafetyRuleRequestPrivate(Route53RecoveryControlConfigRequest::CreateSafetyRuleAction, this))
{

}

/*!
 * \reimp
 */
bool CreateSafetyRuleRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateSafetyRuleResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateSafetyRuleRequest::response(QNetworkReply * const reply) const
{
    return new CreateSafetyRuleResponse(*this, reply);
}

/*!
 * \class QtAws::Route53RecoveryControlConfig::CreateSafetyRuleRequestPrivate
 * \brief The CreateSafetyRuleRequestPrivate class provides private implementation for CreateSafetyRuleRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53RecoveryControlConfig
 */

/*!
 * Constructs a CreateSafetyRuleRequestPrivate object for Route53RecoveryControlConfig \a action,
 * with public implementation \a q.
 */
CreateSafetyRuleRequestPrivate::CreateSafetyRuleRequestPrivate(
    const Route53RecoveryControlConfigRequest::Action action, CreateSafetyRuleRequest * const q)
    : Route53RecoveryControlConfigRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateSafetyRuleRequest
 * class' copy constructor.
 */
CreateSafetyRuleRequestPrivate::CreateSafetyRuleRequestPrivate(
    const CreateSafetyRuleRequestPrivate &other, CreateSafetyRuleRequest * const q)
    : Route53RecoveryControlConfigRequestPrivate(other, q)
{

}

} // namespace Route53RecoveryControlConfig
} // namespace QtAws
