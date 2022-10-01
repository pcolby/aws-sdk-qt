// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteresponseplanresponse.h"
#include "deleteresponseplanresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SsmIncidents {

/*!
 * \class QtAws::SsmIncidents::DeleteResponsePlanResponse
 * \brief The DeleteResponsePlanResponse class provides an interace for SsmIncidents DeleteResponsePlan responses.
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
 * \sa SsmIncidentsClient::deleteResponsePlan
 */

/*!
 * Constructs a DeleteResponsePlanResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteResponsePlanResponse::DeleteResponsePlanResponse(
        const DeleteResponsePlanRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SsmIncidentsResponse(new DeleteResponsePlanResponsePrivate(this), parent)
{
    setRequest(new DeleteResponsePlanRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteResponsePlanRequest * DeleteResponsePlanResponse::request() const
{
    Q_D(const DeleteResponsePlanResponse);
    return static_cast<const DeleteResponsePlanRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SsmIncidents DeleteResponsePlan \a response.
 */
void DeleteResponsePlanResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteResponsePlanResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SsmIncidents::DeleteResponsePlanResponsePrivate
 * \brief The DeleteResponsePlanResponsePrivate class provides private implementation for DeleteResponsePlanResponse.
 * \internal
 *
 * \inmodule QtAwsSsmIncidents
 */

/*!
 * Constructs a DeleteResponsePlanResponsePrivate object with public implementation \a q.
 */
DeleteResponsePlanResponsePrivate::DeleteResponsePlanResponsePrivate(
    DeleteResponsePlanResponse * const q) : SsmIncidentsResponsePrivate(q)
{

}

/*!
 * Parses a SsmIncidents DeleteResponsePlan response element from \a xml.
 */
void DeleteResponsePlanResponsePrivate::parseDeleteResponsePlanResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteResponsePlanResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SsmIncidents
} // namespace QtAws
