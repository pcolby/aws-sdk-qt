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

#include "restoretabletopointintimeresponse.h"
#include "restoretabletopointintimeresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DynamoDB {

/**
 * @class  RestoreTableToPointInTimeResponse
 *
 * @brief  Handles DynamoDB RestoreTableToPointInTime responses.
 *
 * @see    DynamoDBClient::restoreTableToPointInTime
 */

/**
 * @brief  Constructs a new RestoreTableToPointInTimeResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RestoreTableToPointInTimeResponse::RestoreTableToPointInTimeResponse(
        const RestoreTableToPointInTimeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DynamoDBResponse(new RestoreTableToPointInTimeResponsePrivate(this), parent)
{
    setRequest(new RestoreTableToPointInTimeRequest(request));
    setReply(reply);
}

const RestoreTableToPointInTimeRequest * RestoreTableToPointInTimeResponse::request() const
{
    Q_D(const RestoreTableToPointInTimeResponse);
    return static_cast<const RestoreTableToPointInTimeRequest *>(d->request);
}

/**
 * @brief  Parse a DynamoDB RestoreTableToPointInTime response.
 *
 * @param  response  Response to parse.
 */
void RestoreTableToPointInTimeResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  RestoreTableToPointInTimeResponsePrivate
 *
 * @brief  Private implementation for RestoreTableToPointInTimeResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RestoreTableToPointInTimeResponsePrivate object.
 *
 * @param  q  Pointer to this object's public RestoreTableToPointInTimeResponse instance.
 */
RestoreTableToPointInTimeResponsePrivate::RestoreTableToPointInTimeResponsePrivate(
    RestoreTableToPointInTimeQueueResponse * const q) : RestoreTableToPointInTimePrivate(q)
{

}

/**
 * @brief  Parse an DynamoDB RestoreTableToPointInTimeResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void RestoreTableToPointInTimeResponsePrivate::RestoreTableToPointInTimeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RestoreTableToPointInTimeResponse"));
    /// @todo
}

} // namespace DynamoDB
} // namespace QtAws
