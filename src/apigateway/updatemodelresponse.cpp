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

#include "updatemodelresponse.h"
#include "updatemodelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace APIGateway {

/**
 * @class  UpdateModelResponse
 *
 * @brief  Handles APIGateway UpdateModel responses.
 *
 * @see    APIGatewayClient::updateModel
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateModelResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new UpdateModelResponsePrivate(this), parent)
{
    setRequest(new UpdateModelRequest(request));
    setReply(reply);
}

const UpdateModelRequest * UpdateModelResponse::request() const
{
    Q_D(const UpdateModelResponse);
    return static_cast<const UpdateModelRequest *>(d->request);
}

/**
 * @brief  Parse a APIGateway UpdateModel response.
 *
 * @param  response  Response to parse.
 */
void UpdateModelResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateModelResponsePrivate
 *
 * @brief  Private implementation for UpdateModelResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateModelResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateModelResponse instance.
 */
UpdateModelResponsePrivate::UpdateModelResponsePrivate(
    UpdateModelQueueResponse * const q) : UpdateModelPrivate(q)
{

}

/**
 * @brief  Parse an APIGateway UpdateModelResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateModelResponsePrivate::UpdateModelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateModelResponse"));
    /// @todo
}

} // namespace APIGateway
} // namespace AWS
