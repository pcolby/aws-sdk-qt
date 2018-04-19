/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

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
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
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
    Q_D(StopCrawlerScheduleResponse);
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
    /// @todo
}

} // namespace Glue
} // namespace QtAws
