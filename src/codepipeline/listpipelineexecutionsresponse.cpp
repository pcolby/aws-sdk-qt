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

#include "listpipelineexecutionsresponse.h"
#include "listpipelineexecutionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CodePipeline {

/**
 * @class  ListPipelineExecutionsResponse
 *
 * @brief  Handles CodePipeline ListPipelineExecutions responses.
 *
 * @see    CodePipelineClient::listPipelineExecutions
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListPipelineExecutionsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodePipelineResponse(new ListPipelineExecutionsResponsePrivate(this), parent)
{
    setRequest(new ListPipelineExecutionsRequest(request));
    setReply(reply);
}

const ListPipelineExecutionsRequest * ListPipelineExecutionsResponse::request() const
{
    Q_D(const ListPipelineExecutionsResponse);
    return static_cast<const ListPipelineExecutionsRequest *>(d->request);
}

/**
 * @brief  Parse a CodePipeline ListPipelineExecutions response.
 *
 * @param  response  Response to parse.
 */
void ListPipelineExecutionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListPipelineExecutionsResponsePrivate
 *
 * @brief  Private implementation for ListPipelineExecutionsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListPipelineExecutionsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListPipelineExecutionsResponse instance.
 */
ListPipelineExecutionsResponsePrivate::ListPipelineExecutionsResponsePrivate(
    ListPipelineExecutionsQueueResponse * const q) : ListPipelineExecutionsPrivate(q)
{

}

/**
 * @brief  Parse an CodePipeline ListPipelineExecutionsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListPipelineExecutionsResponsePrivate::ListPipelineExecutionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListPipelineExecutionsResponse"));
    /// @todo
}

} // namespace CodePipeline
} // namespace AWS
