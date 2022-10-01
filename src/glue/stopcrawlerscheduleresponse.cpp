// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "stopcrawlerscheduleresponse.h"
#include "stopcrawlerscheduleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::StopCrawlerScheduleResponse
 * \brief The StopCrawlerScheduleResponse class provides an interace for Glue StopCrawlerSchedule responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::stopCrawlerSchedule
 */

/*!
 * Constructs a StopCrawlerScheduleResponse object for \a reply to \a request, with parent \a parent.
 */
StopCrawlerScheduleResponse::StopCrawlerScheduleResponse(
        const StopCrawlerScheduleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new StopCrawlerScheduleResponsePrivate(this), parent)
{
    setRequest(new StopCrawlerScheduleRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StopCrawlerScheduleRequest * StopCrawlerScheduleResponse::request() const
{
    Q_D(const StopCrawlerScheduleResponse);
    return static_cast<const StopCrawlerScheduleRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue StopCrawlerSchedule \a response.
 */
void StopCrawlerScheduleResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StopCrawlerScheduleResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::StopCrawlerScheduleResponsePrivate
 * \brief The StopCrawlerScheduleResponsePrivate class provides private implementation for StopCrawlerScheduleResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a StopCrawlerScheduleResponsePrivate object with public implementation \a q.
 */
StopCrawlerScheduleResponsePrivate::StopCrawlerScheduleResponsePrivate(
    StopCrawlerScheduleResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue StopCrawlerSchedule response element from \a xml.
 */
void StopCrawlerScheduleResponsePrivate::parseStopCrawlerScheduleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopCrawlerScheduleResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
