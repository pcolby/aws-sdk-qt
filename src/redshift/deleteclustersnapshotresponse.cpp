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

#include "deleteclustersnapshotresponse.h"
#include "deleteclustersnapshotresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Redshift {

/**
 * @class  DeleteClusterSnapshotResponse
 *
 * @brief  Handles Redshift DeleteClusterSnapshot responses.
 *
 * @see    RedshiftClient::deleteClusterSnapshot
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteClusterSnapshotResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RedshiftResponse(new DeleteClusterSnapshotResponsePrivate(this), parent)
{
    setRequest(new DeleteClusterSnapshotRequest(request));
    setReply(reply);
}

const DeleteClusterSnapshotRequest * DeleteClusterSnapshotResponse::request() const
{
    Q_D(const DeleteClusterSnapshotResponse);
    return static_cast<const DeleteClusterSnapshotRequest *>(d->request);
}

/**
 * @brief  Parse a Redshift DeleteClusterSnapshot response.
 *
 * @param  response  Response to parse.
 */
void DeleteClusterSnapshotResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteClusterSnapshotResponsePrivate
 *
 * @brief  Private implementation for DeleteClusterSnapshotResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteClusterSnapshotResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteClusterSnapshotResponse instance.
 */
DeleteClusterSnapshotResponsePrivate::DeleteClusterSnapshotResponsePrivate(
    DeleteClusterSnapshotQueueResponse * const q) : DeleteClusterSnapshotPrivate(q)
{

}

/**
 * @brief  Parse an Redshift DeleteClusterSnapshotResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteClusterSnapshotResponsePrivate::DeleteClusterSnapshotResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteClusterSnapshotResponse"));
    /// @todo
}
