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

#include "deleteincidentrecordresponse.h"
#include "deleteincidentrecordresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SsmIncidents {

/*!
 * \class QtAws::SsmIncidents::DeleteIncidentRecordResponse
 * \brief The DeleteIncidentRecordResponse class provides an interace for SsmIncidents DeleteIncidentRecord responses.
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
 * \sa SsmIncidentsClient::deleteIncidentRecord
 */

/*!
 * Constructs a DeleteIncidentRecordResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteIncidentRecordResponse::DeleteIncidentRecordResponse(
        const DeleteIncidentRecordRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SsmIncidentsResponse(new DeleteIncidentRecordResponsePrivate(this), parent)
{
    setRequest(new DeleteIncidentRecordRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteIncidentRecordRequest * DeleteIncidentRecordResponse::request() const
{
    Q_D(const DeleteIncidentRecordResponse);
    return static_cast<const DeleteIncidentRecordRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SsmIncidents DeleteIncidentRecord \a response.
 */
void DeleteIncidentRecordResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteIncidentRecordResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SsmIncidents::DeleteIncidentRecordResponsePrivate
 * \brief The DeleteIncidentRecordResponsePrivate class provides private implementation for DeleteIncidentRecordResponse.
 * \internal
 *
 * \inmodule QtAwsSsmIncidents
 */

/*!
 * Constructs a DeleteIncidentRecordResponsePrivate object with public implementation \a q.
 */
DeleteIncidentRecordResponsePrivate::DeleteIncidentRecordResponsePrivate(
    DeleteIncidentRecordResponse * const q) : SsmIncidentsResponsePrivate(q)
{

}

/*!
 * Parses a SsmIncidents DeleteIncidentRecord response element from \a xml.
 */
void DeleteIncidentRecordResponsePrivate::parseDeleteIncidentRecordResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteIncidentRecordResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SsmIncidents
} // namespace QtAws
