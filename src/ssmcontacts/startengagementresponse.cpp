// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startengagementresponse.h"
#include "startengagementresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SsmContacts {

/*!
 * \class QtAws::SsmContacts::StartEngagementResponse
 * \brief The StartEngagementResponse class provides an interace for SsmContacts StartEngagement responses.
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
 * \sa SsmContactsClient::startEngagement
 */

/*!
 * Constructs a StartEngagementResponse object for \a reply to \a request, with parent \a parent.
 */
StartEngagementResponse::StartEngagementResponse(
        const StartEngagementRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SsmContactsResponse(new StartEngagementResponsePrivate(this), parent)
{
    setRequest(new StartEngagementRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartEngagementRequest * StartEngagementResponse::request() const
{
    Q_D(const StartEngagementResponse);
    return static_cast<const StartEngagementRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SsmContacts StartEngagement \a response.
 */
void StartEngagementResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartEngagementResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SsmContacts::StartEngagementResponsePrivate
 * \brief The StartEngagementResponsePrivate class provides private implementation for StartEngagementResponse.
 * \internal
 *
 * \inmodule QtAwsSsmContacts
 */

/*!
 * Constructs a StartEngagementResponsePrivate object with public implementation \a q.
 */
StartEngagementResponsePrivate::StartEngagementResponsePrivate(
    StartEngagementResponse * const q) : SsmContactsResponsePrivate(q)
{

}

/*!
 * Parses a SsmContacts StartEngagement response element from \a xml.
 */
void StartEngagementResponsePrivate::parseStartEngagementResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartEngagementResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SsmContacts
} // namespace QtAws
