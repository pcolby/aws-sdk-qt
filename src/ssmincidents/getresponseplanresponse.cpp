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
namespace SSMIncidents {

/*!
 * \class QtAws::SSMIncidents::GetResponsePlanResponse
 * \brief The GetResponsePlanResponse class provides an interace for SSMIncidents GetResponsePlan responses.
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
 * \sa SSMIncidentsClient::getResponsePlan
 */

/*!
 * Constructs a GetResponsePlanResponse object for \a reply to \a request, with parent \a parent.
 */
GetResponsePlanResponse::GetResponsePlanResponse(
        const GetResponsePlanRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSMIncidentsResponse(new GetResponsePlanResponsePrivate(this), parent)
{
    setRequest(new GetResponsePlanRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetResponsePlanRequest * GetResponsePlanResponse::request() const
{
    return static_cast<const GetResponsePlanRequest *>(SSMIncidentsResponse::request());
}

/*!
 * \reimp
 * Parses a successful SSMIncidents GetResponsePlan \a response.
 */
void GetResponsePlanResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetResponsePlanResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SSMIncidents::GetResponsePlanResponsePrivate
 * \brief The GetResponsePlanResponsePrivate class provides private implementation for GetResponsePlanResponse.
 * \internal
 *
 * \inmodule QtAwsSSMIncidents
 */

/*!
 * Constructs a GetResponsePlanResponsePrivate object with public implementation \a q.
 */
GetResponsePlanResponsePrivate::GetResponsePlanResponsePrivate(
    GetResponsePlanResponse * const q) : SSMIncidentsResponsePrivate(q)
{

}

/*!
 * Parses a SSMIncidents GetResponsePlan response element from \a xml.
 */
void GetResponsePlanResponsePrivate::parseGetResponsePlanResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetResponsePlanResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SSMIncidents
} // namespace QtAws
