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

#include "restoredbclusterfromsnapshotresponse.h"
#include "restoredbclusterfromsnapshotresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RDS {

/**
 * @class  RestoreDBClusterFromSnapshotResponse
 *
 * @brief  Handles RDS RestoreDBClusterFromSnapshot responses.
 *
 * @see    RDSClient::restoreDBClusterFromSnapshot
 */

/**
 * @brief  Constructs a new RestoreDBClusterFromSnapshotResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RestoreDBClusterFromSnapshotResponse::RestoreDBClusterFromSnapshotResponse(
        const RestoreDBClusterFromSnapshotRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RestoreDBClusterFromSnapshotResponse(new RestoreDBClusterFromSnapshotResponsePrivate(this), parent)
{
    setRequest(new RestoreDBClusterFromSnapshotRequest(request));
    setReply(reply);
}

const RestoreDBClusterFromSnapshotRequest * RestoreDBClusterFromSnapshotResponse::request() const
{
    Q_D(const RestoreDBClusterFromSnapshotResponse);
    return static_cast<const RestoreDBClusterFromSnapshotRequest *>(d->request);
}

/**
 * @brief  Parse a RDS RestoreDBClusterFromSnapshot response.
 *
 * @param  response  Response to parse.
 */
void RestoreDBClusterFromSnapshotResponse::parseSuccess(QIODevice &response)
{
    Q_D(RestoreDBClusterFromSnapshotResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  RestoreDBClusterFromSnapshotResponsePrivate
 *
 * @brief  Private implementation for RestoreDBClusterFromSnapshotResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RestoreDBClusterFromSnapshotResponsePrivate object.
 *
 * @param  q  Pointer to this object's public RestoreDBClusterFromSnapshotResponse instance.
 */
RestoreDBClusterFromSnapshotResponsePrivate::RestoreDBClusterFromSnapshotResponsePrivate(
    RestoreDBClusterFromSnapshotResponse * const q) : RDSResponsePrivate(q)
{

}

/**
 * @brief  Parse an RDS RestoreDBClusterFromSnapshotResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void RestoreDBClusterFromSnapshotResponsePrivate::parseRestoreDBClusterFromSnapshotResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RestoreDBClusterFromSnapshotResponse"));
    /// @todo
}

} // namespace RDS
} // namespace QtAws
