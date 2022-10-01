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
