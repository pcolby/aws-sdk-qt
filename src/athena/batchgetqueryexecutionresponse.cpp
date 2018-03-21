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

#include "batchgetqueryexecutionresponse.h"
#include "batchgetqueryexecutionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Athena {

/**
 * @class  BatchGetQueryExecutionResponse
 *
 * @brief  Handles Athena BatchGetQueryExecution responses.
 *
 * @see    AthenaClient::batchGetQueryExecution
 */

/**
 * @brief  Constructs a new BatchGetQueryExecutionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
BatchGetQueryExecutionResponse::BatchGetQueryExecutionResponse(
        const BatchGetQueryExecutionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AthenaResponse(new BatchGetQueryExecutionResponsePrivate(this), parent)
{
    setRequest(new BatchGetQueryExecutionRequest(request));
    setReply(reply);
}

const BatchGetQueryExecutionRequest * BatchGetQueryExecutionResponse::request() const
{
    Q_D(const BatchGetQueryExecutionResponse);
    return static_cast<const BatchGetQueryExecutionRequest *>(d->request);
}

/**
 * @brief  Parse a Athena BatchGetQueryExecution response.
 *
 * @param  response  Response to parse.
 */
void BatchGetQueryExecutionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  BatchGetQueryExecutionResponsePrivate
 *
 * @brief  Private implementation for BatchGetQueryExecutionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new BatchGetQueryExecutionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public BatchGetQueryExecutionResponse instance.
 */
BatchGetQueryExecutionResponsePrivate::BatchGetQueryExecutionResponsePrivate(
    BatchGetQueryExecutionQueueResponse * const q) : BatchGetQueryExecutionPrivate(q)
{

}

/**
 * @brief  Parse an Athena BatchGetQueryExecutionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void BatchGetQueryExecutionResponsePrivate::BatchGetQueryExecutionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchGetQueryExecutionResponse"));
    /// @todo
}

} // namespace Athena
} // namespace AWS
