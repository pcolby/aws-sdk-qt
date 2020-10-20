/*
    Copyright 2013-2020 Paul Colby

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

#include "updatecrawlerscheduleresponse.h"
#include "updatecrawlerscheduleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::UpdateCrawlerScheduleResponse
 * \brief The UpdateCrawlerScheduleResponse class provides an interace for Glue UpdateCrawlerSchedule responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::updateCrawlerSchedule
 */

/*!
 * Constructs a UpdateCrawlerScheduleResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateCrawlerScheduleResponse::UpdateCrawlerScheduleResponse(
        const UpdateCrawlerScheduleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new UpdateCrawlerScheduleResponsePrivate(this), parent)
{
    setRequest(new UpdateCrawlerScheduleRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateCrawlerScheduleRequest * UpdateCrawlerScheduleResponse::request() const
{
    Q_D(const UpdateCrawlerScheduleResponse);
    return static_cast<const UpdateCrawlerScheduleRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue UpdateCrawlerSchedule \a response.
 */
void UpdateCrawlerScheduleResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateCrawlerScheduleResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::UpdateCrawlerScheduleResponsePrivate
 * \brief The UpdateCrawlerScheduleResponsePrivate class provides private implementation for UpdateCrawlerScheduleResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a UpdateCrawlerScheduleResponsePrivate object with public implementation \a q.
 */
UpdateCrawlerScheduleResponsePrivate::UpdateCrawlerScheduleResponsePrivate(
    UpdateCrawlerScheduleResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue UpdateCrawlerSchedule response element from \a xml.
 */
void UpdateCrawlerScheduleResponsePrivate::parseUpdateCrawlerScheduleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateCrawlerScheduleResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
