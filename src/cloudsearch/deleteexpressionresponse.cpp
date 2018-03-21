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

#include "deleteexpressionresponse.h"
#include "deleteexpressionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudSearch {

/**
 * @class  DeleteExpressionResponse
 *
 * @brief  Handles CloudSearch DeleteExpression responses.
 *
 * @see    CloudSearchClient::deleteExpression
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteExpressionResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudSearchResponse(new DeleteExpressionResponsePrivate(this), parent)
{
    setRequest(new DeleteExpressionRequest(request));
    setReply(reply);
}

const DeleteExpressionRequest * DeleteExpressionResponse::request() const
{
    Q_D(const DeleteExpressionResponse);
    return static_cast<const DeleteExpressionRequest *>(d->request);
}

/**
 * @brief  Parse a CloudSearch DeleteExpression response.
 *
 * @param  response  Response to parse.
 */
void DeleteExpressionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteExpressionResponsePrivate
 *
 * @brief  Private implementation for DeleteExpressionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteExpressionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteExpressionResponse instance.
 */
DeleteExpressionResponsePrivate::DeleteExpressionResponsePrivate(
    DeleteExpressionQueueResponse * const q) : DeleteExpressionPrivate(q)
{

}

/**
 * @brief  Parse an CloudSearch DeleteExpressionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteExpressionResponsePrivate::DeleteExpressionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteExpressionResponse"));
    /// @todo
}

} // namespace CloudSearch
} // namespace AWS
