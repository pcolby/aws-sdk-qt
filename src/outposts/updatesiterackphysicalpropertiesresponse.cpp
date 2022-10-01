// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatesiterackphysicalpropertiesresponse.h"
#include "updatesiterackphysicalpropertiesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Outposts {

/*!
 * \class QtAws::Outposts::UpdateSiteRackPhysicalPropertiesResponse
 * \brief The UpdateSiteRackPhysicalPropertiesResponse class provides an interace for Outposts UpdateSiteRackPhysicalProperties responses.
 *
 * \inmodule QtAwsOutposts
 *
 *  Amazon Web Services Outposts is a fully managed service that extends Amazon Web Services infrastructure, APIs, and tools
 *  to customer premises. By providing local access to Amazon Web Services managed infrastructure, Amazon Web Services
 *  Outposts enables customers to build and run applications on premises using the same programming interfaces as in Amazon
 *  Web Services Regions, while using local compute and storage resources for lower latency and local data processing
 *
 * \sa OutpostsClient::updateSiteRackPhysicalProperties
 */

/*!
 * Constructs a UpdateSiteRackPhysicalPropertiesResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateSiteRackPhysicalPropertiesResponse::UpdateSiteRackPhysicalPropertiesResponse(
        const UpdateSiteRackPhysicalPropertiesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OutpostsResponse(new UpdateSiteRackPhysicalPropertiesResponsePrivate(this), parent)
{
    setRequest(new UpdateSiteRackPhysicalPropertiesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateSiteRackPhysicalPropertiesRequest * UpdateSiteRackPhysicalPropertiesResponse::request() const
{
    Q_D(const UpdateSiteRackPhysicalPropertiesResponse);
    return static_cast<const UpdateSiteRackPhysicalPropertiesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Outposts UpdateSiteRackPhysicalProperties \a response.
 */
void UpdateSiteRackPhysicalPropertiesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateSiteRackPhysicalPropertiesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Outposts::UpdateSiteRackPhysicalPropertiesResponsePrivate
 * \brief The UpdateSiteRackPhysicalPropertiesResponsePrivate class provides private implementation for UpdateSiteRackPhysicalPropertiesResponse.
 * \internal
 *
 * \inmodule QtAwsOutposts
 */

/*!
 * Constructs a UpdateSiteRackPhysicalPropertiesResponsePrivate object with public implementation \a q.
 */
UpdateSiteRackPhysicalPropertiesResponsePrivate::UpdateSiteRackPhysicalPropertiesResponsePrivate(
    UpdateSiteRackPhysicalPropertiesResponse * const q) : OutpostsResponsePrivate(q)
{

}

/*!
 * Parses a Outposts UpdateSiteRackPhysicalProperties response element from \a xml.
 */
void UpdateSiteRackPhysicalPropertiesResponsePrivate::parseUpdateSiteRackPhysicalPropertiesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateSiteRackPhysicalPropertiesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Outposts
} // namespace QtAws
