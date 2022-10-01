// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updaterelateditemsresponse.h"
#include "updaterelateditemsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SsmIncidents {

/*!
 * \class QtAws::SsmIncidents::UpdateRelatedItemsResponse
 * \brief The UpdateRelatedItemsResponse class provides an interace for SsmIncidents UpdateRelatedItems responses.
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
 * \sa SsmIncidentsClient::updateRelatedItems
 */

/*!
 * Constructs a UpdateRelatedItemsResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateRelatedItemsResponse::UpdateRelatedItemsResponse(
        const UpdateRelatedItemsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SsmIncidentsResponse(new UpdateRelatedItemsResponsePrivate(this), parent)
{
    setRequest(new UpdateRelatedItemsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateRelatedItemsRequest * UpdateRelatedItemsResponse::request() const
{
    Q_D(const UpdateRelatedItemsResponse);
    return static_cast<const UpdateRelatedItemsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SsmIncidents UpdateRelatedItems \a response.
 */
void UpdateRelatedItemsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateRelatedItemsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SsmIncidents::UpdateRelatedItemsResponsePrivate
 * \brief The UpdateRelatedItemsResponsePrivate class provides private implementation for UpdateRelatedItemsResponse.
 * \internal
 *
 * \inmodule QtAwsSsmIncidents
 */

/*!
 * Constructs a UpdateRelatedItemsResponsePrivate object with public implementation \a q.
 */
UpdateRelatedItemsResponsePrivate::UpdateRelatedItemsResponsePrivate(
    UpdateRelatedItemsResponse * const q) : SsmIncidentsResponsePrivate(q)
{

}

/*!
 * Parses a SsmIncidents UpdateRelatedItems response element from \a xml.
 */
void UpdateRelatedItemsResponsePrivate::parseUpdateRelatedItemsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateRelatedItemsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SsmIncidents
} // namespace QtAws
