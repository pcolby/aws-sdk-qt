// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "stopcrawlerresponse.h"
#include "stopcrawlerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::StopCrawlerResponse
 * \brief The StopCrawlerResponse class provides an interace for Glue StopCrawler responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::stopCrawler
 */

/*!
 * Constructs a StopCrawlerResponse object for \a reply to \a request, with parent \a parent.
 */
StopCrawlerResponse::StopCrawlerResponse(
        const StopCrawlerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new StopCrawlerResponsePrivate(this), parent)
{
    setRequest(new StopCrawlerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StopCrawlerRequest * StopCrawlerResponse::request() const
{
    Q_D(const StopCrawlerResponse);
    return static_cast<const StopCrawlerRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue StopCrawler \a response.
 */
void StopCrawlerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StopCrawlerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::StopCrawlerResponsePrivate
 * \brief The StopCrawlerResponsePrivate class provides private implementation for StopCrawlerResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a StopCrawlerResponsePrivate object with public implementation \a q.
 */
StopCrawlerResponsePrivate::StopCrawlerResponsePrivate(
    StopCrawlerResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue StopCrawler response element from \a xml.
 */
void StopCrawlerResponsePrivate::parseStopCrawlerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopCrawlerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
