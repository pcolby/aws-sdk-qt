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

#include "listfunctionsresponse.h"
#include "listfunctionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Lambda {

/**
 * @class  ListFunctionsResponse
 *
 * @brief  Handles Lambda ListFunctions responses.
 *
 * @see    LambdaClient::listFunctions
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListFunctionsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LambdaResponse(new ListFunctionsResponsePrivate(this), parent)
{
    setRequest(new ListFunctionsRequest(request));
    setReply(reply);
}

const ListFunctionsRequest * ListFunctionsResponse::request() const
{
    Q_D(const ListFunctionsResponse);
    return static_cast<const ListFunctionsRequest *>(d->request);
}

/**
 * @brief  Parse a Lambda ListFunctions response.
 *
 * @param  response  Response to parse.
 */
void ListFunctionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListFunctionsResponsePrivate
 *
 * @brief  Private implementation for ListFunctionsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListFunctionsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListFunctionsResponse instance.
 */
ListFunctionsResponsePrivate::ListFunctionsResponsePrivate(
    ListFunctionsQueueResponse * const q) : ListFunctionsPrivate(q)
{

}

/**
 * @brief  Parse an Lambda ListFunctionsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListFunctionsResponsePrivate::ListFunctionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListFunctionsResponse"));
    /// @todo
}
