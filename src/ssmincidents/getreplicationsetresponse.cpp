// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getreplicationsetresponse.h"
#include "getreplicationsetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SsmIncidents {

/*!
 * \class QtAws::SsmIncidents::GetReplicationSetResponse
 * \brief The GetReplicationSetResponse class provides an interace for SsmIncidents GetReplicationSet responses.
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
 * \sa SsmIncidentsClient::getReplicationSet
 */

/*!
 * Constructs a GetReplicationSetResponse object for \a reply to \a request, with parent \a parent.
 */
GetReplicationSetResponse::GetReplicationSetResponse(
        const GetReplicationSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SsmIncidentsResponse(new GetReplicationSetResponsePrivate(this), parent)
{
    setRequest(new GetReplicationSetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetReplicationSetRequest * GetReplicationSetResponse::request() const
{
    Q_D(const GetReplicationSetResponse);
    return static_cast<const GetReplicationSetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SsmIncidents GetReplicationSet \a response.
 */
void GetReplicationSetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetReplicationSetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SsmIncidents::GetReplicationSetResponsePrivate
 * \brief The GetReplicationSetResponsePrivate class provides private implementation for GetReplicationSetResponse.
 * \internal
 *
 * \inmodule QtAwsSsmIncidents
 */

/*!
 * Constructs a GetReplicationSetResponsePrivate object with public implementation \a q.
 */
GetReplicationSetResponsePrivate::GetReplicationSetResponsePrivate(
    GetReplicationSetResponse * const q) : SsmIncidentsResponsePrivate(q)
{

}

/*!
 * Parses a SsmIncidents GetReplicationSet response element from \a xml.
 */
void GetReplicationSetResponsePrivate::parseGetReplicationSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetReplicationSetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SsmIncidents
} // namespace QtAws
