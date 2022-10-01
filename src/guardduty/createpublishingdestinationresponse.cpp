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

#include "createpublishingdestinationresponse.h"
#include "createpublishingdestinationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GuardDuty {

/*!
 * \class QtAws::GuardDuty::CreatePublishingDestinationResponse
 * \brief The CreatePublishingDestinationResponse class provides an interace for GuardDuty CreatePublishingDestination responses.
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
 * \sa GuardDutyClient::createPublishingDestination
 */

/*!
 * Constructs a CreatePublishingDestinationResponse object for \a reply to \a request, with parent \a parent.
 */
CreatePublishingDestinationResponse::CreatePublishingDestinationResponse(
        const CreatePublishingDestinationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GuardDutyResponse(new CreatePublishingDestinationResponsePrivate(this), parent)
{
    setRequest(new CreatePublishingDestinationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreatePublishingDestinationRequest * CreatePublishingDestinationResponse::request() const
{
    Q_D(const CreatePublishingDestinationResponse);
    return static_cast<const CreatePublishingDestinationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GuardDuty CreatePublishingDestination \a response.
 */
void CreatePublishingDestinationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreatePublishingDestinationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GuardDuty::CreatePublishingDestinationResponsePrivate
 * \brief The CreatePublishingDestinationResponsePrivate class provides private implementation for CreatePublishingDestinationResponse.
 * \internal
 *
 * \inmodule QtAwsGuardDuty
 */

/*!
 * Constructs a CreatePublishingDestinationResponsePrivate object with public implementation \a q.
 */
CreatePublishingDestinationResponsePrivate::CreatePublishingDestinationResponsePrivate(
    CreatePublishingDestinationResponse * const q) : GuardDutyResponsePrivate(q)
{

}

/*!
 * Parses a GuardDuty CreatePublishingDestination response element from \a xml.
 */
void CreatePublishingDestinationResponsePrivate::parseCreatePublishingDestinationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreatePublishingDestinationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace GuardDuty
} // namespace QtAws
