// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getincidentrecordresponse.h"
#include "getincidentrecordresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SsmIncidents {

/*!
 * \class QtAws::SsmIncidents::GetIncidentRecordResponse
 * \brief The GetIncidentRecordResponse class provides an interace for SsmIncidents GetIncidentRecord responses.
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
 * \sa SsmIncidentsClient::getIncidentRecord
 */

/*!
 * Constructs a GetIncidentRecordResponse object for \a reply to \a request, with parent \a parent.
 */
GetIncidentRecordResponse::GetIncidentRecordResponse(
        const GetIncidentRecordRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SsmIncidentsResponse(new GetIncidentRecordResponsePrivate(this), parent)
{
    setRequest(new GetIncidentRecordRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetIncidentRecordRequest * GetIncidentRecordResponse::request() const
{
    Q_D(const GetIncidentRecordResponse);
    return static_cast<const GetIncidentRecordRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SsmIncidents GetIncidentRecord \a response.
 */
void GetIncidentRecordResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetIncidentRecordResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SsmIncidents::GetIncidentRecordResponsePrivate
 * \brief The GetIncidentRecordResponsePrivate class provides private implementation for GetIncidentRecordResponse.
 * \internal
 *
 * \inmodule QtAwsSsmIncidents
 */

/*!
 * Constructs a GetIncidentRecordResponsePrivate object with public implementation \a q.
 */
GetIncidentRecordResponsePrivate::GetIncidentRecordResponsePrivate(
    GetIncidentRecordResponse * const q) : SsmIncidentsResponsePrivate(q)
{

}

/*!
 * Parses a SsmIncidents GetIncidentRecord response element from \a xml.
 */
void GetIncidentRecordResponsePrivate::parseGetIncidentRecordResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetIncidentRecordResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SsmIncidents
} // namespace QtAws
