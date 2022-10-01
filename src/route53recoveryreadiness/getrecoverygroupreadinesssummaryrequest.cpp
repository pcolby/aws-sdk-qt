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

#include "getrecoverygroupreadinesssummaryrequest.h"
#include "getrecoverygroupreadinesssummaryrequest_p.h"
#include "getrecoverygroupreadinesssummaryresponse.h"
#include "route53recoveryreadinessrequest_p.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

/*!
 * \class QtAws::Route53RecoveryReadiness::GetRecoveryGroupReadinessSummaryRequest
 * \brief The GetRecoveryGroupReadinessSummaryRequest class provides an interface for Route53RecoveryReadiness GetRecoveryGroupReadinessSummary requests.
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 *
 *  Recovery
 *
 * \sa Route53RecoveryReadinessClient::getRecoveryGroupReadinessSummary
 */

/*!
 * Constructs a copy of \a other.
 */
GetRecoveryGroupReadinessSummaryRequest::GetRecoveryGroupReadinessSummaryRequest(const GetRecoveryGroupReadinessSummaryRequest &other)
    : Route53RecoveryReadinessRequest(new GetRecoveryGroupReadinessSummaryRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetRecoveryGroupReadinessSummaryRequest object.
 */
GetRecoveryGroupReadinessSummaryRequest::GetRecoveryGroupReadinessSummaryRequest()
    : Route53RecoveryReadinessRequest(new GetRecoveryGroupReadinessSummaryRequestPrivate(Route53RecoveryReadinessRequest::GetRecoveryGroupReadinessSummaryAction, this))
{

}

/*!
 * \reimp
 */
bool GetRecoveryGroupReadinessSummaryRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetRecoveryGroupReadinessSummaryResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetRecoveryGroupReadinessSummaryRequest::response(QNetworkReply * const reply) const
{
    return new GetRecoveryGroupReadinessSummaryResponse(*this, reply);
}

/*!
 * \class QtAws::Route53RecoveryReadiness::GetRecoveryGroupReadinessSummaryRequestPrivate
 * \brief The GetRecoveryGroupReadinessSummaryRequestPrivate class provides private implementation for GetRecoveryGroupReadinessSummaryRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 */

/*!
 * Constructs a GetRecoveryGroupReadinessSummaryRequestPrivate object for Route53RecoveryReadiness \a action,
 * with public implementation \a q.
 */
GetRecoveryGroupReadinessSummaryRequestPrivate::GetRecoveryGroupReadinessSummaryRequestPrivate(
    const Route53RecoveryReadinessRequest::Action action, GetRecoveryGroupReadinessSummaryRequest * const q)
    : Route53RecoveryReadinessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetRecoveryGroupReadinessSummaryRequest
 * class' copy constructor.
 */
GetRecoveryGroupReadinessSummaryRequestPrivate::GetRecoveryGroupReadinessSummaryRequestPrivate(
    const GetRecoveryGroupReadinessSummaryRequestPrivate &other, GetRecoveryGroupReadinessSummaryRequest * const q)
    : Route53RecoveryReadinessRequestPrivate(other, q)
{

}

} // namespace Route53RecoveryReadiness
} // namespace QtAws
