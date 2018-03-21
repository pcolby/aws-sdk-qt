/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "updatecrawlerscheduleresponse.h"
#include "updatecrawlerscheduleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Glue {

/**
 * @class  UpdateCrawlerScheduleResponse
 *
 * @brief  Handles Glue UpdateCrawlerSchedule responses.
 *
 * @see    GlueClient::updateCrawlerSchedule
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateCrawlerScheduleResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new UpdateCrawlerScheduleResponsePrivate(this), parent)
{
    setRequest(new UpdateCrawlerScheduleRequest(request));
    setReply(reply);
}

const UpdateCrawlerScheduleRequest * UpdateCrawlerScheduleResponse::request() const
{
    Q_D(const UpdateCrawlerScheduleResponse);
    return static_cast<const UpdateCrawlerScheduleRequest *>(d->request);
}

/**
 * @brief  Parse a Glue UpdateCrawlerSchedule response.
 *
 * @param  response  Response to parse.
 */
void UpdateCrawlerScheduleResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateCrawlerScheduleResponsePrivate
 *
 * @brief  Private implementation for UpdateCrawlerScheduleResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateCrawlerScheduleResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateCrawlerScheduleResponse instance.
 */
UpdateCrawlerScheduleResponsePrivate::UpdateCrawlerScheduleResponsePrivate(
    UpdateCrawlerScheduleQueueResponse * const q) : UpdateCrawlerSchedulePrivate(q)
{

}

/**
 * @brief  Parse an Glue UpdateCrawlerScheduleResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateCrawlerScheduleResponsePrivate::UpdateCrawlerScheduleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateCrawlerScheduleResponse"));
    /// @todo
}

} // namespace Glue
} // namespace AWS
