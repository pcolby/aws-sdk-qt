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

#include "createpipelineresponse.h"
#include "createpipelineresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ElasticTranscoder {

/**
 * @class  CreatePipelineResponse
 *
 * @brief  Handles ElasticTranscoder CreatePipeline responses.
 *
 * @see    ElasticTranscoderClient::createPipeline
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreatePipelineResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticTranscoderResponse(new CreatePipelineResponsePrivate(this), parent)
{
    setRequest(new CreatePipelineRequest(request));
    setReply(reply);
}

const CreatePipelineRequest * CreatePipelineResponse::request() const
{
    Q_D(const CreatePipelineResponse);
    return static_cast<const CreatePipelineRequest *>(d->request);
}

/**
 * @brief  Parse a ElasticTranscoder CreatePipeline response.
 *
 * @param  response  Response to parse.
 */
void CreatePipelineResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreatePipelineResponsePrivate
 *
 * @brief  Private implementation for CreatePipelineResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreatePipelineResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreatePipelineResponse instance.
 */
CreatePipelineResponsePrivate::CreatePipelineResponsePrivate(
    CreatePipelineQueueResponse * const q) : CreatePipelinePrivate(q)
{

}

/**
 * @brief  Parse an ElasticTranscoder CreatePipelineResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreatePipelineResponsePrivate::CreatePipelineResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreatePipelineResponse"));
    /// @todo
}

} // namespace ElasticTranscoder
} // namespace AWS
