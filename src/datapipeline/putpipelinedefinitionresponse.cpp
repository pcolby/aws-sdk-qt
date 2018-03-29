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

#include "putpipelinedefinitionresponse.h"
#include "putpipelinedefinitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DataPipeline {

/**
 * @class  PutPipelineDefinitionResponse
 *
 * @brief  Handles DataPipeline PutPipelineDefinition responses.
 *
 * @see    DataPipelineClient::putPipelineDefinition
 */

/**
 * @brief  Constructs a new PutPipelineDefinitionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutPipelineDefinitionResponse::PutPipelineDefinitionResponse(
        const PutPipelineDefinitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DataPipelineResponse(new PutPipelineDefinitionResponsePrivate(this), parent)
{
    setRequest(new PutPipelineDefinitionRequest(request));
    setReply(reply);
}

const PutPipelineDefinitionRequest * PutPipelineDefinitionResponse::request() const
{
    Q_D(const PutPipelineDefinitionResponse);
    return static_cast<const PutPipelineDefinitionRequest *>(d->request);
}

/**
 * @brief  Parse a DataPipeline PutPipelineDefinition response.
 *
 * @param  response  Response to parse.
 */
void PutPipelineDefinitionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  PutPipelineDefinitionResponsePrivate
 *
 * @brief  Private implementation for PutPipelineDefinitionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutPipelineDefinitionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PutPipelineDefinitionResponse instance.
 */
PutPipelineDefinitionResponsePrivate::PutPipelineDefinitionResponsePrivate(
    PutPipelineDefinitionQueueResponse * const q) : PutPipelineDefinitionPrivate(q)
{

}

/**
 * @brief  Parse an DataPipeline PutPipelineDefinitionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PutPipelineDefinitionResponsePrivate::PutPipelineDefinitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutPipelineDefinitionResponse"));
    /// @todo
}

} // namespace DataPipeline
} // namespace QtAws
