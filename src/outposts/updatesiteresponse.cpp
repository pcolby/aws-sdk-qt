// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatesiteresponse.h"
#include "updatesiteresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Outposts {

/*!
 * \class QtAws::Outposts::UpdateSiteResponse
 * \brief The UpdateSiteResponse class provides an interace for Outposts UpdateSite responses.
 *
 * \inmodule QtAwsOutposts
 *
 *  Amazon Web Services Outposts is a fully managed service that extends Amazon Web Services infrastructure, APIs, and tools
 *  to customer premises. By providing local access to Amazon Web Services managed infrastructure, Amazon Web Services
 *  Outposts enables customers to build and run applications on premises using the same programming interfaces as in Amazon
 *  Web Services Regions, while using local compute and storage resources for lower latency and local data processing
 *
 * \sa OutpostsClient::updateSite
 */

/*!
 * Constructs a UpdateSiteResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateSiteResponse::UpdateSiteResponse(
        const UpdateSiteRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OutpostsResponse(new UpdateSiteResponsePrivate(this), parent)
{
    setRequest(new UpdateSiteRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateSiteRequest * UpdateSiteResponse::request() const
{
    Q_D(const UpdateSiteResponse);
    return static_cast<const UpdateSiteRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Outposts UpdateSite \a response.
 */
void UpdateSiteResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateSiteResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Outposts::UpdateSiteResponsePrivate
 * \brief The UpdateSiteResponsePrivate class provides private implementation for UpdateSiteResponse.
 * \internal
 *
 * \inmodule QtAwsOutposts
 */

/*!
 * Constructs a UpdateSiteResponsePrivate object with public implementation \a q.
 */
UpdateSiteResponsePrivate::UpdateSiteResponsePrivate(
    UpdateSiteResponse * const q) : OutpostsResponsePrivate(q)
{

}

/*!
 * Parses a Outposts UpdateSite response element from \a xml.
 */
void UpdateSiteResponsePrivate::parseUpdateSiteResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateSiteResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Outposts
} // namespace QtAws
