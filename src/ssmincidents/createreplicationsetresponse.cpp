// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createreplicationsetresponse.h"
#include "createreplicationsetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SsmIncidents {

/*!
 * \class QtAws::SsmIncidents::CreateReplicationSetResponse
 * \brief The CreateReplicationSetResponse class provides an interace for SsmIncidents CreateReplicationSet responses.
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
 * \sa SsmIncidentsClient::createReplicationSet
 */

/*!
 * Constructs a CreateReplicationSetResponse object for \a reply to \a request, with parent \a parent.
 */
CreateReplicationSetResponse::CreateReplicationSetResponse(
        const CreateReplicationSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SsmIncidentsResponse(new CreateReplicationSetResponsePrivate(this), parent)
{
    setRequest(new CreateReplicationSetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateReplicationSetRequest * CreateReplicationSetResponse::request() const
{
    Q_D(const CreateReplicationSetResponse);
    return static_cast<const CreateReplicationSetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SsmIncidents CreateReplicationSet \a response.
 */
void CreateReplicationSetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateReplicationSetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SsmIncidents::CreateReplicationSetResponsePrivate
 * \brief The CreateReplicationSetResponsePrivate class provides private implementation for CreateReplicationSetResponse.
 * \internal
 *
 * \inmodule QtAwsSsmIncidents
 */

/*!
 * Constructs a CreateReplicationSetResponsePrivate object with public implementation \a q.
 */
CreateReplicationSetResponsePrivate::CreateReplicationSetResponsePrivate(
    CreateReplicationSetResponse * const q) : SsmIncidentsResponsePrivate(q)
{

}

/*!
 * Parses a SsmIncidents CreateReplicationSet response element from \a xml.
 */
void CreateReplicationSetResponsePrivate::parseCreateReplicationSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateReplicationSetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SsmIncidents
} // namespace QtAws
