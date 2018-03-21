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

#include "updateglobaltableresponse.h"
#include "updateglobaltableresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace DynamoDB {

/**
 * @class  UpdateGlobalTableResponse
 *
 * @brief  Handles DynamoDB UpdateGlobalTable responses.
 *
 * @see    DynamoDBClient::updateGlobalTable
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateGlobalTableResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DynamoDBResponse(new UpdateGlobalTableResponsePrivate(this), parent)
{
    setRequest(new UpdateGlobalTableRequest(request));
    setReply(reply);
}

const UpdateGlobalTableRequest * UpdateGlobalTableResponse::request() const
{
    Q_D(const UpdateGlobalTableResponse);
    return static_cast<const UpdateGlobalTableRequest *>(d->request);
}

/**
 * @brief  Parse a DynamoDB UpdateGlobalTable response.
 *
 * @param  response  Response to parse.
 */
void UpdateGlobalTableResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateGlobalTableResponsePrivate
 *
 * @brief  Private implementation for UpdateGlobalTableResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateGlobalTableResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateGlobalTableResponse instance.
 */
UpdateGlobalTableResponsePrivate::UpdateGlobalTableResponsePrivate(
    UpdateGlobalTableQueueResponse * const q) : UpdateGlobalTablePrivate(q)
{

}

/**
 * @brief  Parse an DynamoDB UpdateGlobalTableResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateGlobalTableResponsePrivate::UpdateGlobalTableResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateGlobalTableResponse"));
    /// @todo
}

} // namespace DynamoDB
} // namespace AWS
