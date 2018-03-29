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

#include "updategatewayinformationresponse.h"
#include "updategatewayinformationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace StorageGateway {

/**
 * @class  UpdateGatewayInformationResponse
 *
 * @brief  Handles StorageGateway UpdateGatewayInformation responses.
 *
 * @see    StorageGatewayClient::updateGatewayInformation
 */

/**
 * @brief  Constructs a new UpdateGatewayInformationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateGatewayInformationResponse::UpdateGatewayInformationResponse(
        const UpdateGatewayInformationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : StorageGatewayResponse(new UpdateGatewayInformationResponsePrivate(this), parent)
{
    setRequest(new UpdateGatewayInformationRequest(request));
    setReply(reply);
}

const UpdateGatewayInformationRequest * UpdateGatewayInformationResponse::request() const
{
    Q_D(const UpdateGatewayInformationResponse);
    return static_cast<const UpdateGatewayInformationRequest *>(d->request);
}

/**
 * @brief  Parse a StorageGateway UpdateGatewayInformation response.
 *
 * @param  response  Response to parse.
 */
void UpdateGatewayInformationResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateGatewayInformationResponsePrivate
 *
 * @brief  Private implementation for UpdateGatewayInformationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateGatewayInformationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateGatewayInformationResponse instance.
 */
UpdateGatewayInformationResponsePrivate::UpdateGatewayInformationResponsePrivate(
    UpdateGatewayInformationQueueResponse * const q) : UpdateGatewayInformationPrivate(q)
{

}

/**
 * @brief  Parse an StorageGateway UpdateGatewayInformationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateGatewayInformationResponsePrivate::UpdateGatewayInformationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateGatewayInformationResponse"));
    /// @todo
}

} // namespace StorageGateway
} // namespace QtAws
