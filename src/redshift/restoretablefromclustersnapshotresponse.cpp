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

#include "restoretablefromclustersnapshotresponse.h"
#include "restoretablefromclustersnapshotresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Redshift {

/**
 * @class  RestoreTableFromClusterSnapshotResponse
 *
 * @brief  Handles Redshift RestoreTableFromClusterSnapshot responses.
 *
 * @see    RedshiftClient::restoreTableFromClusterSnapshot
 */

/**
 * @brief  Constructs a new RestoreTableFromClusterSnapshotResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RestoreTableFromClusterSnapshotResponse::RestoreTableFromClusterSnapshotResponse(
        const RestoreTableFromClusterSnapshotRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RedshiftResponse(new RestoreTableFromClusterSnapshotResponsePrivate(this), parent)
{
    setRequest(new RestoreTableFromClusterSnapshotRequest(request));
    setReply(reply);
}

const RestoreTableFromClusterSnapshotRequest * RestoreTableFromClusterSnapshotResponse::request() const
{
    Q_D(const RestoreTableFromClusterSnapshotResponse);
    return static_cast<const RestoreTableFromClusterSnapshotRequest *>(d->request);
}

/**
 * @brief  Parse a Redshift RestoreTableFromClusterSnapshot response.
 *
 * @param  response  Response to parse.
 */
void RestoreTableFromClusterSnapshotResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  RestoreTableFromClusterSnapshotResponsePrivate
 *
 * @brief  Private implementation for RestoreTableFromClusterSnapshotResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RestoreTableFromClusterSnapshotResponsePrivate object.
 *
 * @param  q  Pointer to this object's public RestoreTableFromClusterSnapshotResponse instance.
 */
RestoreTableFromClusterSnapshotResponsePrivate::RestoreTableFromClusterSnapshotResponsePrivate(
    RestoreTableFromClusterSnapshotQueueResponse * const q) : RestoreTableFromClusterSnapshotPrivate(q)
{

}

/**
 * @brief  Parse an Redshift RestoreTableFromClusterSnapshotResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void RestoreTableFromClusterSnapshotResponsePrivate::RestoreTableFromClusterSnapshotResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RestoreTableFromClusterSnapshotResponse"));
    /// @todo
}

} // namespace Redshift
} // namespace QtAws
