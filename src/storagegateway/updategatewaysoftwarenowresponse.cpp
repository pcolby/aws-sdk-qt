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

#include "updategatewaysoftwarenowresponse.h"
#include "updategatewaysoftwarenowresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace StorageGateway {

/**
 * @class  UpdateGatewaySoftwareNowResponse
 *
 * @brief  Handles StorageGateway UpdateGatewaySoftwareNow responses.
 *
 * @see    StorageGatewayClient::updateGatewaySoftwareNow
 */

/**
 * @brief  Constructs a new UpdateGatewaySoftwareNowResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateGatewaySoftwareNowResponse::UpdateGatewaySoftwareNowResponse(
        const UpdateGatewaySoftwareNowRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : StorageGatewayResponse(new UpdateGatewaySoftwareNowResponsePrivate(this), parent)
{
    setRequest(new UpdateGatewaySoftwareNowRequest(request));
    setReply(reply);
}

const UpdateGatewaySoftwareNowRequest * UpdateGatewaySoftwareNowResponse::request() const
{
    Q_D(const UpdateGatewaySoftwareNowResponse);
    return static_cast<const UpdateGatewaySoftwareNowRequest *>(d->request);
}

/**
 * @brief  Parse a StorageGateway UpdateGatewaySoftwareNow response.
 *
 * @param  response  Response to parse.
 */
void UpdateGatewaySoftwareNowResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateGatewaySoftwareNowResponsePrivate
 *
 * @brief  Private implementation for UpdateGatewaySoftwareNowResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateGatewaySoftwareNowResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateGatewaySoftwareNowResponse instance.
 */
UpdateGatewaySoftwareNowResponsePrivate::UpdateGatewaySoftwareNowResponsePrivate(
    UpdateGatewaySoftwareNowQueueResponse * const q) : UpdateGatewaySoftwareNowPrivate(q)
{

}

/**
 * @brief  Parse an StorageGateway UpdateGatewaySoftwareNowResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateGatewaySoftwareNowResponsePrivate::UpdateGatewaySoftwareNowResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateGatewaySoftwareNowResponse"));
    /// @todo
}

} // namespace StorageGateway
} // namespace AWS
