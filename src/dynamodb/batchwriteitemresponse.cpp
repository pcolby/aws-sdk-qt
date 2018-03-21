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

#include "batchwriteitemresponse.h"
#include "batchwriteitemresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace DynamoDB {

/**
 * @class  BatchWriteItemResponse
 *
 * @brief  Handles DynamoDB BatchWriteItem responses.
 *
 * @see    DynamoDBClient::batchWriteItem
 */

/**
 * @brief  Constructs a new BatchWriteItemResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
BatchWriteItemResponse::BatchWriteItemResponse(
        const BatchWriteItemRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DynamoDBResponse(new BatchWriteItemResponsePrivate(this), parent)
{
    setRequest(new BatchWriteItemRequest(request));
    setReply(reply);
}

const BatchWriteItemRequest * BatchWriteItemResponse::request() const
{
    Q_D(const BatchWriteItemResponse);
    return static_cast<const BatchWriteItemRequest *>(d->request);
}

/**
 * @brief  Parse a DynamoDB BatchWriteItem response.
 *
 * @param  response  Response to parse.
 */
void BatchWriteItemResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  BatchWriteItemResponsePrivate
 *
 * @brief  Private implementation for BatchWriteItemResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new BatchWriteItemResponsePrivate object.
 *
 * @param  q  Pointer to this object's public BatchWriteItemResponse instance.
 */
BatchWriteItemResponsePrivate::BatchWriteItemResponsePrivate(
    BatchWriteItemQueueResponse * const q) : BatchWriteItemPrivate(q)
{

}

/**
 * @brief  Parse an DynamoDB BatchWriteItemResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void BatchWriteItemResponsePrivate::BatchWriteItemResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchWriteItemResponse"));
    /// @todo
}

} // namespace DynamoDB
} // namespace AWS
