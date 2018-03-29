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

#include "updatepipelinestatusresponse.h"
#include "updatepipelinestatusresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ElasticTranscoder {

/**
 * @class  UpdatePipelineStatusResponse
 *
 * @brief  Handles ElasticTranscoder UpdatePipelineStatus responses.
 *
 * @see    ElasticTranscoderClient::updatePipelineStatus
 */

/**
 * @brief  Constructs a new UpdatePipelineStatusResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdatePipelineStatusResponse::UpdatePipelineStatusResponse(
        const UpdatePipelineStatusRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticTranscoderResponse(new UpdatePipelineStatusResponsePrivate(this), parent)
{
    setRequest(new UpdatePipelineStatusRequest(request));
    setReply(reply);
}

const UpdatePipelineStatusRequest * UpdatePipelineStatusResponse::request() const
{
    Q_D(const UpdatePipelineStatusResponse);
    return static_cast<const UpdatePipelineStatusRequest *>(d->request);
}

/**
 * @brief  Parse a ElasticTranscoder UpdatePipelineStatus response.
 *
 * @param  response  Response to parse.
 */
void UpdatePipelineStatusResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdatePipelineStatusResponsePrivate
 *
 * @brief  Private implementation for UpdatePipelineStatusResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdatePipelineStatusResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdatePipelineStatusResponse instance.
 */
UpdatePipelineStatusResponsePrivate::UpdatePipelineStatusResponsePrivate(
    UpdatePipelineStatusQueueResponse * const q) : UpdatePipelineStatusPrivate(q)
{

}

/**
 * @brief  Parse an ElasticTranscoder UpdatePipelineStatusResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdatePipelineStatusResponsePrivate::UpdatePipelineStatusResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdatePipelineStatusResponse"));
    /// @todo
}

} // namespace ElasticTranscoder
} // namespace AWS
