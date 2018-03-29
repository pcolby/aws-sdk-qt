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

#include "updatesnapshotscheduleresponse.h"
#include "updatesnapshotscheduleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace StorageGateway {

/**
 * @class  UpdateSnapshotScheduleResponse
 *
 * @brief  Handles StorageGateway UpdateSnapshotSchedule responses.
 *
 * @see    StorageGatewayClient::updateSnapshotSchedule
 */

/**
 * @brief  Constructs a new UpdateSnapshotScheduleResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateSnapshotScheduleResponse::UpdateSnapshotScheduleResponse(
        const UpdateSnapshotScheduleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : StorageGatewayResponse(new UpdateSnapshotScheduleResponsePrivate(this), parent)
{
    setRequest(new UpdateSnapshotScheduleRequest(request));
    setReply(reply);
}

const UpdateSnapshotScheduleRequest * UpdateSnapshotScheduleResponse::request() const
{
    Q_D(const UpdateSnapshotScheduleResponse);
    return static_cast<const UpdateSnapshotScheduleRequest *>(d->request);
}

/**
 * @brief  Parse a StorageGateway UpdateSnapshotSchedule response.
 *
 * @param  response  Response to parse.
 */
void UpdateSnapshotScheduleResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateSnapshotScheduleResponsePrivate
 *
 * @brief  Private implementation for UpdateSnapshotScheduleResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateSnapshotScheduleResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateSnapshotScheduleResponse instance.
 */
UpdateSnapshotScheduleResponsePrivate::UpdateSnapshotScheduleResponsePrivate(
    UpdateSnapshotScheduleQueueResponse * const q) : UpdateSnapshotSchedulePrivate(q)
{

}

/**
 * @brief  Parse an StorageGateway UpdateSnapshotScheduleResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateSnapshotScheduleResponsePrivate::UpdateSnapshotScheduleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateSnapshotScheduleResponse"));
    /// @todo
}

} // namespace StorageGateway
} // namespace AWS
