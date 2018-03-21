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

#include "updatefleetattributesresponse.h"
#include "updatefleetattributesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace GameLift {

/**
 * @class  UpdateFleetAttributesResponse
 *
 * @brief  Handles GameLift UpdateFleetAttributes responses.
 *
 * @see    GameLiftClient::updateFleetAttributes
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateFleetAttributesResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GameLiftResponse(new UpdateFleetAttributesResponsePrivate(this), parent)
{
    setRequest(new UpdateFleetAttributesRequest(request));
    setReply(reply);
}

const UpdateFleetAttributesRequest * UpdateFleetAttributesResponse::request() const
{
    Q_D(const UpdateFleetAttributesResponse);
    return static_cast<const UpdateFleetAttributesRequest *>(d->request);
}

/**
 * @brief  Parse a GameLift UpdateFleetAttributes response.
 *
 * @param  response  Response to parse.
 */
void UpdateFleetAttributesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateFleetAttributesResponsePrivate
 *
 * @brief  Private implementation for UpdateFleetAttributesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateFleetAttributesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateFleetAttributesResponse instance.
 */
UpdateFleetAttributesResponsePrivate::UpdateFleetAttributesResponsePrivate(
    UpdateFleetAttributesQueueResponse * const q) : UpdateFleetAttributesPrivate(q)
{

}

/**
 * @brief  Parse an GameLift UpdateFleetAttributesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateFleetAttributesResponsePrivate::UpdateFleetAttributesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateFleetAttributesResponse"));
    /// @todo
}

} // namespace GameLift
} // namespace AWS
