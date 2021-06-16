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

#include "createtimelineeventresponse.h"
#include "createtimelineeventresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SSMIncidents {

/*!
 * \class QtAws::SSMIncidents::CreateTimelineEventResponse
 * \brief The CreateTimelineEventResponse class provides an interace for SSMIncidents CreateTimelineEvent responses.
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
 * \sa SSMIncidentsClient::createTimelineEvent
 */

/*!
 * Constructs a CreateTimelineEventResponse object for \a reply to \a request, with parent \a parent.
 */
CreateTimelineEventResponse::CreateTimelineEventResponse(
        const CreateTimelineEventRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSMIncidentsResponse(new CreateTimelineEventResponsePrivate(this), parent)
{
    setRequest(new CreateTimelineEventRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateTimelineEventRequest * CreateTimelineEventResponse::request() const
{
    Q_D(const CreateTimelineEventResponse);
    return static_cast<const CreateTimelineEventRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SSMIncidents CreateTimelineEvent \a response.
 */
void CreateTimelineEventResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateTimelineEventResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SSMIncidents::CreateTimelineEventResponsePrivate
 * \brief The CreateTimelineEventResponsePrivate class provides private implementation for CreateTimelineEventResponse.
 * \internal
 *
 * \inmodule QtAwsSSMIncidents
 */

/*!
 * Constructs a CreateTimelineEventResponsePrivate object with public implementation \a q.
 */
CreateTimelineEventResponsePrivate::CreateTimelineEventResponsePrivate(
    CreateTimelineEventResponse * const q) : SSMIncidentsResponsePrivate(q)
{

}

/*!
 * Parses a SSMIncidents CreateTimelineEvent response element from \a xml.
 */
void CreateTimelineEventResponsePrivate::parseCreateTimelineEventResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateTimelineEventResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SSMIncidents
} // namespace QtAws
