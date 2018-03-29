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

namespace AWS {
namespace Glue {

/**
 * @class  StopCrawlerScheduleResponse
 *
 * @brief  Handles Glue StopCrawlerSchedule responses.
 *
 * @see    GlueClient::stopCrawlerSchedule
 */

/**
 * @brief  Constructs a new StopCrawlerScheduleResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
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

const StopCrawlerScheduleRequest * StopCrawlerScheduleResponse::request() const
{
    Q_D(const StopCrawlerScheduleResponse);
    return static_cast<const StopCrawlerScheduleRequest *>(d->request);
}

/**
 * @brief  Parse a Glue StopCrawlerSchedule response.
 *
 * @param  response  Response to parse.
 */
void StopCrawlerScheduleResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  StopCrawlerScheduleResponsePrivate
 *
 * @brief  Private implementation for StopCrawlerScheduleResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StopCrawlerScheduleResponsePrivate object.
 *
 * @param  q  Pointer to this object's public StopCrawlerScheduleResponse instance.
 */
StopCrawlerScheduleResponsePrivate::StopCrawlerScheduleResponsePrivate(
    StopCrawlerScheduleQueueResponse * const q) : StopCrawlerSchedulePrivate(q)
{

}

/**
 * @brief  Parse an Glue StopCrawlerScheduleResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void StopCrawlerScheduleResponsePrivate::StopCrawlerScheduleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopCrawlerScheduleResponse"));
    /// @todo
}

} // namespace Glue
} // namespace AWS
