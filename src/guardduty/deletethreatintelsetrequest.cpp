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

#include "deletethreatintelsetrequest.h"
#include "deletethreatintelsetrequest_p.h"
#include "deletethreatintelsetresponse.h"
#include "guarddutyrequest_p.h"

namespace QtAws {
namespace GuardDuty {

/*!
 * \class QtAws::GuardDuty::DeleteThreatIntelSetRequest
 * \brief The DeleteThreatIntelSetRequest class provides an interface for GuardDuty DeleteThreatIntelSet requests.
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
 * \sa GuardDutyClient::deleteThreatIntelSet
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteThreatIntelSetRequest::DeleteThreatIntelSetRequest(const DeleteThreatIntelSetRequest &other)
    : GuardDutyRequest(new DeleteThreatIntelSetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteThreatIntelSetRequest object.
 */
DeleteThreatIntelSetRequest::DeleteThreatIntelSetRequest()
    : GuardDutyRequest(new DeleteThreatIntelSetRequestPrivate(GuardDutyRequest::DeleteThreatIntelSetAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteThreatIntelSetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteThreatIntelSetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteThreatIntelSetRequest::response(QNetworkReply * const reply) const
{
    return new DeleteThreatIntelSetResponse(*this, reply);
}

/*!
 * \class QtAws::GuardDuty::DeleteThreatIntelSetRequestPrivate
 * \brief The DeleteThreatIntelSetRequestPrivate class provides private implementation for DeleteThreatIntelSetRequest.
 * \internal
 *
 * \inmodule QtAwsGuardDuty
 */

/*!
 * Constructs a DeleteThreatIntelSetRequestPrivate object for GuardDuty \a action,
 * with public implementation \a q.
 */
DeleteThreatIntelSetRequestPrivate::DeleteThreatIntelSetRequestPrivate(
    const GuardDutyRequest::Action action, DeleteThreatIntelSetRequest * const q)
    : GuardDutyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteThreatIntelSetRequest
 * class' copy constructor.
 */
DeleteThreatIntelSetRequestPrivate::DeleteThreatIntelSetRequestPrivate(
    const DeleteThreatIntelSetRequestPrivate &other, DeleteThreatIntelSetRequest * const q)
    : GuardDutyRequestPrivate(other, q)
{

}

} // namespace GuardDuty
} // namespace QtAws
