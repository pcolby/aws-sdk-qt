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

#include "putitemresponse.h"
#include "putitemresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DynamoDB {

/**
 * @class  PutItemResponse
 *
 * @brief  Handles DynamoDB PutItem responses.
 *
 * @see    DynamoDBClient::putItem
 */

/**
 * @brief  Constructs a new PutItemResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutItemResponse::PutItemResponse(
        const PutItemRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DynamoDBResponse(new PutItemResponsePrivate(this), parent)
{
    setRequest(new PutItemRequest(request));
    setReply(reply);
}

const PutItemRequest * PutItemResponse::request() const
{
    Q_D(const PutItemResponse);
    return static_cast<const PutItemRequest *>(d->request);
}

/**
 * @brief  Parse a DynamoDB PutItem response.
 *
 * @param  response  Response to parse.
 */
void PutItemResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  PutItemResponsePrivate
 *
 * @brief  Private implementation for PutItemResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutItemResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PutItemResponse instance.
 */
PutItemResponsePrivate::PutItemResponsePrivate(
    PutItemQueueResponse * const q) : PutItemPrivate(q)
{

}

/**
 * @brief  Parse an DynamoDB PutItemResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PutItemResponsePrivate::PutItemResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutItemResponse"));
    /// @todo
}

} // namespace DynamoDB
} // namespace QtAws
