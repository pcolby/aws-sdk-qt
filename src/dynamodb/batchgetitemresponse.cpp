/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "batchgetitemresponse.h"
#include "batchgetitemresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DynamoDB {

/**
 * @class  BatchGetItemResponse
 *
 * @brief  Handles DynamoDB BatchGetItem responses.
 *
 * @see    DynamoDBClient::batchGetItem
 */

/**
 * @brief  Constructs a new BatchGetItemResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
BatchGetItemResponse::BatchGetItemResponse(
        const BatchGetItemRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DynamoDBResponse(new BatchGetItemResponsePrivate(this), parent)
{
    setRequest(new BatchGetItemRequest(request));
    setReply(reply);
}

const BatchGetItemRequest * BatchGetItemResponse::request() const
{
    Q_D(const BatchGetItemResponse);
    return static_cast<const BatchGetItemRequest *>(d->request);
}

/**
 * @brief  Parse a DynamoDB BatchGetItem response.
 *
 * @param  response  Response to parse.
 */
void BatchGetItemResponse::parseSuccess(QIODevice &response)
{
    Q_D(BatchGetItemResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  BatchGetItemResponsePrivate
 *
 * @brief  Private implementation for BatchGetItemResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new BatchGetItemResponsePrivate object.
 *
 * @param  q  Pointer to this object's public BatchGetItemResponse instance.
 */
BatchGetItemResponsePrivate::BatchGetItemResponsePrivate(
    BatchGetItemResponse * const q) : DynamoDBResponsePrivate(q)
{

}

/**
 * @brief  Parse an DynamoDB BatchGetItemResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void BatchGetItemResponsePrivate::BatchGetItemResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchGetItemResponse"));
    /// @todo
}

} // namespace DynamoDB
} // namespace QtAws
