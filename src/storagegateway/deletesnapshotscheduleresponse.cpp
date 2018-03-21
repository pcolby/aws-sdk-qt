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

#include "deletesnapshotscheduleresponse.h"
#include "deletesnapshotscheduleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace StorageGateway {

/**
 * @class  DeleteSnapshotScheduleResponse
 *
 * @brief  Handles StorageGateway DeleteSnapshotSchedule responses.
 *
 * @see    StorageGatewayClient::deleteSnapshotSchedule
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteSnapshotScheduleResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : StorageGatewayResponse(new DeleteSnapshotScheduleResponsePrivate(this), parent)
{
    setRequest(new DeleteSnapshotScheduleRequest(request));
    setReply(reply);
}

const DeleteSnapshotScheduleRequest * DeleteSnapshotScheduleResponse::request() const
{
    Q_D(const DeleteSnapshotScheduleResponse);
    return static_cast<const DeleteSnapshotScheduleRequest *>(d->request);
}

/**
 * @brief  Parse a StorageGateway DeleteSnapshotSchedule response.
 *
 * @param  response  Response to parse.
 */
void DeleteSnapshotScheduleResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteSnapshotScheduleResponsePrivate
 *
 * @brief  Private implementation for DeleteSnapshotScheduleResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteSnapshotScheduleResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteSnapshotScheduleResponse instance.
 */
DeleteSnapshotScheduleResponsePrivate::DeleteSnapshotScheduleResponsePrivate(
    DeleteSnapshotScheduleQueueResponse * const q) : DeleteSnapshotSchedulePrivate(q)
{

}

/**
 * @brief  Parse an StorageGateway DeleteSnapshotScheduleResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteSnapshotScheduleResponsePrivate::DeleteSnapshotScheduleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteSnapshotScheduleResponse"));
    /// @todo
}
