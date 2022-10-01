// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "stopengagementresponse.h"
#include "stopengagementresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SsmContacts {

/*!
 * \class QtAws::SsmContacts::StopEngagementResponse
 * \brief The StopEngagementResponse class provides an interace for SsmContacts StopEngagement responses.
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
 * \sa SsmContactsClient::stopEngagement
 */

/*!
 * Constructs a StopEngagementResponse object for \a reply to \a request, with parent \a parent.
 */
StopEngagementResponse::StopEngagementResponse(
        const StopEngagementRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SsmContactsResponse(new StopEngagementResponsePrivate(this), parent)
{
    setRequest(new StopEngagementRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StopEngagementRequest * StopEngagementResponse::request() const
{
    Q_D(const StopEngagementResponse);
    return static_cast<const StopEngagementRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SsmContacts StopEngagement \a response.
 */
void StopEngagementResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StopEngagementResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SsmContacts::StopEngagementResponsePrivate
 * \brief The StopEngagementResponsePrivate class provides private implementation for StopEngagementResponse.
 * \internal
 *
 * \inmodule QtAwsSsmContacts
 */

/*!
 * Constructs a StopEngagementResponsePrivate object with public implementation \a q.
 */
StopEngagementResponsePrivate::StopEngagementResponsePrivate(
    StopEngagementResponse * const q) : SsmContactsResponsePrivate(q)
{

}

/*!
 * Parses a SsmContacts StopEngagement response element from \a xml.
 */
void StopEngagementResponsePrivate::parseStopEngagementResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopEngagementResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SsmContacts
} // namespace QtAws
