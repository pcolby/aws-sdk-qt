// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startcrawlerscheduleresponse.h"
#include "startcrawlerscheduleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::StartCrawlerScheduleResponse
 * \brief The StartCrawlerScheduleResponse class provides an interace for Glue StartCrawlerSchedule responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::startCrawlerSchedule
 */

/*!
 * Constructs a StartCrawlerScheduleResponse object for \a reply to \a request, with parent \a parent.
 */
StartCrawlerScheduleResponse::StartCrawlerScheduleResponse(
        const StartCrawlerScheduleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new StartCrawlerScheduleResponsePrivate(this), parent)
{
    setRequest(new StartCrawlerScheduleRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartCrawlerScheduleRequest * StartCrawlerScheduleResponse::request() const
{
    Q_D(const StartCrawlerScheduleResponse);
    return static_cast<const StartCrawlerScheduleRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue StartCrawlerSchedule \a response.
 */
void StartCrawlerScheduleResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartCrawlerScheduleResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::StartCrawlerScheduleResponsePrivate
 * \brief The StartCrawlerScheduleResponsePrivate class provides private implementation for StartCrawlerScheduleResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a StartCrawlerScheduleResponsePrivate object with public implementation \a q.
 */
StartCrawlerScheduleResponsePrivate::StartCrawlerScheduleResponsePrivate(
    StartCrawlerScheduleResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue StartCrawlerSchedule response element from \a xml.
 */
void StartCrawlerScheduleResponsePrivate::parseStartCrawlerScheduleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartCrawlerScheduleResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
