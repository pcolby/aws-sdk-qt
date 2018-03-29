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

#include "getitemresponse.h"
#include "getitemresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DynamoDB {

/**
 * @class  GetItemResponse
 *
 * @brief  Handles DynamoDB GetItem responses.
 *
 * @see    DynamoDBClient::getItem
 */

/**
 * @brief  Constructs a new GetItemResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetItemResponse::GetItemResponse(
        const GetItemRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DynamoDBResponse(new GetItemResponsePrivate(this), parent)
{
    setRequest(new GetItemRequest(request));
    setReply(reply);
}

const GetItemRequest * GetItemResponse::request() const
{
    Q_D(const GetItemResponse);
    return static_cast<const GetItemRequest *>(d->request);
}

/**
 * @brief  Parse a DynamoDB GetItem response.
 *
 * @param  response  Response to parse.
 */
void GetItemResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetItemResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetItemResponsePrivate
 *
 * @brief  Private implementation for GetItemResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetItemResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetItemResponse instance.
 */
GetItemResponsePrivate::GetItemResponsePrivate(
    GetItemResponse * const q) : DynamoDBResponsePrivate(q)
{

}

/**
 * @brief  Parse an DynamoDB GetItemResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetItemResponsePrivate::parseGetItemResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetItemResponse"));
    /// @todo
}

} // namespace DynamoDB
} // namespace QtAws
