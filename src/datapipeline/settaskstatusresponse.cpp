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

#include "settaskstatusresponse.h"
#include "settaskstatusresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace DataPipeline {

/**
 * @class  SetTaskStatusResponse
 *
 * @brief  Handles DataPipeline SetTaskStatus responses.
 *
 * @see    DataPipelineClient::setTaskStatus
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SetTaskStatusResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DataPipelineResponse(new SetTaskStatusResponsePrivate(this), parent)
{
    setRequest(new SetTaskStatusRequest(request));
    setReply(reply);
}

const SetTaskStatusRequest * SetTaskStatusResponse::request() const
{
    Q_D(const SetTaskStatusResponse);
    return static_cast<const SetTaskStatusRequest *>(d->request);
}

/**
 * @brief  Parse a DataPipeline SetTaskStatus response.
 *
 * @param  response  Response to parse.
 */
void SetTaskStatusResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  SetTaskStatusResponsePrivate
 *
 * @brief  Private implementation for SetTaskStatusResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SetTaskStatusResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SetTaskStatusResponse instance.
 */
SetTaskStatusResponsePrivate::SetTaskStatusResponsePrivate(
    SetTaskStatusQueueResponse * const q) : SetTaskStatusPrivate(q)
{

}

/**
 * @brief  Parse an DataPipeline SetTaskStatusResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void SetTaskStatusResponsePrivate::SetTaskStatusResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SetTaskStatusResponse"));
    /// @todo
}

} // namespace DataPipeline
} // namespace AWS
