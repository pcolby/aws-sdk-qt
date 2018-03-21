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

#include "updatestageresponse.h"
#include "updatestageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace APIGateway {

/**
 * @class  UpdateStageResponse
 *
 * @brief  Handles APIGateway UpdateStage responses.
 *
 * @see    APIGatewayClient::updateStage
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateStageResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new UpdateStageResponsePrivate(this), parent)
{
    setRequest(new UpdateStageRequest(request));
    setReply(reply);
}

const UpdateStageRequest * UpdateStageResponse::request() const
{
    Q_D(const UpdateStageResponse);
    return static_cast<const UpdateStageRequest *>(d->request);
}

/**
 * @brief  Parse a APIGateway UpdateStage response.
 *
 * @param  response  Response to parse.
 */
void UpdateStageResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateStageResponsePrivate
 *
 * @brief  Private implementation for UpdateStageResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateStageResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateStageResponse instance.
 */
UpdateStageResponsePrivate::UpdateStageResponsePrivate(
    UpdateStageQueueResponse * const q) : UpdateStagePrivate(q)
{

}

/**
 * @brief  Parse an APIGateway UpdateStageResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateStageResponsePrivate::UpdateStageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateStageResponse"));
    /// @todo
}

} // namespace APIGateway
} // namespace AWS
