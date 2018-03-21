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

#include "copyclustersnapshotresponse.h"
#include "copyclustersnapshotresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Redshift {

/**
 * @class  CopyClusterSnapshotResponse
 *
 * @brief  Handles Redshift CopyClusterSnapshot responses.
 *
 * @see    RedshiftClient::copyClusterSnapshot
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CopyClusterSnapshotResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RedshiftResponse(new CopyClusterSnapshotResponsePrivate(this), parent)
{
    setRequest(new CopyClusterSnapshotRequest(request));
    setReply(reply);
}

const CopyClusterSnapshotRequest * CopyClusterSnapshotResponse::request() const
{
    Q_D(const CopyClusterSnapshotResponse);
    return static_cast<const CopyClusterSnapshotRequest *>(d->request);
}

/**
 * @brief  Parse a Redshift CopyClusterSnapshot response.
 *
 * @param  response  Response to parse.
 */
void CopyClusterSnapshotResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CopyClusterSnapshotResponsePrivate
 *
 * @brief  Private implementation for CopyClusterSnapshotResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CopyClusterSnapshotResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CopyClusterSnapshotResponse instance.
 */
CopyClusterSnapshotResponsePrivate::CopyClusterSnapshotResponsePrivate(
    CopyClusterSnapshotQueueResponse * const q) : CopyClusterSnapshotPrivate(q)
{

}

/**
 * @brief  Parse an Redshift CopyClusterSnapshotResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CopyClusterSnapshotResponsePrivate::CopyClusterSnapshotResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CopyClusterSnapshotResponse"));
    /// @todo
}

} // namespace Redshift
} // namespace AWS
