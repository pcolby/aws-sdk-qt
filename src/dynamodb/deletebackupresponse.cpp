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

#include "deletebackupresponse.h"
#include "deletebackupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace DynamoDB {

/**
 * @class  DeleteBackupResponse
 *
 * @brief  Handles DynamoDB DeleteBackup responses.
 *
 * @see    DynamoDBClient::deleteBackup
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteBackupResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DynamoDBResponse(new DeleteBackupResponsePrivate(this), parent)
{
    setRequest(new DeleteBackupRequest(request));
    setReply(reply);
}

const DeleteBackupRequest * DeleteBackupResponse::request() const
{
    Q_D(const DeleteBackupResponse);
    return static_cast<const DeleteBackupRequest *>(d->request);
}

/**
 * @brief  Parse a DynamoDB DeleteBackup response.
 *
 * @param  response  Response to parse.
 */
void DeleteBackupResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteBackupResponsePrivate
 *
 * @brief  Private implementation for DeleteBackupResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteBackupResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteBackupResponse instance.
 */
DeleteBackupResponsePrivate::DeleteBackupResponsePrivate(
    DeleteBackupQueueResponse * const q) : DeleteBackupPrivate(q)
{

}

/**
 * @brief  Parse an DynamoDB DeleteBackupResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteBackupResponsePrivate::DeleteBackupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteBackupResponse"));
    /// @todo
}
