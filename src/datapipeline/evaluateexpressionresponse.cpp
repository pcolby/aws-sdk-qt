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

#include "evaluateexpressionresponse.h"
#include "evaluateexpressionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace DataPipeline {

/**
 * @class  EvaluateExpressionResponse
 *
 * @brief  Handles DataPipeline EvaluateExpression responses.
 *
 * @see    DataPipelineClient::evaluateExpression
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
EvaluateExpressionResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DataPipelineResponse(new EvaluateExpressionResponsePrivate(this), parent)
{
    setRequest(new EvaluateExpressionRequest(request));
    setReply(reply);
}

const EvaluateExpressionRequest * EvaluateExpressionResponse::request() const
{
    Q_D(const EvaluateExpressionResponse);
    return static_cast<const EvaluateExpressionRequest *>(d->request);
}

/**
 * @brief  Parse a DataPipeline EvaluateExpression response.
 *
 * @param  response  Response to parse.
 */
void EvaluateExpressionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  EvaluateExpressionResponsePrivate
 *
 * @brief  Private implementation for EvaluateExpressionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new EvaluateExpressionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public EvaluateExpressionResponse instance.
 */
EvaluateExpressionResponsePrivate::EvaluateExpressionResponsePrivate(
    EvaluateExpressionQueueResponse * const q) : EvaluateExpressionPrivate(q)
{

}

/**
 * @brief  Parse an DataPipeline EvaluateExpressionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void EvaluateExpressionResponsePrivate::EvaluateExpressionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("EvaluateExpressionResponse"));
    /// @todo
}

} // namespace DataPipeline
} // namespace AWS
