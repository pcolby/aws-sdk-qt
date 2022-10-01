// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletesiteresponse.h"
#include "deletesiteresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Outposts {

/*!
 * \class QtAws::Outposts::DeleteSiteResponse
 * \brief The DeleteSiteResponse class provides an interace for Outposts DeleteSite responses.
 *
 * \inmodule QtAwsOutposts
 *
 *  Amazon Web Services Outposts is a fully managed service that extends Amazon Web Services infrastructure, APIs, and tools
 *  to customer premises. By providing local access to Amazon Web Services managed infrastructure, Amazon Web Services
 *  Outposts enables customers to build and run applications on premises using the same programming interfaces as in Amazon
 *  Web Services Regions, while using local compute and storage resources for lower latency and local data processing
 *
 * \sa OutpostsClient::deleteSite
 */

/*!
 * Constructs a DeleteSiteResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteSiteResponse::DeleteSiteResponse(
        const DeleteSiteRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OutpostsResponse(new DeleteSiteResponsePrivate(this), parent)
{
    setRequest(new DeleteSiteRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteSiteRequest * DeleteSiteResponse::request() const
{
    Q_D(const DeleteSiteResponse);
    return static_cast<const DeleteSiteRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Outposts DeleteSite \a response.
 */
void DeleteSiteResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteSiteResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Outposts::DeleteSiteResponsePrivate
 * \brief The DeleteSiteResponsePrivate class provides private implementation for DeleteSiteResponse.
 * \internal
 *
 * \inmodule QtAwsOutposts
 */

/*!
 * Constructs a DeleteSiteResponsePrivate object with public implementation \a q.
 */
DeleteSiteResponsePrivate::DeleteSiteResponsePrivate(
    DeleteSiteResponse * const q) : OutpostsResponsePrivate(q)
{

}

/*!
 * Parses a Outposts DeleteSite response element from \a xml.
 */
void DeleteSiteResponsePrivate::parseDeleteSiteResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteSiteResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Outposts
} // namespace QtAws
