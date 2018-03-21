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

#include "deactivatepipelineresponse.h"
#include "deactivatepipelineresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace DataPipeline {

/**
 * @class  DeactivatePipelineResponse
 *
 * @brief  Handles DataPipeline DeactivatePipeline responses.
 *
 * @see    DataPipelineClient::deactivatePipeline
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeactivatePipelineResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DataPipelineResponse(new DeactivatePipelineResponsePrivate(this), parent)
{
    setRequest(new DeactivatePipelineRequest(request));
    setReply(reply);
}

const DeactivatePipelineRequest * DeactivatePipelineResponse::request() const
{
    Q_D(const DeactivatePipelineResponse);
    return static_cast<const DeactivatePipelineRequest *>(d->request);
}

/**
 * @brief  Parse a DataPipeline DeactivatePipeline response.
 *
 * @param  response  Response to parse.
 */
void DeactivatePipelineResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeactivatePipelineResponsePrivate
 *
 * @brief  Private implementation for DeactivatePipelineResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeactivatePipelineResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeactivatePipelineResponse instance.
 */
DeactivatePipelineResponsePrivate::DeactivatePipelineResponsePrivate(
    DeactivatePipelineQueueResponse * const q) : DeactivatePipelinePrivate(q)
{

}

/**
 * @brief  Parse an DataPipeline DeactivatePipelineResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeactivatePipelineResponsePrivate::DeactivatePipelineResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeactivatePipelineResponse"));
    /// @todo
}
