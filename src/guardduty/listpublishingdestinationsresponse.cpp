// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listpublishingdestinationsresponse.h"
#include "listpublishingdestinationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GuardDuty {

/*!
 * \class QtAws::GuardDuty::ListPublishingDestinationsResponse
 * \brief The ListPublishingDestinationsResponse class provides an interace for GuardDuty ListPublishingDestinations responses.
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
 * \sa GuardDutyClient::listPublishingDestinations
 */

/*!
 * Constructs a ListPublishingDestinationsResponse object for \a reply to \a request, with parent \a parent.
 */
ListPublishingDestinationsResponse::ListPublishingDestinationsResponse(
        const ListPublishingDestinationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GuardDutyResponse(new ListPublishingDestinationsResponsePrivate(this), parent)
{
    setRequest(new ListPublishingDestinationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListPublishingDestinationsRequest * ListPublishingDestinationsResponse::request() const
{
    Q_D(const ListPublishingDestinationsResponse);
    return static_cast<const ListPublishingDestinationsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GuardDuty ListPublishingDestinations \a response.
 */
void ListPublishingDestinationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListPublishingDestinationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GuardDuty::ListPublishingDestinationsResponsePrivate
 * \brief The ListPublishingDestinationsResponsePrivate class provides private implementation for ListPublishingDestinationsResponse.
 * \internal
 *
 * \inmodule QtAwsGuardDuty
 */

/*!
 * Constructs a ListPublishingDestinationsResponsePrivate object with public implementation \a q.
 */
ListPublishingDestinationsResponsePrivate::ListPublishingDestinationsResponsePrivate(
    ListPublishingDestinationsResponse * const q) : GuardDutyResponsePrivate(q)
{

}

/*!
 * Parses a GuardDuty ListPublishingDestinations response element from \a xml.
 */
void ListPublishingDestinationsResponsePrivate::parseListPublishingDestinationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListPublishingDestinationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace GuardDuty
} // namespace QtAws
