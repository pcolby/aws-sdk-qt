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

#include "acceptadministratorinvitationresponse.h"
#include "acceptadministratorinvitationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GuardDuty {

/*!
 * \class QtAws::GuardDuty::AcceptAdministratorInvitationResponse
 * \brief The AcceptAdministratorInvitationResponse class provides an interace for GuardDuty AcceptAdministratorInvitation responses.
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
 * \sa GuardDutyClient::acceptAdministratorInvitation
 */

/*!
 * Constructs a AcceptAdministratorInvitationResponse object for \a reply to \a request, with parent \a parent.
 */
AcceptAdministratorInvitationResponse::AcceptAdministratorInvitationResponse(
        const AcceptAdministratorInvitationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GuardDutyResponse(new AcceptAdministratorInvitationResponsePrivate(this), parent)
{
    setRequest(new AcceptAdministratorInvitationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AcceptAdministratorInvitationRequest * AcceptAdministratorInvitationResponse::request() const
{
    Q_D(const AcceptAdministratorInvitationResponse);
    return static_cast<const AcceptAdministratorInvitationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GuardDuty AcceptAdministratorInvitation \a response.
 */
void AcceptAdministratorInvitationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AcceptAdministratorInvitationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GuardDuty::AcceptAdministratorInvitationResponsePrivate
 * \brief The AcceptAdministratorInvitationResponsePrivate class provides private implementation for AcceptAdministratorInvitationResponse.
 * \internal
 *
 * \inmodule QtAwsGuardDuty
 */

/*!
 * Constructs a AcceptAdministratorInvitationResponsePrivate object with public implementation \a q.
 */
AcceptAdministratorInvitationResponsePrivate::AcceptAdministratorInvitationResponsePrivate(
    AcceptAdministratorInvitationResponse * const q) : GuardDutyResponsePrivate(q)
{

}

/*!
 * Parses a GuardDuty AcceptAdministratorInvitation response element from \a xml.
 */
void AcceptAdministratorInvitationResponsePrivate::parseAcceptAdministratorInvitationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AcceptAdministratorInvitationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace GuardDuty
} // namespace QtAws
