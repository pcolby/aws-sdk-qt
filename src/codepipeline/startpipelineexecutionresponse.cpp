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

#include "startpipelineexecutionresponse.h"
#include "startpipelineexecutionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CodePipeline {

/**
 * @class  StartPipelineExecutionResponse
 *
 * @brief  Handles CodePipeline StartPipelineExecution responses.
 *
 * @see    CodePipelineClient::startPipelineExecution
 */

/**
 * @brief  Constructs a new StartPipelineExecutionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
StartPipelineExecutionResponse::StartPipelineExecutionResponse(
        const StartPipelineExecutionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodePipelineResponse(new StartPipelineExecutionResponsePrivate(this), parent)
{
    setRequest(new StartPipelineExecutionRequest(request));
    setReply(reply);
}

const StartPipelineExecutionRequest * StartPipelineExecutionResponse::request() const
{
    Q_D(const StartPipelineExecutionResponse);
    return static_cast<const StartPipelineExecutionRequest *>(d->request);
}

/**
 * @brief  Parse a CodePipeline StartPipelineExecution response.
 *
 * @param  response  Response to parse.
 */
void StartPipelineExecutionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  StartPipelineExecutionResponsePrivate
 *
 * @brief  Private implementation for StartPipelineExecutionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StartPipelineExecutionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public StartPipelineExecutionResponse instance.
 */
StartPipelineExecutionResponsePrivate::StartPipelineExecutionResponsePrivate(
    StartPipelineExecutionQueueResponse * const q) : StartPipelineExecutionPrivate(q)
{

}

/**
 * @brief  Parse an CodePipeline StartPipelineExecutionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void StartPipelineExecutionResponsePrivate::StartPipelineExecutionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartPipelineExecutionResponse"));
    /// @todo
}

} // namespace CodePipeline
} // namespace AWS
