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

#include "describepipelinesresponse.h"
#include "describepipelinesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace DataPipeline {

/**
 * @class  DescribePipelinesResponse
 *
 * @brief  Handles DataPipeline DescribePipelines responses.
 *
 * @see    DataPipelineClient::describePipelines
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribePipelinesResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DataPipelineResponse(new DescribePipelinesResponsePrivate(this), parent)
{
    setRequest(new DescribePipelinesRequest(request));
    setReply(reply);
}

const DescribePipelinesRequest * DescribePipelinesResponse::request() const
{
    Q_D(const DescribePipelinesResponse);
    return static_cast<const DescribePipelinesRequest *>(d->request);
}

/**
 * @brief  Parse a DataPipeline DescribePipelines response.
 *
 * @param  response  Response to parse.
 */
void DescribePipelinesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribePipelinesResponsePrivate
 *
 * @brief  Private implementation for DescribePipelinesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribePipelinesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribePipelinesResponse instance.
 */
DescribePipelinesResponsePrivate::DescribePipelinesResponsePrivate(
    DescribePipelinesQueueResponse * const q) : DescribePipelinesPrivate(q)
{

}

/**
 * @brief  Parse an DataPipeline DescribePipelinesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribePipelinesResponsePrivate::DescribePipelinesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribePipelinesResponse"));
    /// @todo
}
