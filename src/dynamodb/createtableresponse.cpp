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

#include "createtableresponse.h"
#include "createtableresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace DynamoDB {

/**
 * @class  CreateTableResponse
 *
 * @brief  Handles DynamoDB CreateTable responses.
 *
 * @see    DynamoDBClient::createTable
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateTableResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DynamoDBResponse(new CreateTableResponsePrivate(this), parent)
{
    setRequest(new CreateTableRequest(request));
    setReply(reply);
}

const CreateTableRequest * CreateTableResponse::request() const
{
    Q_D(const CreateTableResponse);
    return static_cast<const CreateTableRequest *>(d->request);
}

/**
 * @brief  Parse a DynamoDB CreateTable response.
 *
 * @param  response  Response to parse.
 */
void CreateTableResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateTableResponsePrivate
 *
 * @brief  Private implementation for CreateTableResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateTableResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateTableResponse instance.
 */
CreateTableResponsePrivate::CreateTableResponsePrivate(
    CreateTableQueueResponse * const q) : CreateTablePrivate(q)
{

}

/**
 * @brief  Parse an DynamoDB CreateTableResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateTableResponsePrivate::CreateTableResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateTableResponse"));
    /// @todo
}

} // namespace DynamoDB
} // namespace AWS
