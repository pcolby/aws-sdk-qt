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

#include "updategatewayresponseresponse.h"
#include "updategatewayresponseresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace APIGateway {

/**
 * @class  UpdateGatewayResponseResponse
 *
 * @brief  Handles APIGateway UpdateGatewayResponse responses.
 *
 * @see    APIGatewayClient::updateGatewayResponse
 */

/**
 * @brief  Constructs a new UpdateGatewayResponseResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateGatewayResponseResponse::UpdateGatewayResponseResponse(
        const UpdateGatewayResponseRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : UpdateGatewayResponseResponse(new UpdateGatewayResponseResponsePrivate(this), parent)
{
    setRequest(new UpdateGatewayResponseRequest(request));
    setReply(reply);
}

const UpdateGatewayResponseRequest * UpdateGatewayResponseResponse::request() const
{
    Q_D(const UpdateGatewayResponseResponse);
    return static_cast<const UpdateGatewayResponseRequest *>(d->request);
}

/**
 * @brief  Parse a APIGateway UpdateGatewayResponse response.
 *
 * @param  response  Response to parse.
 */
void UpdateGatewayResponseResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateGatewayResponseResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateGatewayResponseResponsePrivate
 *
 * @brief  Private implementation for UpdateGatewayResponseResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateGatewayResponseResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateGatewayResponseResponse instance.
 */
UpdateGatewayResponseResponsePrivate::UpdateGatewayResponseResponsePrivate(
    UpdateGatewayResponseResponse * const q) : APIGatewayResponsePrivate(q)
{

}

/**
 * @brief  Parse an APIGateway UpdateGatewayResponseResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateGatewayResponseResponsePrivate::parseUpdateGatewayResponseResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateGatewayResponseResponse"));
    /// @todo
}

} // namespace APIGateway
} // namespace QtAws
