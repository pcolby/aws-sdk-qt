// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listreplicationsetsresponse.h"
#include "listreplicationsetsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SsmIncidents {

/*!
 * \class QtAws::SsmIncidents::ListReplicationSetsResponse
 * \brief The ListReplicationSetsResponse class provides an interace for SsmIncidents ListReplicationSets responses.
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
 * \sa SsmIncidentsClient::listReplicationSets
 */

/*!
 * Constructs a ListReplicationSetsResponse object for \a reply to \a request, with parent \a parent.
 */
ListReplicationSetsResponse::ListReplicationSetsResponse(
        const ListReplicationSetsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SsmIncidentsResponse(new ListReplicationSetsResponsePrivate(this), parent)
{
    setRequest(new ListReplicationSetsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListReplicationSetsRequest * ListReplicationSetsResponse::request() const
{
    Q_D(const ListReplicationSetsResponse);
    return static_cast<const ListReplicationSetsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SsmIncidents ListReplicationSets \a response.
 */
void ListReplicationSetsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListReplicationSetsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SsmIncidents::ListReplicationSetsResponsePrivate
 * \brief The ListReplicationSetsResponsePrivate class provides private implementation for ListReplicationSetsResponse.
 * \internal
 *
 * \inmodule QtAwsSsmIncidents
 */

/*!
 * Constructs a ListReplicationSetsResponsePrivate object with public implementation \a q.
 */
ListReplicationSetsResponsePrivate::ListReplicationSetsResponsePrivate(
    ListReplicationSetsResponse * const q) : SsmIncidentsResponsePrivate(q)
{

}

/*!
 * Parses a SsmIncidents ListReplicationSets response element from \a xml.
 */
void ListReplicationSetsResponsePrivate::parseListReplicationSetsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListReplicationSetsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SsmIncidents
} // namespace QtAws
