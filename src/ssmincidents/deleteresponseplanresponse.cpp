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

#include "deleteresponseplanresponse.h"
#include "deleteresponseplanresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SSMIncidents {

/*!
 * \class QtAws::SSMIncidents::DeleteResponsePlanResponse
 * \brief The DeleteResponsePlanResponse class provides an interace for SSMIncidents DeleteResponsePlan responses.
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
 * \sa SSMIncidentsClient::deleteResponsePlan
 */

/*!
 * Constructs a DeleteResponsePlanResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteResponsePlanResponse::DeleteResponsePlanResponse(
        const DeleteResponsePlanRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSMIncidentsResponse(new DeleteResponsePlanResponsePrivate(this), parent)
{
    setRequest(new DeleteResponsePlanRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteResponsePlanRequest * DeleteResponsePlanResponse::request() const
{
    Q_D(const DeleteResponsePlanResponse);
    return static_cast<const DeleteResponsePlanRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SSMIncidents DeleteResponsePlan \a response.
 */
void DeleteResponsePlanResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteResponsePlanResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SSMIncidents::DeleteResponsePlanResponsePrivate
 * \brief The DeleteResponsePlanResponsePrivate class provides private implementation for DeleteResponsePlanResponse.
 * \internal
 *
 * \inmodule QtAwsSSMIncidents
 */

/*!
 * Constructs a DeleteResponsePlanResponsePrivate object with public implementation \a q.
 */
DeleteResponsePlanResponsePrivate::DeleteResponsePlanResponsePrivate(
    DeleteResponsePlanResponse * const q) : SSMIncidentsResponsePrivate(q)
{

}

/*!
 * Parses a SSMIncidents DeleteResponsePlan response element from \a xml.
 */
void DeleteResponsePlanResponsePrivate::parseDeleteResponsePlanResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteResponsePlanResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SSMIncidents
} // namespace QtAws
