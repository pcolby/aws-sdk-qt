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

#include "deletedbsnapshotresponse.h"
#include "deletedbsnapshotresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace RDS {

/**
 * @class  DeleteDBSnapshotResponse
 *
 * @brief  Handles RDS DeleteDBSnapshot responses.
 *
 * @see    RDSClient::deleteDBSnapshot
 */

/**
 * @brief  Constructs a new DeleteDBSnapshotResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteDBSnapshotResponse::DeleteDBSnapshotResponse(
        const DeleteDBSnapshotRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RDSResponse(new DeleteDBSnapshotResponsePrivate(this), parent)
{
    setRequest(new DeleteDBSnapshotRequest(request));
    setReply(reply);
}

const DeleteDBSnapshotRequest * DeleteDBSnapshotResponse::request() const
{
    Q_D(const DeleteDBSnapshotResponse);
    return static_cast<const DeleteDBSnapshotRequest *>(d->request);
}

/**
 * @brief  Parse a RDS DeleteDBSnapshot response.
 *
 * @param  response  Response to parse.
 */
void DeleteDBSnapshotResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteDBSnapshotResponsePrivate
 *
 * @brief  Private implementation for DeleteDBSnapshotResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteDBSnapshotResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteDBSnapshotResponse instance.
 */
DeleteDBSnapshotResponsePrivate::DeleteDBSnapshotResponsePrivate(
    DeleteDBSnapshotQueueResponse * const q) : DeleteDBSnapshotPrivate(q)
{

}

/**
 * @brief  Parse an RDS DeleteDBSnapshotResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteDBSnapshotResponsePrivate::DeleteDBSnapshotResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteDBSnapshotResponse"));
    /// @todo
}

} // namespace RDS
} // namespace AWS
