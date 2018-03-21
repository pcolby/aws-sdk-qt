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

#include "deletedevendpointresponse.h"
#include "deletedevendpointresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Glue {

/**
 * @class  DeleteDevEndpointResponse
 *
 * @brief  Handles Glue DeleteDevEndpoint responses.
 *
 * @see    GlueClient::deleteDevEndpoint
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteDevEndpointResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new DeleteDevEndpointResponsePrivate(this), parent)
{
    setRequest(new DeleteDevEndpointRequest(request));
    setReply(reply);
}

const DeleteDevEndpointRequest * DeleteDevEndpointResponse::request() const
{
    Q_D(const DeleteDevEndpointResponse);
    return static_cast<const DeleteDevEndpointRequest *>(d->request);
}

/**
 * @brief  Parse a Glue DeleteDevEndpoint response.
 *
 * @param  response  Response to parse.
 */
void DeleteDevEndpointResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteDevEndpointResponsePrivate
 *
 * @brief  Private implementation for DeleteDevEndpointResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteDevEndpointResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteDevEndpointResponse instance.
 */
DeleteDevEndpointResponsePrivate::DeleteDevEndpointResponsePrivate(
    DeleteDevEndpointQueueResponse * const q) : DeleteDevEndpointPrivate(q)
{

}

/**
 * @brief  Parse an Glue DeleteDevEndpointResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteDevEndpointResponsePrivate::DeleteDevEndpointResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteDevEndpointResponse"));
    /// @todo
}

} // namespace Glue
} // namespace AWS
