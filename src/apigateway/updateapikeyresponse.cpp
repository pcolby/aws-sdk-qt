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

#include "updateapikeyresponse.h"
#include "updateapikeyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace APIGateway {

/**
 * @class  UpdateApiKeyResponse
 *
 * @brief  Handles APIGateway UpdateApiKey responses.
 *
 * @see    APIGatewayClient::updateApiKey
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateApiKeyResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new UpdateApiKeyResponsePrivate(this), parent)
{
    setRequest(new UpdateApiKeyRequest(request));
    setReply(reply);
}

const UpdateApiKeyRequest * UpdateApiKeyResponse::request() const
{
    Q_D(const UpdateApiKeyResponse);
    return static_cast<const UpdateApiKeyRequest *>(d->request);
}

/**
 * @brief  Parse a APIGateway UpdateApiKey response.
 *
 * @param  response  Response to parse.
 */
void UpdateApiKeyResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateApiKeyResponsePrivate
 *
 * @brief  Private implementation for UpdateApiKeyResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateApiKeyResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateApiKeyResponse instance.
 */
UpdateApiKeyResponsePrivate::UpdateApiKeyResponsePrivate(
    UpdateApiKeyQueueResponse * const q) : UpdateApiKeyPrivate(q)
{

}

/**
 * @brief  Parse an APIGateway UpdateApiKeyResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateApiKeyResponsePrivate::UpdateApiKeyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateApiKeyResponse"));
    /// @todo
}

} // namespace APIGateway
} // namespace AWS
