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

#include "getresponseplanresponse.h"
#include "getresponseplanresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SsmIncidents {

/*!
 * \class QtAws::SsmIncidents::GetResponsePlanResponse
 * \brief The GetResponsePlanResponse class provides an interace for SsmIncidents GetResponsePlan responses.
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
 * \sa SsmIncidentsClient::getResponsePlan
 */

/*!
 * Constructs a GetResponsePlanResponse object for \a reply to \a request, with parent \a parent.
 */
GetResponsePlanResponse::GetResponsePlanResponse(
        const GetResponsePlanRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SsmIncidentsResponse(new GetResponsePlanResponsePrivate(this), parent)
{
    setRequest(new GetResponsePlanRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetResponsePlanRequest * GetResponsePlanResponse::request() const
{
    Q_D(const GetResponsePlanResponse);
    return static_cast<const GetResponsePlanRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SsmIncidents GetResponsePlan \a response.
 */
void GetResponsePlanResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetResponsePlanResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SsmIncidents::GetResponsePlanResponsePrivate
 * \brief The GetResponsePlanResponsePrivate class provides private implementation for GetResponsePlanResponse.
 * \internal
 *
 * \inmodule QtAwsSsmIncidents
 */

/*!
 * Constructs a GetResponsePlanResponsePrivate object with public implementation \a q.
 */
GetResponsePlanResponsePrivate::GetResponsePlanResponsePrivate(
    GetResponsePlanResponse * const q) : SsmIncidentsResponsePrivate(q)
{

}

/*!
 * Parses a SsmIncidents GetResponsePlan response element from \a xml.
 */
void GetResponsePlanResponsePrivate::parseGetResponsePlanResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetResponsePlanResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SsmIncidents
} // namespace QtAws
