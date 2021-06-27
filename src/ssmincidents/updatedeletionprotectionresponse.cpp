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

#include "updatedeletionprotectionresponse.h"
#include "updatedeletionprotectionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SSMIncidents {

/*!
 * \class QtAws::SSMIncidents::UpdateDeletionProtectionResponse
 * \brief The UpdateDeletionProtectionResponse class provides an interace for SSMIncidents UpdateDeletionProtection responses.
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
 * \sa SSMIncidentsClient::updateDeletionProtection
 */

/*!
 * Constructs a UpdateDeletionProtectionResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateDeletionProtectionResponse::UpdateDeletionProtectionResponse(
        const UpdateDeletionProtectionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSMIncidentsResponse(new UpdateDeletionProtectionResponsePrivate(this), parent)
{
    setRequest(new UpdateDeletionProtectionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateDeletionProtectionRequest * UpdateDeletionProtectionResponse::request() const
{
    return static_cast<const UpdateDeletionProtectionRequest *>(SSMIncidentsResponse::request());
}

/*!
 * \reimp
 * Parses a successful SSMIncidents UpdateDeletionProtection \a response.
 */
void UpdateDeletionProtectionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateDeletionProtectionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SSMIncidents::UpdateDeletionProtectionResponsePrivate
 * \brief The UpdateDeletionProtectionResponsePrivate class provides private implementation for UpdateDeletionProtectionResponse.
 * \internal
 *
 * \inmodule QtAwsSSMIncidents
 */

/*!
 * Constructs a UpdateDeletionProtectionResponsePrivate object with public implementation \a q.
 */
UpdateDeletionProtectionResponsePrivate::UpdateDeletionProtectionResponsePrivate(
    UpdateDeletionProtectionResponse * const q) : SSMIncidentsResponsePrivate(q)
{

}

/*!
 * Parses a SSMIncidents UpdateDeletionProtection response element from \a xml.
 */
void UpdateDeletionProtectionResponsePrivate::parseUpdateDeletionProtectionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateDeletionProtectionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SSMIncidents
} // namespace QtAws
