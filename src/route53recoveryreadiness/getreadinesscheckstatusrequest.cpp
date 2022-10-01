// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getreadinesscheckstatusrequest.h"
#include "getreadinesscheckstatusrequest_p.h"
#include "getreadinesscheckstatusresponse.h"
#include "route53recoveryreadinessrequest_p.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

/*!
 * \class QtAws::Route53RecoveryReadiness::GetReadinessCheckStatusRequest
 * \brief The GetReadinessCheckStatusRequest class provides an interface for Route53RecoveryReadiness GetReadinessCheckStatus requests.
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 *
 *  Recovery
 *
 * \sa Route53RecoveryReadinessClient::getReadinessCheckStatus
 */

/*!
 * Constructs a copy of \a other.
 */
GetReadinessCheckStatusRequest::GetReadinessCheckStatusRequest(const GetReadinessCheckStatusRequest &other)
    : Route53RecoveryReadinessRequest(new GetReadinessCheckStatusRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetReadinessCheckStatusRequest object.
 */
GetReadinessCheckStatusRequest::GetReadinessCheckStatusRequest()
    : Route53RecoveryReadinessRequest(new GetReadinessCheckStatusRequestPrivate(Route53RecoveryReadinessRequest::GetReadinessCheckStatusAction, this))
{

}

/*!
 * \reimp
 */
bool GetReadinessCheckStatusRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetReadinessCheckStatusResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetReadinessCheckStatusRequest::response(QNetworkReply * const reply) const
{
    return new GetReadinessCheckStatusResponse(*this, reply);
}

/*!
 * \class QtAws::Route53RecoveryReadiness::GetReadinessCheckStatusRequestPrivate
 * \brief The GetReadinessCheckStatusRequestPrivate class provides private implementation for GetReadinessCheckStatusRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 */

/*!
 * Constructs a GetReadinessCheckStatusRequestPrivate object for Route53RecoveryReadiness \a action,
 * with public implementation \a q.
 */
GetReadinessCheckStatusRequestPrivate::GetReadinessCheckStatusRequestPrivate(
    const Route53RecoveryReadinessRequest::Action action, GetReadinessCheckStatusRequest * const q)
    : Route53RecoveryReadinessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetReadinessCheckStatusRequest
 * class' copy constructor.
 */
GetReadinessCheckStatusRequestPrivate::GetReadinessCheckStatusRequestPrivate(
    const GetReadinessCheckStatusRequestPrivate &other, GetReadinessCheckStatusRequest * const q)
    : Route53RecoveryReadinessRequestPrivate(other, q)
{

}

} // namespace Route53RecoveryReadiness
} // namespace QtAws
