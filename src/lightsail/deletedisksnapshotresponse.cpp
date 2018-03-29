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

#include "deletedisksnapshotresponse.h"
#include "deletedisksnapshotresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Lightsail {

/**
 * @class  DeleteDiskSnapshotResponse
 *
 * @brief  Handles Lightsail DeleteDiskSnapshot responses.
 *
 * @see    LightsailClient::deleteDiskSnapshot
 */

/**
 * @brief  Constructs a new DeleteDiskSnapshotResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteDiskSnapshotResponse::DeleteDiskSnapshotResponse(
        const DeleteDiskSnapshotRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LightsailResponse(new DeleteDiskSnapshotResponsePrivate(this), parent)
{
    setRequest(new DeleteDiskSnapshotRequest(request));
    setReply(reply);
}

const DeleteDiskSnapshotRequest * DeleteDiskSnapshotResponse::request() const
{
    Q_D(const DeleteDiskSnapshotResponse);
    return static_cast<const DeleteDiskSnapshotRequest *>(d->request);
}

/**
 * @brief  Parse a Lightsail DeleteDiskSnapshot response.
 *
 * @param  response  Response to parse.
 */
void DeleteDiskSnapshotResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteDiskSnapshotResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteDiskSnapshotResponsePrivate
 *
 * @brief  Private implementation for DeleteDiskSnapshotResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteDiskSnapshotResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteDiskSnapshotResponse instance.
 */
DeleteDiskSnapshotResponsePrivate::DeleteDiskSnapshotResponsePrivate(
    DeleteDiskSnapshotResponse * const q) : LightsailResponsePrivate(q)
{

}

/**
 * @brief  Parse an Lightsail DeleteDiskSnapshotResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteDiskSnapshotResponsePrivate::parseDeleteDiskSnapshotResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteDiskSnapshotResponse"));
    /// @todo
}

} // namespace Lightsail
} // namespace QtAws
