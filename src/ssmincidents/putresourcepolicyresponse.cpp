// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putresourcepolicyresponse.h"
#include "putresourcepolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SsmIncidents {

/*!
 * \class QtAws::SsmIncidents::PutResourcePolicyResponse
 * \brief The PutResourcePolicyResponse class provides an interace for SsmIncidents PutResourcePolicy responses.
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
 * \sa SsmIncidentsClient::putResourcePolicy
 */

/*!
 * Constructs a PutResourcePolicyResponse object for \a reply to \a request, with parent \a parent.
 */
PutResourcePolicyResponse::PutResourcePolicyResponse(
        const PutResourcePolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SsmIncidentsResponse(new PutResourcePolicyResponsePrivate(this), parent)
{
    setRequest(new PutResourcePolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutResourcePolicyRequest * PutResourcePolicyResponse::request() const
{
    Q_D(const PutResourcePolicyResponse);
    return static_cast<const PutResourcePolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SsmIncidents PutResourcePolicy \a response.
 */
void PutResourcePolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutResourcePolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SsmIncidents::PutResourcePolicyResponsePrivate
 * \brief The PutResourcePolicyResponsePrivate class provides private implementation for PutResourcePolicyResponse.
 * \internal
 *
 * \inmodule QtAwsSsmIncidents
 */

/*!
 * Constructs a PutResourcePolicyResponsePrivate object with public implementation \a q.
 */
PutResourcePolicyResponsePrivate::PutResourcePolicyResponsePrivate(
    PutResourcePolicyResponse * const q) : SsmIncidentsResponsePrivate(q)
{

}

/*!
 * Parses a SsmIncidents PutResourcePolicy response element from \a xml.
 */
void PutResourcePolicyResponsePrivate::parsePutResourcePolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutResourcePolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SsmIncidents
} // namespace QtAws
