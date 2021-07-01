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

#include "deletetimelineeventresponse.h"
#include "deletetimelineeventresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SSMIncidents {

/*!
 * \class QtAws::SSMIncidents::DeleteTimelineEventResponse
 * \brief The DeleteTimelineEventResponse class provides an interace for SSMIncidents DeleteTimelineEvent responses.
 *
 * \inmodule QtAwsSSMIncidents
 *
 *  AWS Systems Manager Incident Manager is an incident management console designed to help users mitigate and recover from
 *  incidents affecting their AWS-hosted applications. An incident is any unplanned interruption or reduction in quality of
 *  services.
 * 
 *  </p
 * 
 *  Incident Manager increases incident resolution by notifying responders of impact, highlighting relevant troubleshooting
 *  data, and providing collaboration tools to get services back up and running. To achieve the primary goal of reducing the
 *  time-to-resolution of critical incidents, Incident Manager automates response plans and enables responder team
 *  escalation.
 *
 * \sa SSMIncidentsClient::deleteTimelineEvent
 */

/*!
 * Constructs a DeleteTimelineEventResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteTimelineEventResponse::DeleteTimelineEventResponse(
        const DeleteTimelineEventRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSMIncidentsResponse(new DeleteTimelineEventResponsePrivate(this), parent)
{
    setRequest(new DeleteTimelineEventRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteTimelineEventRequest * DeleteTimelineEventResponse::request() const
{
    Q_D(const DeleteTimelineEventResponse);
    return static_cast<const DeleteTimelineEventRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SSMIncidents DeleteTimelineEvent \a response.
 */
void DeleteTimelineEventResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteTimelineEventResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SSMIncidents::DeleteTimelineEventResponsePrivate
 * \brief The DeleteTimelineEventResponsePrivate class provides private implementation for DeleteTimelineEventResponse.
 * \internal
 *
 * \inmodule QtAwsSSMIncidents
 */

/*!
 * Constructs a DeleteTimelineEventResponsePrivate object with public implementation \a q.
 */
DeleteTimelineEventResponsePrivate::DeleteTimelineEventResponsePrivate(
    DeleteTimelineEventResponse * const q) : SSMIncidentsResponsePrivate(q)
{

}

/*!
 * Parses a SSMIncidents DeleteTimelineEvent response element from \a xml.
 */
void DeleteTimelineEventResponsePrivate::parseDeleteTimelineEventResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteTimelineEventResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SSMIncidents
} // namespace QtAws
