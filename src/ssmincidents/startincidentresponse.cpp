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

#include "startincidentresponse.h"
#include "startincidentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SsmIncidents {

/*!
 * \class QtAws::SsmIncidents::StartIncidentResponse
 * \brief The StartIncidentResponse class provides an interace for SsmIncidents StartIncident responses.
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
 * \sa SsmIncidentsClient::startIncident
 */

/*!
 * Constructs a StartIncidentResponse object for \a reply to \a request, with parent \a parent.
 */
StartIncidentResponse::StartIncidentResponse(
        const StartIncidentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SsmIncidentsResponse(new StartIncidentResponsePrivate(this), parent)
{
    setRequest(new StartIncidentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartIncidentRequest * StartIncidentResponse::request() const
{
    Q_D(const StartIncidentResponse);
    return static_cast<const StartIncidentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SsmIncidents StartIncident \a response.
 */
void StartIncidentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartIncidentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SsmIncidents::StartIncidentResponsePrivate
 * \brief The StartIncidentResponsePrivate class provides private implementation for StartIncidentResponse.
 * \internal
 *
 * \inmodule QtAwsSsmIncidents
 */

/*!
 * Constructs a StartIncidentResponsePrivate object with public implementation \a q.
 */
StartIncidentResponsePrivate::StartIncidentResponsePrivate(
    StartIncidentResponse * const q) : SsmIncidentsResponsePrivate(q)
{

}

/*!
 * Parses a SsmIncidents StartIncident response element from \a xml.
 */
void StartIncidentResponsePrivate::parseStartIncidentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartIncidentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SsmIncidents
} // namespace QtAws
