// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updaterecoverygrouprequest.h"
#include "updaterecoverygrouprequest_p.h"
#include "updaterecoverygroupresponse.h"
#include "route53recoveryreadinessrequest_p.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

/*!
 * \class QtAws::Route53RecoveryReadiness::UpdateRecoveryGroupRequest
 * \brief The UpdateRecoveryGroupRequest class provides an interface for Route53RecoveryReadiness UpdateRecoveryGroup requests.
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 *
 *  Recovery
 *
 * \sa Route53RecoveryReadinessClient::updateRecoveryGroup
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateRecoveryGroupRequest::UpdateRecoveryGroupRequest(const UpdateRecoveryGroupRequest &other)
    : Route53RecoveryReadinessRequest(new UpdateRecoveryGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateRecoveryGroupRequest object.
 */
UpdateRecoveryGroupRequest::UpdateRecoveryGroupRequest()
    : Route53RecoveryReadinessRequest(new UpdateRecoveryGroupRequestPrivate(Route53RecoveryReadinessRequest::UpdateRecoveryGroupAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateRecoveryGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateRecoveryGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateRecoveryGroupRequest::response(QNetworkReply * const reply) const
{
    return new UpdateRecoveryGroupResponse(*this, reply);
}

/*!
 * \class QtAws::Route53RecoveryReadiness::UpdateRecoveryGroupRequestPrivate
 * \brief The UpdateRecoveryGroupRequestPrivate class provides private implementation for UpdateRecoveryGroupRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 */

/*!
 * Constructs a UpdateRecoveryGroupRequestPrivate object for Route53RecoveryReadiness \a action,
 * with public implementation \a q.
 */
UpdateRecoveryGroupRequestPrivate::UpdateRecoveryGroupRequestPrivate(
    const Route53RecoveryReadinessRequest::Action action, UpdateRecoveryGroupRequest * const q)
    : Route53RecoveryReadinessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateRecoveryGroupRequest
 * class' copy constructor.
 */
UpdateRecoveryGroupRequestPrivate::UpdateRecoveryGroupRequestPrivate(
    const UpdateRecoveryGroupRequestPrivate &other, UpdateRecoveryGroupRequest * const q)
    : Route53RecoveryReadinessRequestPrivate(other, q)
{

}

} // namespace Route53RecoveryReadiness
} // namespace QtAws
