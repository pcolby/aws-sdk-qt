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

#include "updateincidentrecordresponse.h"
#include "updateincidentrecordresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SsmIncidents {

/*!
 * \class QtAws::SsmIncidents::UpdateIncidentRecordResponse
 * \brief The UpdateIncidentRecordResponse class provides an interace for SsmIncidents UpdateIncidentRecord responses.
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
 * \sa SsmIncidentsClient::updateIncidentRecord
 */

/*!
 * Constructs a UpdateIncidentRecordResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateIncidentRecordResponse::UpdateIncidentRecordResponse(
        const UpdateIncidentRecordRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SsmIncidentsResponse(new UpdateIncidentRecordResponsePrivate(this), parent)
{
    setRequest(new UpdateIncidentRecordRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateIncidentRecordRequest * UpdateIncidentRecordResponse::request() const
{
    Q_D(const UpdateIncidentRecordResponse);
    return static_cast<const UpdateIncidentRecordRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SsmIncidents UpdateIncidentRecord \a response.
 */
void UpdateIncidentRecordResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateIncidentRecordResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SsmIncidents::UpdateIncidentRecordResponsePrivate
 * \brief The UpdateIncidentRecordResponsePrivate class provides private implementation for UpdateIncidentRecordResponse.
 * \internal
 *
 * \inmodule QtAwsSsmIncidents
 */

/*!
 * Constructs a UpdateIncidentRecordResponsePrivate object with public implementation \a q.
 */
UpdateIncidentRecordResponsePrivate::UpdateIncidentRecordResponsePrivate(
    UpdateIncidentRecordResponse * const q) : SsmIncidentsResponsePrivate(q)
{

}

/*!
 * Parses a SsmIncidents UpdateIncidentRecord response element from \a xml.
 */
void UpdateIncidentRecordResponsePrivate::parseUpdateIncidentRecordResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateIncidentRecordResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SsmIncidents
} // namespace QtAws
