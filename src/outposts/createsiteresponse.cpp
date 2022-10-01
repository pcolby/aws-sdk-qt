// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createsiteresponse.h"
#include "createsiteresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Outposts {

/*!
 * \class QtAws::Outposts::CreateSiteResponse
 * \brief The CreateSiteResponse class provides an interace for Outposts CreateSite responses.
 *
 * \inmodule QtAwsOutposts
 *
 *  Amazon Web Services Outposts is a fully managed service that extends Amazon Web Services infrastructure, APIs, and tools
 *  to customer premises. By providing local access to Amazon Web Services managed infrastructure, Amazon Web Services
 *  Outposts enables customers to build and run applications on premises using the same programming interfaces as in Amazon
 *  Web Services Regions, while using local compute and storage resources for lower latency and local data processing
 *
 * \sa OutpostsClient::createSite
 */

/*!
 * Constructs a CreateSiteResponse object for \a reply to \a request, with parent \a parent.
 */
CreateSiteResponse::CreateSiteResponse(
        const CreateSiteRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OutpostsResponse(new CreateSiteResponsePrivate(this), parent)
{
    setRequest(new CreateSiteRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateSiteRequest * CreateSiteResponse::request() const
{
    Q_D(const CreateSiteResponse);
    return static_cast<const CreateSiteRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Outposts CreateSite \a response.
 */
void CreateSiteResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateSiteResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Outposts::CreateSiteResponsePrivate
 * \brief The CreateSiteResponsePrivate class provides private implementation for CreateSiteResponse.
 * \internal
 *
 * \inmodule QtAwsOutposts
 */

/*!
 * Constructs a CreateSiteResponsePrivate object with public implementation \a q.
 */
CreateSiteResponsePrivate::CreateSiteResponsePrivate(
    CreateSiteResponse * const q) : OutpostsResponsePrivate(q)
{

}

/*!
 * Parses a Outposts CreateSite response element from \a xml.
 */
void CreateSiteResponsePrivate::parseCreateSiteResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateSiteResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Outposts
} // namespace QtAws
