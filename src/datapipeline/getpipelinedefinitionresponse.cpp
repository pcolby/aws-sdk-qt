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

#include "getpipelinedefinitionresponse.h"
#include "getpipelinedefinitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace DataPipeline {

/**
 * @class  GetPipelineDefinitionResponse
 *
 * @brief  Handles DataPipeline GetPipelineDefinition responses.
 *
 * @see    DataPipelineClient::getPipelineDefinition
 */

/**
 * @brief  Constructs a new GetPipelineDefinitionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetPipelineDefinitionResponse::GetPipelineDefinitionResponse(
        const GetPipelineDefinitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DataPipelineResponse(new GetPipelineDefinitionResponsePrivate(this), parent)
{
    setRequest(new GetPipelineDefinitionRequest(request));
    setReply(reply);
}

const GetPipelineDefinitionRequest * GetPipelineDefinitionResponse::request() const
{
    Q_D(const GetPipelineDefinitionResponse);
    return static_cast<const GetPipelineDefinitionRequest *>(d->request);
}

/**
 * @brief  Parse a DataPipeline GetPipelineDefinition response.
 *
 * @param  response  Response to parse.
 */
void GetPipelineDefinitionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetPipelineDefinitionResponsePrivate
 *
 * @brief  Private implementation for GetPipelineDefinitionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetPipelineDefinitionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetPipelineDefinitionResponse instance.
 */
GetPipelineDefinitionResponsePrivate::GetPipelineDefinitionResponsePrivate(
    GetPipelineDefinitionQueueResponse * const q) : GetPipelineDefinitionPrivate(q)
{

}

/**
 * @brief  Parse an DataPipeline GetPipelineDefinitionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetPipelineDefinitionResponsePrivate::GetPipelineDefinitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetPipelineDefinitionResponse"));
    /// @todo
}

} // namespace DataPipeline
} // namespace AWS
