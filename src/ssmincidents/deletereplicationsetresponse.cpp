// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletereplicationsetresponse.h"
#include "deletereplicationsetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SsmIncidents {

/*!
 * \class QtAws::SsmIncidents::DeleteReplicationSetResponse
 * \brief The DeleteReplicationSetResponse class provides an interace for SsmIncidents DeleteReplicationSet responses.
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
 * \sa SsmIncidentsClient::deleteReplicationSet
 */

/*!
 * Constructs a DeleteReplicationSetResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteReplicationSetResponse::DeleteReplicationSetResponse(
        const DeleteReplicationSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SsmIncidentsResponse(new DeleteReplicationSetResponsePrivate(this), parent)
{
    setRequest(new DeleteReplicationSetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteReplicationSetRequest * DeleteReplicationSetResponse::request() const
{
    Q_D(const DeleteReplicationSetResponse);
    return static_cast<const DeleteReplicationSetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SsmIncidents DeleteReplicationSet \a response.
 */
void DeleteReplicationSetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteReplicationSetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SsmIncidents::DeleteReplicationSetResponsePrivate
 * \brief The DeleteReplicationSetResponsePrivate class provides private implementation for DeleteReplicationSetResponse.
 * \internal
 *
 * \inmodule QtAwsSsmIncidents
 */

/*!
 * Constructs a DeleteReplicationSetResponsePrivate object with public implementation \a q.
 */
DeleteReplicationSetResponsePrivate::DeleteReplicationSetResponsePrivate(
    DeleteReplicationSetResponse * const q) : SsmIncidentsResponsePrivate(q)
{

}

/*!
 * Parses a SsmIncidents DeleteReplicationSet response element from \a xml.
 */
void DeleteReplicationSetResponsePrivate::parseDeleteReplicationSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteReplicationSetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SsmIncidents
} // namespace QtAws
