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

#include "updatemethodresponse.h"
#include "updatemethodresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace APIGateway {

/**
 * @class  UpdateMethodResponse
 *
 * @brief  Handles APIGateway UpdateMethod responses.
 *
 * @see    APIGatewayClient::updateMethod
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateMethodResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new UpdateMethodResponsePrivate(this), parent)
{
    setRequest(new UpdateMethodRequest(request));
    setReply(reply);
}

const UpdateMethodRequest * UpdateMethodResponse::request() const
{
    Q_D(const UpdateMethodResponse);
    return static_cast<const UpdateMethodRequest *>(d->request);
}

/**
 * @brief  Parse a APIGateway UpdateMethod response.
 *
 * @param  response  Response to parse.
 */
void UpdateMethodResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateMethodResponsePrivate
 *
 * @brief  Private implementation for UpdateMethodResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateMethodResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateMethodResponse instance.
 */
UpdateMethodResponsePrivate::UpdateMethodResponsePrivate(
    UpdateMethodQueueResponse * const q) : UpdateMethodPrivate(q)
{

}

/**
 * @brief  Parse an APIGateway UpdateMethodResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateMethodResponsePrivate::UpdateMethodResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateMethodResponse"));
    /// @todo
}
