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

#include "stopengagementresponse.h"
#include "stopengagementresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SsmContacts {

/*!
 * \class QtAws::SsmContacts::StopEngagementResponse
 * \brief The StopEngagementResponse class provides an interace for SsmContacts StopEngagement responses.
 *
 * \inmodule QtAwsSsmContacts
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
 * \sa SsmContactsClient::stopEngagement
 */

/*!
 * Constructs a StopEngagementResponse object for \a reply to \a request, with parent \a parent.
 */
StopEngagementResponse::StopEngagementResponse(
        const StopEngagementRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SsmContactsResponse(new StopEngagementResponsePrivate(this), parent)
{
    setRequest(new StopEngagementRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StopEngagementRequest * StopEngagementResponse::request() const
{
    Q_D(const StopEngagementResponse);
    return static_cast<const StopEngagementRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SsmContacts StopEngagement \a response.
 */
void StopEngagementResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StopEngagementResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SsmContacts::StopEngagementResponsePrivate
 * \brief The StopEngagementResponsePrivate class provides private implementation for StopEngagementResponse.
 * \internal
 *
 * \inmodule QtAwsSsmContacts
 */

/*!
 * Constructs a StopEngagementResponsePrivate object with public implementation \a q.
 */
StopEngagementResponsePrivate::StopEngagementResponsePrivate(
    StopEngagementResponse * const q) : SsmContactsResponsePrivate(q)
{

}

/*!
 * Parses a SsmContacts StopEngagement response element from \a xml.
 */
void StopEngagementResponsePrivate::parseStopEngagementResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopEngagementResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SsmContacts
} // namespace QtAws
