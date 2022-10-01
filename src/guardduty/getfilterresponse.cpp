// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getfilterresponse.h"
#include "getfilterresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GuardDuty {

/*!
 * \class QtAws::GuardDuty::GetFilterResponse
 * \brief The GetFilterResponse class provides an interace for GuardDuty GetFilter responses.
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
 * \sa GuardDutyClient::getFilter
 */

/*!
 * Constructs a GetFilterResponse object for \a reply to \a request, with parent \a parent.
 */
GetFilterResponse::GetFilterResponse(
        const GetFilterRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GuardDutyResponse(new GetFilterResponsePrivate(this), parent)
{
    setRequest(new GetFilterRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetFilterRequest * GetFilterResponse::request() const
{
    Q_D(const GetFilterResponse);
    return static_cast<const GetFilterRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GuardDuty GetFilter \a response.
 */
void GetFilterResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetFilterResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GuardDuty::GetFilterResponsePrivate
 * \brief The GetFilterResponsePrivate class provides private implementation for GetFilterResponse.
 * \internal
 *
 * \inmodule QtAwsGuardDuty
 */

/*!
 * Constructs a GetFilterResponsePrivate object with public implementation \a q.
 */
GetFilterResponsePrivate::GetFilterResponsePrivate(
    GetFilterResponse * const q) : GuardDutyResponsePrivate(q)
{

}

/*!
 * Parses a GuardDuty GetFilter response element from \a xml.
 */
void GetFilterResponsePrivate::parseGetFilterResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetFilterResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace GuardDuty
} // namespace QtAws
