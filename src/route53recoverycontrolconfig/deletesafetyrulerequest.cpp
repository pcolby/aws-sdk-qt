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
