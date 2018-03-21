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

#include "listpipelinesresponse.h"
#include "listpipelinesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CodePipeline {

/**
 * @class  ListPipelinesResponse
 *
 * @brief  Handles CodePipeline ListPipelines responses.
 *
 * @see    CodePipelineClient::listPipelines
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListPipelinesResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodePipelineResponse(new ListPipelinesResponsePrivate(this), parent)
{
    setRequest(new ListPipelinesRequest(request));
    setReply(reply);
}

const ListPipelinesRequest * ListPipelinesResponse::request() const
{
    Q_D(const ListPipelinesResponse);
    return static_cast<const ListPipelinesRequest *>(d->request);
}

/**
 * @brief  Parse a CodePipeline ListPipelines response.
 *
 * @param  response  Response to parse.
 */
void ListPipelinesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListPipelinesResponsePrivate
 *
 * @brief  Private implementation for ListPipelinesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListPipelinesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListPipelinesResponse instance.
 */
ListPipelinesResponsePrivate::ListPipelinesResponsePrivate(
    ListPipelinesQueueResponse * const q) : ListPipelinesPrivate(q)
{

}

/**
 * @brief  Parse an CodePipeline ListPipelinesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListPipelinesResponsePrivate::ListPipelinesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListPipelinesResponse"));
    /// @todo
}
