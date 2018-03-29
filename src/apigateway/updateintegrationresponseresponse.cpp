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

#include "updateintegrationresponseresponse.h"
#include "updateintegrationresponseresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace APIGateway {

/**
 * @class  UpdateIntegrationResponseResponse
 *
 * @brief  Handles APIGateway UpdateIntegrationResponse responses.
 *
 * @see    APIGatewayClient::updateIntegrationResponse
 */

/**
 * @brief  Constructs a new UpdateIntegrationResponseResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateIntegrationResponseResponse::UpdateIntegrationResponseResponse(
        const UpdateIntegrationResponseRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new UpdateIntegrationResponseResponsePrivate(this), parent)
{
    setRequest(new UpdateIntegrationResponseRequest(request));
    setReply(reply);
}

const UpdateIntegrationResponseRequest * UpdateIntegrationResponseResponse::request() const
{
    Q_D(const UpdateIntegrationResponseResponse);
    return static_cast<const UpdateIntegrationResponseRequest *>(d->request);
}

/**
 * @brief  Parse a APIGateway UpdateIntegrationResponse response.
 *
 * @param  response  Response to parse.
 */
void UpdateIntegrationResponseResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateIntegrationResponseResponsePrivate
 *
 * @brief  Private implementation for UpdateIntegrationResponseResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateIntegrationResponseResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateIntegrationResponseResponse instance.
 */
UpdateIntegrationResponseResponsePrivate::UpdateIntegrationResponseResponsePrivate(
    UpdateIntegrationResponseQueueResponse * const q) : UpdateIntegrationResponsePrivate(q)
{

}

/**
 * @brief  Parse an APIGateway UpdateIntegrationResponseResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateIntegrationResponseResponsePrivate::UpdateIntegrationResponseResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateIntegrationResponseResponse"));
    /// @todo
}

} // namespace APIGateway
} // namespace AWS
