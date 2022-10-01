// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getrecoverygrouprequest.h"
#include "getrecoverygrouprequest_p.h"
#include "getrecoverygroupresponse.h"
#include "route53recoveryreadinessrequest_p.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

/*!
 * \class QtAws::Route53RecoveryReadiness::GetRecoveryGroupRequest
 * \brief The GetRecoveryGroupRequest class provides an interface for Route53RecoveryReadiness GetRecoveryGroup requests.
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 *
 *  Recovery
 *
 * \sa Route53RecoveryReadinessClient::getRecoveryGroup
 */

/*!
 * Constructs a copy of \a other.
 */
GetRecoveryGroupRequest::GetRecoveryGroupRequest(const GetRecoveryGroupRequest &other)
    : Route53RecoveryReadinessRequest(new GetRecoveryGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetRecoveryGroupRequest object.
 */
GetRecoveryGroupRequest::GetRecoveryGroupRequest()
    : Route53RecoveryReadinessRequest(new GetRecoveryGroupRequestPrivate(Route53RecoveryReadinessRequest::GetRecoveryGroupAction, this))
{

}

/*!
 * \reimp
 */
bool GetRecoveryGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetRecoveryGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetRecoveryGroupRequest::response(QNetworkReply * const reply) const
{
    return new GetRecoveryGroupResponse(*this, reply);
}

/*!
 * \class QtAws::Route53RecoveryReadiness::GetRecoveryGroupRequestPrivate
 * \brief The GetRecoveryGroupRequestPrivate class provides private implementation for GetRecoveryGroupRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 */

/*!
 * Constructs a GetRecoveryGroupRequestPrivate object for Route53RecoveryReadiness \a action,
 * with public implementation \a q.
 */
GetRecoveryGroupRequestPrivate::GetRecoveryGroupRequestPrivate(
    const Route53RecoveryReadinessRequest::Action action, GetRecoveryGroupRequest * const q)
    : Route53RecoveryReadinessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetRecoveryGroupRequest
 * class' copy constructor.
 */
GetRecoveryGroupRequestPrivate::GetRecoveryGroupRequestPrivate(
    const GetRecoveryGroupRequestPrivate &other, GetRecoveryGroupRequest * const q)
    : Route53RecoveryReadinessRequestPrivate(other, q)
{

}

} // namespace Route53RecoveryReadiness
} // namespace QtAws
