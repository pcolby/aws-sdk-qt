// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatetimelineeventresponse.h"
#include "updatetimelineeventresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SsmIncidents {

/*!
 * \class QtAws::SsmIncidents::UpdateTimelineEventResponse
 * \brief The UpdateTimelineEventResponse class provides an interace for SsmIncidents UpdateTimelineEvent responses.
 *
 * \inmodule QtAwsSsmIncidents
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
 * \sa SsmIncidentsClient::updateTimelineEvent
 */

/*!
 * Constructs a UpdateTimelineEventResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateTimelineEventResponse::UpdateTimelineEventResponse(
        const UpdateTimelineEventRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SsmIncidentsResponse(new UpdateTimelineEventResponsePrivate(this), parent)
{
    setRequest(new UpdateTimelineEventRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateTimelineEventRequest * UpdateTimelineEventResponse::request() const
{
    Q_D(const UpdateTimelineEventResponse);
    return static_cast<const UpdateTimelineEventRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SsmIncidents UpdateTimelineEvent \a response.
 */
void UpdateTimelineEventResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateTimelineEventResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SsmIncidents::UpdateTimelineEventResponsePrivate
 * \brief The UpdateTimelineEventResponsePrivate class provides private implementation for UpdateTimelineEventResponse.
 * \internal
 *
 * \inmodule QtAwsSsmIncidents
 */

/*!
 * Constructs a UpdateTimelineEventResponsePrivate object with public implementation \a q.
 */
UpdateTimelineEventResponsePrivate::UpdateTimelineEventResponsePrivate(
    UpdateTimelineEventResponse * const q) : SsmIncidentsResponsePrivate(q)
{

}

/*!
 * Parses a SsmIncidents UpdateTimelineEvent response element from \a xml.
 */
void UpdateTimelineEventResponsePrivate::parseUpdateTimelineEventResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateTimelineEventResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SsmIncidents
} // namespace QtAws
