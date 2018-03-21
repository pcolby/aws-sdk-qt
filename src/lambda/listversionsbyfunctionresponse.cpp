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

#include "listversionsbyfunctionresponse.h"
#include "listversionsbyfunctionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Lambda {

/**
 * @class  ListVersionsByFunctionResponse
 *
 * @brief  Handles Lambda ListVersionsByFunction responses.
 *
 * @see    LambdaClient::listVersionsByFunction
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListVersionsByFunctionResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LambdaResponse(new ListVersionsByFunctionResponsePrivate(this), parent)
{
    setRequest(new ListVersionsByFunctionRequest(request));
    setReply(reply);
}

const ListVersionsByFunctionRequest * ListVersionsByFunctionResponse::request() const
{
    Q_D(const ListVersionsByFunctionResponse);
    return static_cast<const ListVersionsByFunctionRequest *>(d->request);
}

/**
 * @brief  Parse a Lambda ListVersionsByFunction response.
 *
 * @param  response  Response to parse.
 */
void ListVersionsByFunctionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListVersionsByFunctionResponsePrivate
 *
 * @brief  Private implementation for ListVersionsByFunctionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListVersionsByFunctionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListVersionsByFunctionResponse instance.
 */
ListVersionsByFunctionResponsePrivate::ListVersionsByFunctionResponsePrivate(
    ListVersionsByFunctionQueueResponse * const q) : ListVersionsByFunctionPrivate(q)
{

}

/**
 * @brief  Parse an Lambda ListVersionsByFunctionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListVersionsByFunctionResponsePrivate::ListVersionsByFunctionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListVersionsByFunctionResponse"));
    /// @todo
}

} // namespace Lambda
} // namespace AWS
