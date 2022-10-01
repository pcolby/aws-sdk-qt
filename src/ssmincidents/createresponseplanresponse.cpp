// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createresponseplanresponse.h"
#include "createresponseplanresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SsmIncidents {

/*!
 * \class QtAws::SsmIncidents::CreateResponsePlanResponse
 * \brief The CreateResponsePlanResponse class provides an interace for SsmIncidents CreateResponsePlan responses.
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
 * \sa SsmIncidentsClient::createResponsePlan
 */

/*!
 * Constructs a CreateResponsePlanResponse object for \a reply to \a request, with parent \a parent.
 */
CreateResponsePlanResponse::CreateResponsePlanResponse(
        const CreateResponsePlanRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SsmIncidentsResponse(new CreateResponsePlanResponsePrivate(this), parent)
{
    setRequest(new CreateResponsePlanRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateResponsePlanRequest * CreateResponsePlanResponse::request() const
{
    Q_D(const CreateResponsePlanResponse);
    return static_cast<const CreateResponsePlanRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SsmIncidents CreateResponsePlan \a response.
 */
void CreateResponsePlanResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateResponsePlanResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SsmIncidents::CreateResponsePlanResponsePrivate
 * \brief The CreateResponsePlanResponsePrivate class provides private implementation for CreateResponsePlanResponse.
 * \internal
 *
 * \inmodule QtAwsSsmIncidents
 */

/*!
 * Constructs a CreateResponsePlanResponsePrivate object with public implementation \a q.
 */
CreateResponsePlanResponsePrivate::CreateResponsePlanResponsePrivate(
    CreateResponsePlanResponse * const q) : SsmIncidentsResponsePrivate(q)
{

}

/*!
 * Parses a SsmIncidents CreateResponsePlan response element from \a xml.
 */
void CreateResponsePlanResponsePrivate::parseCreateResponsePlanResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateResponsePlanResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SsmIncidents
} // namespace QtAws
