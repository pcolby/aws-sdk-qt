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

#include "validatepipelinedefinitionresponse.h"
#include "validatepipelinedefinitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace DataPipeline {

/**
 * @class  ValidatePipelineDefinitionResponse
 *
 * @brief  Handles DataPipeline ValidatePipelineDefinition responses.
 *
 * @see    DataPipelineClient::validatePipelineDefinition
 */

/**
 * @brief  Constructs a new ValidatePipelineDefinitionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ValidatePipelineDefinitionResponse::ValidatePipelineDefinitionResponse(
        const ValidatePipelineDefinitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DataPipelineResponse(new ValidatePipelineDefinitionResponsePrivate(this), parent)
{
    setRequest(new ValidatePipelineDefinitionRequest(request));
    setReply(reply);
}

const ValidatePipelineDefinitionRequest * ValidatePipelineDefinitionResponse::request() const
{
    Q_D(const ValidatePipelineDefinitionResponse);
    return static_cast<const ValidatePipelineDefinitionRequest *>(d->request);
}

/**
 * @brief  Parse a DataPipeline ValidatePipelineDefinition response.
 *
 * @param  response  Response to parse.
 */
void ValidatePipelineDefinitionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ValidatePipelineDefinitionResponsePrivate
 *
 * @brief  Private implementation for ValidatePipelineDefinitionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ValidatePipelineDefinitionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ValidatePipelineDefinitionResponse instance.
 */
ValidatePipelineDefinitionResponsePrivate::ValidatePipelineDefinitionResponsePrivate(
    ValidatePipelineDefinitionQueueResponse * const q) : ValidatePipelineDefinitionPrivate(q)
{

}

/**
 * @brief  Parse an DataPipeline ValidatePipelineDefinitionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ValidatePipelineDefinitionResponsePrivate::ValidatePipelineDefinitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ValidatePipelineDefinitionResponse"));
    /// @todo
}

} // namespace DataPipeline
} // namespace AWS
