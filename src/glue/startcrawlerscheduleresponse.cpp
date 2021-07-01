/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
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
