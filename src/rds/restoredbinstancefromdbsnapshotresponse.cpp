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

#include "restoredbinstancefromdbsnapshotresponse.h"
#include "restoredbinstancefromdbsnapshotresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RDS {

/**
 * @class  RestoreDBInstanceFromDBSnapshotResponse
 *
 * @brief  Handles RDS RestoreDBInstanceFromDBSnapshot responses.
 *
 * @see    RDSClient::restoreDBInstanceFromDBSnapshot
 */

/**
 * @brief  Constructs a new RestoreDBInstanceFromDBSnapshotResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RestoreDBInstanceFromDBSnapshotResponse::RestoreDBInstanceFromDBSnapshotResponse(
        const RestoreDBInstanceFromDBSnapshotRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RDSResponse(new RestoreDBInstanceFromDBSnapshotResponsePrivate(this), parent)
{
    setRequest(new RestoreDBInstanceFromDBSnapshotRequest(request));
    setReply(reply);
}

const RestoreDBInstanceFromDBSnapshotRequest * RestoreDBInstanceFromDBSnapshotResponse::request() const
{
    Q_D(const RestoreDBInstanceFromDBSnapshotResponse);
    return static_cast<const RestoreDBInstanceFromDBSnapshotRequest *>(d->request);
}

/**
 * @brief  Parse a RDS RestoreDBInstanceFromDBSnapshot response.
 *
 * @param  response  Response to parse.
 */
void RestoreDBInstanceFromDBSnapshotResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  RestoreDBInstanceFromDBSnapshotResponsePrivate
 *
 * @brief  Private implementation for RestoreDBInstanceFromDBSnapshotResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RestoreDBInstanceFromDBSnapshotResponsePrivate object.
 *
 * @param  q  Pointer to this object's public RestoreDBInstanceFromDBSnapshotResponse instance.
 */
RestoreDBInstanceFromDBSnapshotResponsePrivate::RestoreDBInstanceFromDBSnapshotResponsePrivate(
    RestoreDBInstanceFromDBSnapshotQueueResponse * const q) : RestoreDBInstanceFromDBSnapshotPrivate(q)
{

}

/**
 * @brief  Parse an RDS RestoreDBInstanceFromDBSnapshotResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void RestoreDBInstanceFromDBSnapshotResponsePrivate::RestoreDBInstanceFromDBSnapshotResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RestoreDBInstanceFromDBSnapshotResponse"));
    /// @todo
}

} // namespace RDS
} // namespace QtAws
