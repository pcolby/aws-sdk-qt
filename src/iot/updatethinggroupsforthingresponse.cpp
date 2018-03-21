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

#include "updatethinggroupsforthingresponse.h"
#include "updatethinggroupsforthingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace IoT {

/**
 * @class  UpdateThingGroupsForThingResponse
 *
 * @brief  Handles IoT UpdateThingGroupsForThing responses.
 *
 * @see    IoTClient::updateThingGroupsForThing
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateThingGroupsForThingResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new UpdateThingGroupsForThingResponsePrivate(this), parent)
{
    setRequest(new UpdateThingGroupsForThingRequest(request));
    setReply(reply);
}

const UpdateThingGroupsForThingRequest * UpdateThingGroupsForThingResponse::request() const
{
    Q_D(const UpdateThingGroupsForThingResponse);
    return static_cast<const UpdateThingGroupsForThingRequest *>(d->request);
}

/**
 * @brief  Parse a IoT UpdateThingGroupsForThing response.
 *
 * @param  response  Response to parse.
 */
void UpdateThingGroupsForThingResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateThingGroupsForThingResponsePrivate
 *
 * @brief  Private implementation for UpdateThingGroupsForThingResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateThingGroupsForThingResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateThingGroupsForThingResponse instance.
 */
UpdateThingGroupsForThingResponsePrivate::UpdateThingGroupsForThingResponsePrivate(
    UpdateThingGroupsForThingQueueResponse * const q) : UpdateThingGroupsForThingPrivate(q)
{

}

/**
 * @brief  Parse an IoT UpdateThingGroupsForThingResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateThingGroupsForThingResponsePrivate::UpdateThingGroupsForThingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateThingGroupsForThingResponse"));
    /// @todo
}

} // namespace IoT
} // namespace AWS
