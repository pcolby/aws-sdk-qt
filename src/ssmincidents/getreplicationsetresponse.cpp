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

#include "getreplicationsetresponse.h"
#include "getreplicationsetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SSMIncidents {

/*!
 * \class QtAws::SSMIncidents::GetReplicationSetResponse
 * \brief The GetReplicationSetResponse class provides an interace for SSMIncidents GetReplicationSet responses.
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
 * \sa SSMIncidentsClient::getReplicationSet
 */

/*!
 * Constructs a GetReplicationSetResponse object for \a reply to \a request, with parent \a parent.
 */
GetReplicationSetResponse::GetReplicationSetResponse(
        const GetReplicationSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSMIncidentsResponse(new GetReplicationSetResponsePrivate(this), parent)
{
    setRequest(new GetReplicationSetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetReplicationSetRequest * GetReplicationSetResponse::request() const
{
    Q_D(const GetReplicationSetResponse);
    return static_cast<const GetReplicationSetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SSMIncidents GetReplicationSet \a response.
 */
void GetReplicationSetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetReplicationSetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SSMIncidents::GetReplicationSetResponsePrivate
 * \brief The GetReplicationSetResponsePrivate class provides private implementation for GetReplicationSetResponse.
 * \internal
 *
 * \inmodule QtAwsSSMIncidents
 */

/*!
 * Constructs a GetReplicationSetResponsePrivate object with public implementation \a q.
 */
GetReplicationSetResponsePrivate::GetReplicationSetResponsePrivate(
    GetReplicationSetResponse * const q) : SSMIncidentsResponsePrivate(q)
{

}

/*!
 * Parses a SSMIncidents GetReplicationSet response element from \a xml.
 */
void GetReplicationSetResponsePrivate::parseGetReplicationSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetReplicationSetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SSMIncidents
} // namespace QtAws
