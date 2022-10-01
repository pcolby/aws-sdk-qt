// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatereplicationsetresponse.h"
#include "updatereplicationsetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SsmIncidents {

/*!
 * \class QtAws::SsmIncidents::UpdateReplicationSetResponse
 * \brief The UpdateReplicationSetResponse class provides an interace for SsmIncidents UpdateReplicationSet responses.
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
 * \sa SsmIncidentsClient::updateReplicationSet
 */

/*!
 * Constructs a UpdateReplicationSetResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateReplicationSetResponse::UpdateReplicationSetResponse(
        const UpdateReplicationSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SsmIncidentsResponse(new UpdateReplicationSetResponsePrivate(this), parent)
{
    setRequest(new UpdateReplicationSetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateReplicationSetRequest * UpdateReplicationSetResponse::request() const
{
    Q_D(const UpdateReplicationSetResponse);
    return static_cast<const UpdateReplicationSetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SsmIncidents UpdateReplicationSet \a response.
 */
void UpdateReplicationSetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateReplicationSetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SsmIncidents::UpdateReplicationSetResponsePrivate
 * \brief The UpdateReplicationSetResponsePrivate class provides private implementation for UpdateReplicationSetResponse.
 * \internal
 *
 * \inmodule QtAwsSsmIncidents
 */

/*!
 * Constructs a UpdateReplicationSetResponsePrivate object with public implementation \a q.
 */
UpdateReplicationSetResponsePrivate::UpdateReplicationSetResponsePrivate(
    UpdateReplicationSetResponse * const q) : SsmIncidentsResponsePrivate(q)
{

}

/*!
 * Parses a SsmIncidents UpdateReplicationSet response element from \a xml.
 */
void UpdateReplicationSetResponsePrivate::parseUpdateReplicationSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateReplicationSetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SsmIncidents
} // namespace QtAws
