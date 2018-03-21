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

#include "deleteinstancesnapshotresponse.h"
#include "deleteinstancesnapshotresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Lightsail {

/**
 * @class  DeleteInstanceSnapshotResponse
 *
 * @brief  Handles Lightsail DeleteInstanceSnapshot responses.
 *
 * @see    LightsailClient::deleteInstanceSnapshot
 */

/**
 * @brief  Constructs a new DeleteInstanceSnapshotResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteInstanceSnapshotResponse::DeleteInstanceSnapshotResponse(
        const DeleteInstanceSnapshotRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LightsailResponse(new DeleteInstanceSnapshotResponsePrivate(this), parent)
{
    setRequest(new DeleteInstanceSnapshotRequest(request));
    setReply(reply);
}

const DeleteInstanceSnapshotRequest * DeleteInstanceSnapshotResponse::request() const
{
    Q_D(const DeleteInstanceSnapshotResponse);
    return static_cast<const DeleteInstanceSnapshotRequest *>(d->request);
}

/**
 * @brief  Parse a Lightsail DeleteInstanceSnapshot response.
 *
 * @param  response  Response to parse.
 */
void DeleteInstanceSnapshotResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteInstanceSnapshotResponsePrivate
 *
 * @brief  Private implementation for DeleteInstanceSnapshotResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteInstanceSnapshotResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteInstanceSnapshotResponse instance.
 */
DeleteInstanceSnapshotResponsePrivate::DeleteInstanceSnapshotResponsePrivate(
    DeleteInstanceSnapshotQueueResponse * const q) : DeleteInstanceSnapshotPrivate(q)
{

}

/**
 * @brief  Parse an Lightsail DeleteInstanceSnapshotResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteInstanceSnapshotResponsePrivate::DeleteInstanceSnapshotResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteInstanceSnapshotResponse"));
    /// @todo
}

} // namespace Lightsail
} // namespace AWS
