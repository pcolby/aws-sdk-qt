// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeengagementresponse.h"
#include "describeengagementresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SsmContacts {

/*!
 * \class QtAws::SsmContacts::DescribeEngagementResponse
 * \brief The DescribeEngagementResponse class provides an interace for SsmContacts DescribeEngagement responses.
 *
 * \inmodule QtAwsSsmContacts
 *
 *  Systems Manager Incident Manager is an incident management console designed to help users mitigate and recover from
 *  incidents affecting their Amazon Web Services-hosted applications. An incident is any unplanned interruption or
 *  reduction in quality of services.
 * 
 *  </p
 * 
 *  Incident Manager increases incident resolution by notifying responders of impact, highlighting relevant troubleshooting
 *  data, and providing collaboration tools to get services back up and running. To achieve the primary goal of reducing the
 *  time-to-resolution of critical incidents, Incident Manager automates response plans and enables responder team
 *  escalation.
 *
 * \sa SsmContactsClient::describeEngagement
 */

/*!
 * Constructs a DescribeEngagementResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeEngagementResponse::DescribeEngagementResponse(
        const DescribeEngagementRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SsmContactsResponse(new DescribeEngagementResponsePrivate(this), parent)
{
    setRequest(new DescribeEngagementRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeEngagementRequest * DescribeEngagementResponse::request() const
{
    Q_D(const DescribeEngagementResponse);
    return static_cast<const DescribeEngagementRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SsmContacts DescribeEngagement \a response.
 */
void DescribeEngagementResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeEngagementResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SsmContacts::DescribeEngagementResponsePrivate
 * \brief The DescribeEngagementResponsePrivate class provides private implementation for DescribeEngagementResponse.
 * \internal
 *
 * \inmodule QtAwsSsmContacts
 */

/*!
 * Constructs a DescribeEngagementResponsePrivate object with public implementation \a q.
 */
DescribeEngagementResponsePrivate::DescribeEngagementResponsePrivate(
    DescribeEngagementResponse * const q) : SsmContactsResponsePrivate(q)
{

}

/*!
 * Parses a SsmContacts DescribeEngagement response element from \a xml.
 */
void DescribeEngagementResponsePrivate::parseDescribeEngagementResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeEngagementResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SsmContacts
} // namespace QtAws
