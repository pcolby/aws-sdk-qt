// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listresponseplansresponse.h"
#include "listresponseplansresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SsmIncidents {

/*!
 * \class QtAws::SsmIncidents::ListResponsePlansResponse
 * \brief The ListResponsePlansResponse class provides an interace for SsmIncidents ListResponsePlans responses.
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
 * \sa SsmIncidentsClient::listResponsePlans
 */

/*!
 * Constructs a ListResponsePlansResponse object for \a reply to \a request, with parent \a parent.
 */
ListResponsePlansResponse::ListResponsePlansResponse(
        const ListResponsePlansRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SsmIncidentsResponse(new ListResponsePlansResponsePrivate(this), parent)
{
    setRequest(new ListResponsePlansRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListResponsePlansRequest * ListResponsePlansResponse::request() const
{
    Q_D(const ListResponsePlansResponse);
    return static_cast<const ListResponsePlansRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SsmIncidents ListResponsePlans \a response.
 */
void ListResponsePlansResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListResponsePlansResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SsmIncidents::ListResponsePlansResponsePrivate
 * \brief The ListResponsePlansResponsePrivate class provides private implementation for ListResponsePlansResponse.
 * \internal
 *
 * \inmodule QtAwsSsmIncidents
 */

/*!
 * Constructs a ListResponsePlansResponsePrivate object with public implementation \a q.
 */
ListResponsePlansResponsePrivate::ListResponsePlansResponsePrivate(
    ListResponsePlansResponse * const q) : SsmIncidentsResponsePrivate(q)
{

}

/*!
 * Parses a SsmIncidents ListResponsePlans response element from \a xml.
 */
void ListResponsePlansResponsePrivate::parseListResponsePlansResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListResponsePlansResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SsmIncidents
} // namespace QtAws
