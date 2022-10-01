// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getcrawlersresponse.h"
#include "getcrawlersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetCrawlersResponse
 * \brief The GetCrawlersResponse class provides an interace for Glue GetCrawlers responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::getCrawlers
 */

/*!
 * Constructs a GetCrawlersResponse object for \a reply to \a request, with parent \a parent.
 */
GetCrawlersResponse::GetCrawlersResponse(
        const GetCrawlersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new GetCrawlersResponsePrivate(this), parent)
{
    setRequest(new GetCrawlersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetCrawlersRequest * GetCrawlersResponse::request() const
{
    Q_D(const GetCrawlersResponse);
    return static_cast<const GetCrawlersRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue GetCrawlers \a response.
 */
void GetCrawlersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetCrawlersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::GetCrawlersResponsePrivate
 * \brief The GetCrawlersResponsePrivate class provides private implementation for GetCrawlersResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetCrawlersResponsePrivate object with public implementation \a q.
 */
GetCrawlersResponsePrivate::GetCrawlersResponsePrivate(
    GetCrawlersResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue GetCrawlers response element from \a xml.
 */
void GetCrawlersResponsePrivate::parseGetCrawlersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetCrawlersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
