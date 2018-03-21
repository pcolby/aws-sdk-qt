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

#include "scanresponse.h"
#include "scanresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace DynamoDB {

/**
 * @class  ScanResponse
 *
 * @brief  Handles DynamoDB Scan responses.
 *
 * @see    DynamoDBClient::scan
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ScanResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DynamoDBResponse(new ScanResponsePrivate(this), parent)
{
    setRequest(new ScanRequest(request));
    setReply(reply);
}

const ScanRequest * ScanResponse::request() const
{
    Q_D(const ScanResponse);
    return static_cast<const ScanRequest *>(d->request);
}

/**
 * @brief  Parse a DynamoDB Scan response.
 *
 * @param  response  Response to parse.
 */
void ScanResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ScanResponsePrivate
 *
 * @brief  Private implementation for ScanResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ScanResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ScanResponse instance.
 */
ScanResponsePrivate::ScanResponsePrivate(
    ScanQueueResponse * const q) : ScanPrivate(q)
{

}

/**
 * @brief  Parse an DynamoDB ScanResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ScanResponsePrivate::ScanResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ScanResponse"));
    /// @todo
}

} // namespace DynamoDB
} // namespace AWS
