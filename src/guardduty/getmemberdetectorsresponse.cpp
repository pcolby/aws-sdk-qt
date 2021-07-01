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

#include "getmemberdetectorsresponse.h"
#include "getmemberdetectorsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GuardDuty {

/*!
 * \class QtAws::GuardDuty::GetMemberDetectorsResponse
 * \brief The GetMemberDetectorsResponse class provides an interace for GuardDuty GetMemberDetectors responses.
 *
 * \inmodule QtAwsGuardDuty
 *
 *  Amazon GuardDuty is a continuous security monitoring service that analyzes and processes the following data sources: VPC
 *  Flow Logs, AWS CloudTrail event logs, and DNS logs. It uses threat intelligence feeds (such as lists of malicious IPs
 *  and domains) and machine learning to identify unexpected, potentially unauthorized, and malicious activity within your
 *  AWS environment. This can include issues like escalations of privileges, uses of exposed credentials, or communication
 *  with malicious IPs, URLs, or domains. For example, GuardDuty can detect compromised EC2 instances that serve malware or
 *  mine bitcoin.
 * 
 *  </p
 * 
 *  GuardDuty also monitors AWS account access behavior for signs of compromise. Some examples of this are unauthorized
 *  infrastructure deployments such as EC2 instances deployed in a Region that has never been used, or unusual API calls
 *  like a password policy change to reduce password strength.
 * 
 *  </p
 * 
 *  GuardDuty informs you of the status of your AWS environment by producing security findings that you can view in the
 *  GuardDuty console or through Amazon CloudWatch events. For more information, see the <i> <a
 *  href="https://docs.aws.amazon.com/guardduty/latest/ug/what-is-guardduty.html">Amazon GuardDuty User Guide</a> </i>.
 *
 * \sa GuardDutyClient::getMemberDetectors
 */

/*!
 * Constructs a GetMemberDetectorsResponse object for \a reply to \a request, with parent \a parent.
 */
GetMemberDetectorsResponse::GetMemberDetectorsResponse(
        const GetMemberDetectorsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GuardDutyResponse(new GetMemberDetectorsResponsePrivate(this), parent)
{
    setRequest(new GetMemberDetectorsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetMemberDetectorsRequest * GetMemberDetectorsResponse::request() const
{
    Q_D(const GetMemberDetectorsResponse);
    return static_cast<const GetMemberDetectorsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GuardDuty GetMemberDetectors \a response.
 */
void GetMemberDetectorsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetMemberDetectorsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GuardDuty::GetMemberDetectorsResponsePrivate
 * \brief The GetMemberDetectorsResponsePrivate class provides private implementation for GetMemberDetectorsResponse.
 * \internal
 *
 * \inmodule QtAwsGuardDuty
 */

/*!
 * Constructs a GetMemberDetectorsResponsePrivate object with public implementation \a q.
 */
GetMemberDetectorsResponsePrivate::GetMemberDetectorsResponsePrivate(
    GetMemberDetectorsResponse * const q) : GuardDutyResponsePrivate(q)
{

}

/*!
 * Parses a GuardDuty GetMemberDetectors response element from \a xml.
 */
void GetMemberDetectorsResponsePrivate::parseGetMemberDetectorsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetMemberDetectorsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace GuardDuty
} // namespace QtAws
