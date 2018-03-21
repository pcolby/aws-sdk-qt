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

#include "restorefromclustersnapshotresponse.h"
#include "restorefromclustersnapshotresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Redshift {

/**
 * @class  RestoreFromClusterSnapshotResponse
 *
 * @brief  Handles Redshift RestoreFromClusterSnapshot responses.
 *
 * @see    RedshiftClient::restoreFromClusterSnapshot
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RestoreFromClusterSnapshotResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RedshiftResponse(new RestoreFromClusterSnapshotResponsePrivate(this), parent)
{
    setRequest(new RestoreFromClusterSnapshotRequest(request));
    setReply(reply);
}

const RestoreFromClusterSnapshotRequest * RestoreFromClusterSnapshotResponse::request() const
{
    Q_D(const RestoreFromClusterSnapshotResponse);
    return static_cast<const RestoreFromClusterSnapshotRequest *>(d->request);
}

/**
 * @brief  Parse a Redshift RestoreFromClusterSnapshot response.
 *
 * @param  response  Response to parse.
 */
void RestoreFromClusterSnapshotResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  RestoreFromClusterSnapshotResponsePrivate
 *
 * @brief  Private implementation for RestoreFromClusterSnapshotResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RestoreFromClusterSnapshotResponsePrivate object.
 *
 * @param  q  Pointer to this object's public RestoreFromClusterSnapshotResponse instance.
 */
RestoreFromClusterSnapshotResponsePrivate::RestoreFromClusterSnapshotResponsePrivate(
    RestoreFromClusterSnapshotQueueResponse * const q) : RestoreFromClusterSnapshotPrivate(q)
{

}

/**
 * @brief  Parse an Redshift RestoreFromClusterSnapshotResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void RestoreFromClusterSnapshotResponsePrivate::RestoreFromClusterSnapshotResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RestoreFromClusterSnapshotResponse"));
    /// @todo
}
