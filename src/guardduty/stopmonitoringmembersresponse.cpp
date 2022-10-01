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

#include "stopmonitoringmembersresponse.h"
#include "stopmonitoringmembersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GuardDuty {

/*!
 * \class QtAws::GuardDuty::StopMonitoringMembersResponse
 * \brief The StopMonitoringMembersResponse class provides an interace for GuardDuty StopMonitoringMembers responses.
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
 * Constructs a StopMonitoringMembersResponse object for \a reply to \a request, with parent \a parent.
 */
StopMonitoringMembersResponse::StopMonitoringMembersResponse(
        const StopMonitoringMembersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GuardDutyResponse(new StopMonitoringMembersResponsePrivate(this), parent)
{
    setRequest(new StopMonitoringMembersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StopMonitoringMembersRequest * StopMonitoringMembersResponse::request() const
{
    Q_D(const StopMonitoringMembersResponse);
    return static_cast<const StopMonitoringMembersRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GuardDuty StopMonitoringMembers \a response.
 */
void StopMonitoringMembersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StopMonitoringMembersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GuardDuty::StopMonitoringMembersResponsePrivate
 * \brief The StopMonitoringMembersResponsePrivate class provides private implementation for StopMonitoringMembersResponse.
 * \internal
 *
 * \inmodule QtAwsGuardDuty
 */

/*!
 * Constructs a StopMonitoringMembersResponsePrivate object with public implementation \a q.
 */
StopMonitoringMembersResponsePrivate::StopMonitoringMembersResponsePrivate(
    StopMonitoringMembersResponse * const q) : GuardDutyResponsePrivate(q)
{

}

/*!
 * Parses a GuardDuty StopMonitoringMembers response element from \a xml.
 */
void StopMonitoringMembersResponsePrivate::parseStopMonitoringMembersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopMonitoringMembersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace GuardDuty
} // namespace QtAws
