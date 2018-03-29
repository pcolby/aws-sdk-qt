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

#include "updatedevendpointresponse.h"
#include "updatedevendpointresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Glue {

/**
 * @class  UpdateDevEndpointResponse
 *
 * @brief  Handles Glue UpdateDevEndpoint responses.
 *
 * @see    GlueClient::updateDevEndpoint
 */

/**
 * @brief  Constructs a new UpdateDevEndpointResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateDevEndpointResponse::UpdateDevEndpointResponse(
        const UpdateDevEndpointRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new UpdateDevEndpointResponsePrivate(this), parent)
{
    setRequest(new UpdateDevEndpointRequest(request));
    setReply(reply);
}

const UpdateDevEndpointRequest * UpdateDevEndpointResponse::request() const
{
    Q_D(const UpdateDevEndpointResponse);
    return static_cast<const UpdateDevEndpointRequest *>(d->request);
}

/**
 * @brief  Parse a Glue UpdateDevEndpoint response.
 *
 * @param  response  Response to parse.
 */
void UpdateDevEndpointResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateDevEndpointResponsePrivate
 *
 * @brief  Private implementation for UpdateDevEndpointResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateDevEndpointResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateDevEndpointResponse instance.
 */
UpdateDevEndpointResponsePrivate::UpdateDevEndpointResponsePrivate(
    UpdateDevEndpointQueueResponse * const q) : UpdateDevEndpointPrivate(q)
{

}

/**
 * @brief  Parse an Glue UpdateDevEndpointResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateDevEndpointResponsePrivate::UpdateDevEndpointResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateDevEndpointResponse"));
    /// @todo
}

} // namespace Glue
} // namespace AWS
