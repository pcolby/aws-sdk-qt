// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getcellreadinesssummaryrequest.h"
#include "getcellreadinesssummaryrequest_p.h"
#include "getcellreadinesssummaryresponse.h"
#include "route53recoveryreadinessrequest_p.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

/*!
 * \class QtAws::Route53RecoveryReadiness::GetCellReadinessSummaryRequest
 * \brief The GetCellReadinessSummaryRequest class provides an interface for Route53RecoveryReadiness GetCellReadinessSummary requests.
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 *
 *  Recovery
 *
 * \sa Route53RecoveryReadinessClient::getCellReadinessSummary
 */

/*!
 * Constructs a copy of \a other.
 */
GetCellReadinessSummaryRequest::GetCellReadinessSummaryRequest(const GetCellReadinessSummaryRequest &other)
    : Route53RecoveryReadinessRequest(new GetCellReadinessSummaryRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetCellReadinessSummaryRequest object.
 */
GetCellReadinessSummaryRequest::GetCellReadinessSummaryRequest()
    : Route53RecoveryReadinessRequest(new GetCellReadinessSummaryRequestPrivate(Route53RecoveryReadinessRequest::GetCellReadinessSummaryAction, this))
{

}

/*!
 * \reimp
 */
bool GetCellReadinessSummaryRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetCellReadinessSummaryResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetCellReadinessSummaryRequest::response(QNetworkReply * const reply) const
{
    return new GetCellReadinessSummaryResponse(*this, reply);
}

/*!
 * \class QtAws::Route53RecoveryReadiness::GetCellReadinessSummaryRequestPrivate
 * \brief The GetCellReadinessSummaryRequestPrivate class provides private implementation for GetCellReadinessSummaryRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 */

/*!
 * Constructs a GetCellReadinessSummaryRequestPrivate object for Route53RecoveryReadiness \a action,
 * with public implementation \a q.
 */
GetCellReadinessSummaryRequestPrivate::GetCellReadinessSummaryRequestPrivate(
    const Route53RecoveryReadinessRequest::Action action, GetCellReadinessSummaryRequest * const q)
    : Route53RecoveryReadinessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetCellReadinessSummaryRequest
 * class' copy constructor.
 */
GetCellReadinessSummaryRequestPrivate::GetCellReadinessSummaryRequestPrivate(
    const GetCellReadinessSummaryRequestPrivate &other, GetCellReadinessSummaryRequest * const q)
    : Route53RecoveryReadinessRequestPrivate(other, q)
{

}

} // namespace Route53RecoveryReadiness
} // namespace QtAws
