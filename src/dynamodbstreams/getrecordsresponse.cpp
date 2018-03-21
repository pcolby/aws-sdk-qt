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

#include "getrecordsresponse.h"
#include "getrecordsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace DynamoDBStreams {

/**
 * @class  GetRecordsResponse
 *
 * @brief  Handles DynamoDBStreams GetRecords responses.
 *
 * @see    DynamoDBStreamsClient::getRecords
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetRecordsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DynamoDBStreamsResponse(new GetRecordsResponsePrivate(this), parent)
{
    setRequest(new GetRecordsRequest(request));
    setReply(reply);
}

const GetRecordsRequest * GetRecordsResponse::request() const
{
    Q_D(const GetRecordsResponse);
    return static_cast<const GetRecordsRequest *>(d->request);
}

/**
 * @brief  Parse a DynamoDBStreams GetRecords response.
 *
 * @param  response  Response to parse.
 */
void GetRecordsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetRecordsResponsePrivate
 *
 * @brief  Private implementation for GetRecordsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetRecordsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetRecordsResponse instance.
 */
GetRecordsResponsePrivate::GetRecordsResponsePrivate(
    GetRecordsQueueResponse * const q) : GetRecordsPrivate(q)
{

}

/**
 * @brief  Parse an DynamoDBStreams GetRecordsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetRecordsResponsePrivate::GetRecordsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetRecordsResponse"));
    /// @todo
}

} // namespace DynamoDBStreams
} // namespace AWS
