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

#include "updatepipelinenotificationsresponse.h"
#include "updatepipelinenotificationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ElasticTranscoder {

/**
 * @class  UpdatePipelineNotificationsResponse
 *
 * @brief  Handles ElasticTranscoder UpdatePipelineNotifications responses.
 *
 * @see    ElasticTranscoderClient::updatePipelineNotifications
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdatePipelineNotificationsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticTranscoderResponse(new UpdatePipelineNotificationsResponsePrivate(this), parent)
{
    setRequest(new UpdatePipelineNotificationsRequest(request));
    setReply(reply);
}

const UpdatePipelineNotificationsRequest * UpdatePipelineNotificationsResponse::request() const
{
    Q_D(const UpdatePipelineNotificationsResponse);
    return static_cast<const UpdatePipelineNotificationsRequest *>(d->request);
}

/**
 * @brief  Parse a ElasticTranscoder UpdatePipelineNotifications response.
 *
 * @param  response  Response to parse.
 */
void UpdatePipelineNotificationsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdatePipelineNotificationsResponsePrivate
 *
 * @brief  Private implementation for UpdatePipelineNotificationsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdatePipelineNotificationsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdatePipelineNotificationsResponse instance.
 */
UpdatePipelineNotificationsResponsePrivate::UpdatePipelineNotificationsResponsePrivate(
    UpdatePipelineNotificationsQueueResponse * const q) : UpdatePipelineNotificationsPrivate(q)
{

}

/**
 * @brief  Parse an ElasticTranscoder UpdatePipelineNotificationsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdatePipelineNotificationsResponsePrivate::UpdatePipelineNotificationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdatePipelineNotificationsResponse"));
    /// @todo
}
