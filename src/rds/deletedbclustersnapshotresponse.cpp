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

#include "deletedbclustersnapshotresponse.h"
#include "deletedbclustersnapshotresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace RDS {

/**
 * @class  DeleteDBClusterSnapshotResponse
 *
 * @brief  Handles RDS DeleteDBClusterSnapshot responses.
 *
 * @see    RDSClient::deleteDBClusterSnapshot
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteDBClusterSnapshotResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RDSResponse(new DeleteDBClusterSnapshotResponsePrivate(this), parent)
{
    setRequest(new DeleteDBClusterSnapshotRequest(request));
    setReply(reply);
}

const DeleteDBClusterSnapshotRequest * DeleteDBClusterSnapshotResponse::request() const
{
    Q_D(const DeleteDBClusterSnapshotResponse);
    return static_cast<const DeleteDBClusterSnapshotRequest *>(d->request);
}

/**
 * @brief  Parse a RDS DeleteDBClusterSnapshot response.
 *
 * @param  response  Response to parse.
 */
void DeleteDBClusterSnapshotResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteDBClusterSnapshotResponsePrivate
 *
 * @brief  Private implementation for DeleteDBClusterSnapshotResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteDBClusterSnapshotResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteDBClusterSnapshotResponse instance.
 */
DeleteDBClusterSnapshotResponsePrivate::DeleteDBClusterSnapshotResponsePrivate(
    DeleteDBClusterSnapshotQueueResponse * const q) : DeleteDBClusterSnapshotPrivate(q)
{

}

/**
 * @brief  Parse an RDS DeleteDBClusterSnapshotResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteDBClusterSnapshotResponsePrivate::DeleteDBClusterSnapshotResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteDBClusterSnapshotResponse"));
    /// @todo
}
