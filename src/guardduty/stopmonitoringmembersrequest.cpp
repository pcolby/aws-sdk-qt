// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "stopmonitoringmembersrequest.h"
#include "stopmonitoringmembersrequest_p.h"
#include "stopmonitoringmembersresponse.h"
#include "guarddutyrequest_p.h"

namespace QtAws {
namespace GuardDuty {

/*!
 * \class QtAws::GuardDuty::StopMonitoringMembersRequest
 * \brief The StopMonitoringMembersRequest class provides an interface for GuardDuty StopMonitoringMembers requests.
 *
 * \inmodule QtAwsGuardDuty
 *
 *  Amazon GuardDuty is a continuous security monitoring service that analyzes and processes the following data sources: VPC
 *  Flow Logs, AWS CloudTrail management event logs, CloudTrail S3 data event logs, EKS audit logs, and DNS logs. It uses
 *  threat intelligence feeds (such as lists of malicious IPs and domains) and machine learning to identify unexpected,
 *  potentially unauthorized, and malicious activity within your Amazon Web Services environment. This can include issues
 *  like escalations of privileges, uses of exposed credentials, or communication with malicious IPs, URLs, or domains. For
 *  example, GuardDuty can detect compromised EC2 instances that serve malware or mine bitcoin.
 * 
 *  </p
 * 
 *  GuardDuty also monitors Amazon Web Services account access behavior for signs of compromise. Some examples of this are
 *  unauthorized infrastructure deployments such as EC2 instances deployed in a Region that has never been used, or unusual
 *  API calls like a password policy change to reduce password strength.
 * 
 *  </p
 * 
 *  GuardDuty informs you of the status of your Amazon Web Services environment by producing security findings that you can
 *  view in the GuardDuty console or through Amazon CloudWatch events. For more information, see the <i> <a
 *  href="https://docs.aws.amazon.com/guardduty/latest/ug/what-is-guardduty.html">Amazon GuardDuty User Guide</a> </i>.
 *
 * \sa GuardDutyClient::stopMonitoringMembers
 */

/*!
 * Constructs a copy of \a other.
 */
StopMonitoringMembersRequest::StopMonitoringMembersRequest(const StopMonitoringMembersRequest &other)
    : GuardDutyRequest(new StopMonitoringMembersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StopMonitoringMembersRequest object.
 */
StopMonitoringMembersRequest::StopMonitoringMembersRequest()
    : GuardDutyRequest(new StopMonitoringMembersRequestPrivate(GuardDutyRequest::StopMonitoringMembersAction, this))
{

}

/*!
 * \reimp
 */
bool StopMonitoringMembersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StopMonitoringMembersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StopMonitoringMembersRequest::response(QNetworkReply * const reply) const
{
    return new StopMonitoringMembersResponse(*this, reply);
}

/*!
 * \class QtAws::GuardDuty::StopMonitoringMembersRequestPrivate
 * \brief The StopMonitoringMembersRequestPrivate class provides private implementation for StopMonitoringMembersRequest.
 * \internal
 *
 * \inmodule QtAwsGuardDuty
 */

/*!
 * Constructs a StopMonitoringMembersRequestPrivate object for GuardDuty \a action,
 * with public implementation \a q.
 */
StopMonitoringMembersRequestPrivate::StopMonitoringMembersRequestPrivate(
    const GuardDutyRequest::Action action, StopMonitoringMembersRequest * const q)
    : GuardDutyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StopMonitoringMembersRequest
 * class' copy constructor.
 */
StopMonitoringMembersRequestPrivate::StopMonitoringMembersRequestPrivate(
    const StopMonitoringMembersRequestPrivate &other, StopMonitoringMembersRequest * const q)
    : GuardDutyRequestPrivate(other, q)
{

}

} // namespace GuardDuty
} // namespace QtAws
