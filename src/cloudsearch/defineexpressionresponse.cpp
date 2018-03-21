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

#include "defineexpressionresponse.h"
#include "defineexpressionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudSearch {

/**
 * @class  DefineExpressionResponse
 *
 * @brief  Handles CloudSearch DefineExpression responses.
 *
 * @see    CloudSearchClient::defineExpression
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DefineExpressionResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudSearchResponse(new DefineExpressionResponsePrivate(this), parent)
{
    setRequest(new DefineExpressionRequest(request));
    setReply(reply);
}

const DefineExpressionRequest * DefineExpressionResponse::request() const
{
    Q_D(const DefineExpressionResponse);
    return static_cast<const DefineExpressionRequest *>(d->request);
}

/**
 * @brief  Parse a CloudSearch DefineExpression response.
 *
 * @param  response  Response to parse.
 */
void DefineExpressionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DefineExpressionResponsePrivate
 *
 * @brief  Private implementation for DefineExpressionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DefineExpressionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DefineExpressionResponse instance.
 */
DefineExpressionResponsePrivate::DefineExpressionResponsePrivate(
    DefineExpressionQueueResponse * const q) : DefineExpressionPrivate(q)
{

}

/**
 * @brief  Parse an CloudSearch DefineExpressionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DefineExpressionResponsePrivate::DefineExpressionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DefineExpressionResponse"));
    /// @todo
}

} // namespace CloudSearch
} // namespace AWS
