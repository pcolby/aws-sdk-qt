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

#include "updatesafetyrulerequest.h"
#include "updatesafetyrulerequest_p.h"
#include "updatesafetyruleresponse.h"
#include "route53recoverycontrolconfigrequest_p.h"

namespace QtAws {
namespace Route53RecoveryControlConfig {

/*!
 * \class QtAws::Route53RecoveryControlConfig::UpdateSafetyRuleRequest
 * \brief The UpdateSafetyRuleRequest class provides an interface for Route53RecoveryControlConfig UpdateSafetyRule requests.
 *
 * \inmodule QtAwsRoute53RecoveryControlConfig
 *
 *  Recovery Control Configuration API Reference for Amazon Route 53 Application Recovery
 *
 * \sa Route53RecoveryControlConfigClient::updateSafetyRule
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateSafetyRuleRequest::UpdateSafetyRuleRequest(const UpdateSafetyRuleRequest &other)
    : Route53RecoveryControlConfigRequest(new UpdateSafetyRuleRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateSafetyRuleRequest object.
 */
UpdateSafetyRuleRequest::UpdateSafetyRuleRequest()
    : Route53RecoveryControlConfigRequest(new UpdateSafetyRuleRequestPrivate(Route53RecoveryControlConfigRequest::UpdateSafetyRuleAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateSafetyRuleRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateSafetyRuleResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateSafetyRuleRequest::response(QNetworkReply * const reply) const
{
    return new UpdateSafetyRuleResponse(*this, reply);
}

/*!
 * \class QtAws::Route53RecoveryControlConfig::UpdateSafetyRuleRequestPrivate
 * \brief The UpdateSafetyRuleRequestPrivate class provides private implementation for UpdateSafetyRuleRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53RecoveryControlConfig
 */

/*!
 * Constructs a UpdateSafetyRuleRequestPrivate object for Route53RecoveryControlConfig \a action,
 * with public implementation \a q.
 */
UpdateSafetyRuleRequestPrivate::UpdateSafetyRuleRequestPrivate(
    const Route53RecoveryControlConfigRequest::Action action, UpdateSafetyRuleRequest * const q)
    : Route53RecoveryControlConfigRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateSafetyRuleRequest
 * class' copy constructor.
 */
UpdateSafetyRuleRequestPrivate::UpdateSafetyRuleRequestPrivate(
    const UpdateSafetyRuleRequestPrivate &other, UpdateSafetyRuleRequest * const q)
    : Route53RecoveryControlConfigRequestPrivate(other, q)
{

}

} // namespace Route53RecoveryControlConfig
} // namespace QtAws
