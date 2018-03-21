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

#include "getpipelineexecutionresponse.h"
#include "getpipelineexecutionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CodePipeline {

/**
 * @class  GetPipelineExecutionResponse
 *
 * @brief  Handles CodePipeline GetPipelineExecution responses.
 *
 * @see    CodePipelineClient::getPipelineExecution
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetPipelineExecutionResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodePipelineResponse(new GetPipelineExecutionResponsePrivate(this), parent)
{
    setRequest(new GetPipelineExecutionRequest(request));
    setReply(reply);
}

const GetPipelineExecutionRequest * GetPipelineExecutionResponse::request() const
{
    Q_D(const GetPipelineExecutionResponse);
    return static_cast<const GetPipelineExecutionRequest *>(d->request);
}

/**
 * @brief  Parse a CodePipeline GetPipelineExecution response.
 *
 * @param  response  Response to parse.
 */
void GetPipelineExecutionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetPipelineExecutionResponsePrivate
 *
 * @brief  Private implementation for GetPipelineExecutionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetPipelineExecutionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetPipelineExecutionResponse instance.
 */
GetPipelineExecutionResponsePrivate::GetPipelineExecutionResponsePrivate(
    GetPipelineExecutionQueueResponse * const q) : GetPipelineExecutionPrivate(q)
{

}

/**
 * @brief  Parse an CodePipeline GetPipelineExecutionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetPipelineExecutionResponsePrivate::GetPipelineExecutionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetPipelineExecutionResponse"));
    /// @todo
}
