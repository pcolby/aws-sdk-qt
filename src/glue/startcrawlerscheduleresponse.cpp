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

#include "startcrawlerscheduleresponse.h"
#include "startcrawlerscheduleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/**
 * @class  StartCrawlerScheduleResponse
 *
 * @brief  Handles Glue StartCrawlerSchedule responses.
 *
 * @see    GlueClient::startCrawlerSchedule
 */

/**
 * @brief  Constructs a new StartCrawlerScheduleResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
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

const StartCrawlerScheduleRequest * StartCrawlerScheduleResponse::request() const
{
    Q_D(const StartCrawlerScheduleResponse);
    return static_cast<const StartCrawlerScheduleRequest *>(d->request);
}

/**
 * @brief  Parse a Glue StartCrawlerSchedule response.
 *
 * @param  response  Response to parse.
 */
void StartCrawlerScheduleResponse::parseSuccess(QIODevice &response)
{
    Q_D(StartCrawlerScheduleResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  StartCrawlerScheduleResponsePrivate
 *
 * @brief  Private implementation for StartCrawlerScheduleResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StartCrawlerScheduleResponsePrivate object.
 *
 * @param  q  Pointer to this object's public StartCrawlerScheduleResponse instance.
 */
StartCrawlerScheduleResponsePrivate::StartCrawlerScheduleResponsePrivate(
    StartCrawlerScheduleResponse * const q) : GlueResponsePrivate(q)
{

}

/**
 * @brief  Parse an Glue StartCrawlerScheduleResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void StartCrawlerScheduleResponsePrivate::StartCrawlerScheduleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartCrawlerScheduleResponse"));
    /// @todo
}

} // namespace Glue
} // namespace QtAws
