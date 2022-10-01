// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "invitemembersrequest.h"
#include "invitemembersrequest_p.h"
#include "invitemembersresponse.h"
#include "guarddutyrequest_p.h"

namespace QtAws {
namespace GuardDuty {

/*!
 * \class QtAws::GuardDuty::InviteMembersRequest
 * \brief The InviteMembersRequest class provides an interface for GuardDuty InviteMembers requests.
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
 * \sa GuardDutyClient::inviteMembers
 */

/*!
 * Constructs a copy of \a other.
 */
InviteMembersRequest::InviteMembersRequest(const InviteMembersRequest &other)
    : GuardDutyRequest(new InviteMembersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a InviteMembersRequest object.
 */
InviteMembersRequest::InviteMembersRequest()
    : GuardDutyRequest(new InviteMembersRequestPrivate(GuardDutyRequest::InviteMembersAction, this))
{

}

/*!
 * \reimp
 */
bool InviteMembersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a InviteMembersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * InviteMembersRequest::response(QNetworkReply * const reply) const
{
    return new InviteMembersResponse(*this, reply);
}

/*!
 * \class QtAws::GuardDuty::InviteMembersRequestPrivate
 * \brief The InviteMembersRequestPrivate class provides private implementation for InviteMembersRequest.
 * \internal
 *
 * \inmodule QtAwsGuardDuty
 */

/*!
 * Constructs a InviteMembersRequestPrivate object for GuardDuty \a action,
 * with public implementation \a q.
 */
InviteMembersRequestPrivate::InviteMembersRequestPrivate(
    const GuardDutyRequest::Action action, InviteMembersRequest * const q)
    : GuardDutyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the InviteMembersRequest
 * class' copy constructor.
 */
InviteMembersRequestPrivate::InviteMembersRequestPrivate(
    const InviteMembersRequestPrivate &other, InviteMembersRequest * const q)
    : GuardDutyRequestPrivate(other, q)
{

}

} // namespace GuardDuty
} // namespace QtAws
