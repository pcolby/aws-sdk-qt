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

#include "startqueryexecutionresponse.h"
#include "startqueryexecutionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Athena {

/**
 * @class  StartQueryExecutionResponse
 *
 * @brief  Handles Athena StartQueryExecution responses.
 *
 * @see    AthenaClient::startQueryExecution
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
StartQueryExecutionResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AthenaResponse(new StartQueryExecutionResponsePrivate(this), parent)
{
    setRequest(new StartQueryExecutionRequest(request));
    setReply(reply);
}

const StartQueryExecutionRequest * StartQueryExecutionResponse::request() const
{
    Q_D(const StartQueryExecutionResponse);
    return static_cast<const StartQueryExecutionRequest *>(d->request);
}

/**
 * @brief  Parse a Athena StartQueryExecution response.
 *
 * @param  response  Response to parse.
 */
void StartQueryExecutionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  StartQueryExecutionResponsePrivate
 *
 * @brief  Private implementation for StartQueryExecutionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StartQueryExecutionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public StartQueryExecutionResponse instance.
 */
StartQueryExecutionResponsePrivate::StartQueryExecutionResponsePrivate(
    StartQueryExecutionQueueResponse * const q) : StartQueryExecutionPrivate(q)
{

}

/**
 * @brief  Parse an Athena StartQueryExecutionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void StartQueryExecutionResponsePrivate::StartQueryExecutionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartQueryExecutionResponse"));
    /// @todo
}
