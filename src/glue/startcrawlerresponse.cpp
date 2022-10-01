// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startcrawlerresponse.h"
#include "startcrawlerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::StartCrawlerResponse
 * \brief The StartCrawlerResponse class provides an interace for Glue StartCrawler responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::startCrawler
 */

/*!
 * Constructs a StartCrawlerResponse object for \a reply to \a request, with parent \a parent.
 */
StartCrawlerResponse::StartCrawlerResponse(
        const StartCrawlerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new StartCrawlerResponsePrivate(this), parent)
{
    setRequest(new StartCrawlerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartCrawlerRequest * StartCrawlerResponse::request() const
{
    Q_D(const StartCrawlerResponse);
    return static_cast<const StartCrawlerRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue StartCrawler \a response.
 */
void StartCrawlerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartCrawlerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::StartCrawlerResponsePrivate
 * \brief The StartCrawlerResponsePrivate class provides private implementation for StartCrawlerResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a StartCrawlerResponsePrivate object with public implementation \a q.
 */
StartCrawlerResponsePrivate::StartCrawlerResponsePrivate(
    StartCrawlerResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue StartCrawler response element from \a xml.
 */
void StartCrawlerResponsePrivate::parseStartCrawlerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartCrawlerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
