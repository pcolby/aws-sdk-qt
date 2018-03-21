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

#include "restoretablefrombackupresponse.h"
#include "restoretablefrombackupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace DynamoDB {

/**
 * @class  RestoreTableFromBackupResponse
 *
 * @brief  Handles DynamoDB RestoreTableFromBackup responses.
 *
 * @see    DynamoDBClient::restoreTableFromBackup
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RestoreTableFromBackupResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DynamoDBResponse(new RestoreTableFromBackupResponsePrivate(this), parent)
{
    setRequest(new RestoreTableFromBackupRequest(request));
    setReply(reply);
}

const RestoreTableFromBackupRequest * RestoreTableFromBackupResponse::request() const
{
    Q_D(const RestoreTableFromBackupResponse);
    return static_cast<const RestoreTableFromBackupRequest *>(d->request);
}

/**
 * @brief  Parse a DynamoDB RestoreTableFromBackup response.
 *
 * @param  response  Response to parse.
 */
void RestoreTableFromBackupResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  RestoreTableFromBackupResponsePrivate
 *
 * @brief  Private implementation for RestoreTableFromBackupResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RestoreTableFromBackupResponsePrivate object.
 *
 * @param  q  Pointer to this object's public RestoreTableFromBackupResponse instance.
 */
RestoreTableFromBackupResponsePrivate::RestoreTableFromBackupResponsePrivate(
    RestoreTableFromBackupQueueResponse * const q) : RestoreTableFromBackupPrivate(q)
{

}

/**
 * @brief  Parse an DynamoDB RestoreTableFromBackupResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void RestoreTableFromBackupResponsePrivate::RestoreTableFromBackupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RestoreTableFromBackupResponse"));
    /// @todo
}
