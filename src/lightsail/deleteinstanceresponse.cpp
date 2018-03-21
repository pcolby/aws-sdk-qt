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

#include "deleteinstanceresponse.h"
#include "deleteinstanceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Lightsail {

/**
 * @class  DeleteInstanceResponse
 *
 * @brief  Handles Lightsail DeleteInstance responses.
 *
 * @see    LightsailClient::deleteInstance
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteInstanceResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LightsailResponse(new DeleteInstanceResponsePrivate(this), parent)
{
    setRequest(new DeleteInstanceRequest(request));
    setReply(reply);
}

const DeleteInstanceRequest * DeleteInstanceResponse::request() const
{
    Q_D(const DeleteInstanceResponse);
    return static_cast<const DeleteInstanceRequest *>(d->request);
}

/**
 * @brief  Parse a Lightsail DeleteInstance response.
 *
 * @param  response  Response to parse.
 */
void DeleteInstanceResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteInstanceResponsePrivate
 *
 * @brief  Private implementation for DeleteInstanceResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteInstanceResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteInstanceResponse instance.
 */
DeleteInstanceResponsePrivate::DeleteInstanceResponsePrivate(
    DeleteInstanceQueueResponse * const q) : DeleteInstancePrivate(q)
{

}

/**
 * @brief  Parse an Lightsail DeleteInstanceResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteInstanceResponsePrivate::DeleteInstanceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteInstanceResponse"));
    /// @todo
}

} // namespace Lightsail
} // namespace AWS
