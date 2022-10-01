// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listtimelineeventsresponse.h"
#include "listtimelineeventsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SsmIncidents {

/*!
 * \class QtAws::SsmIncidents::ListTimelineEventsResponse
 * \brief The ListTimelineEventsResponse class provides an interace for SsmIncidents ListTimelineEvents responses.
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
 * \sa SsmIncidentsClient::listTimelineEvents
 */

/*!
 * Constructs a ListTimelineEventsResponse object for \a reply to \a request, with parent \a parent.
 */
ListTimelineEventsResponse::ListTimelineEventsResponse(
        const ListTimelineEventsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SsmIncidentsResponse(new ListTimelineEventsResponsePrivate(this), parent)
{
    setRequest(new ListTimelineEventsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListTimelineEventsRequest * ListTimelineEventsResponse::request() const
{
    Q_D(const ListTimelineEventsResponse);
    return static_cast<const ListTimelineEventsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SsmIncidents ListTimelineEvents \a response.
 */
void ListTimelineEventsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListTimelineEventsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SsmIncidents::ListTimelineEventsResponsePrivate
 * \brief The ListTimelineEventsResponsePrivate class provides private implementation for ListTimelineEventsResponse.
 * \internal
 *
 * \inmodule QtAwsSsmIncidents
 */

/*!
 * Constructs a ListTimelineEventsResponsePrivate object with public implementation \a q.
 */
ListTimelineEventsResponsePrivate::ListTimelineEventsResponsePrivate(
    ListTimelineEventsResponse * const q) : SsmIncidentsResponsePrivate(q)
{

}

/*!
 * Parses a SsmIncidents ListTimelineEvents response element from \a xml.
 */
void ListTimelineEventsResponsePrivate::parseListTimelineEventsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListTimelineEventsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SsmIncidents
} // namespace QtAws
