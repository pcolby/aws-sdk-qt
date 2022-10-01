// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listincidentrecordsresponse.h"
#include "listincidentrecordsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SsmIncidents {

/*!
 * \class QtAws::SsmIncidents::ListIncidentRecordsResponse
 * \brief The ListIncidentRecordsResponse class provides an interace for SsmIncidents ListIncidentRecords responses.
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
 * \sa SsmIncidentsClient::listIncidentRecords
 */

/*!
 * Constructs a ListIncidentRecordsResponse object for \a reply to \a request, with parent \a parent.
 */
ListIncidentRecordsResponse::ListIncidentRecordsResponse(
        const ListIncidentRecordsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SsmIncidentsResponse(new ListIncidentRecordsResponsePrivate(this), parent)
{
    setRequest(new ListIncidentRecordsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListIncidentRecordsRequest * ListIncidentRecordsResponse::request() const
{
    Q_D(const ListIncidentRecordsResponse);
    return static_cast<const ListIncidentRecordsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SsmIncidents ListIncidentRecords \a response.
 */
void ListIncidentRecordsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListIncidentRecordsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SsmIncidents::ListIncidentRecordsResponsePrivate
 * \brief The ListIncidentRecordsResponsePrivate class provides private implementation for ListIncidentRecordsResponse.
 * \internal
 *
 * \inmodule QtAwsSsmIncidents
 */

/*!
 * Constructs a ListIncidentRecordsResponsePrivate object with public implementation \a q.
 */
ListIncidentRecordsResponsePrivate::ListIncidentRecordsResponsePrivate(
    ListIncidentRecordsResponse * const q) : SsmIncidentsResponsePrivate(q)
{

}

/*!
 * Parses a SsmIncidents ListIncidentRecords response element from \a xml.
 */
void ListIncidentRecordsResponsePrivate::parseListIncidentRecordsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListIncidentRecordsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SsmIncidents
} // namespace QtAws
