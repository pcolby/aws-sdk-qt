// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
