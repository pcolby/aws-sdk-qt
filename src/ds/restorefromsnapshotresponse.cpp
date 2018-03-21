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

#include "restorefromsnapshotresponse.h"
#include "restorefromsnapshotresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace DirectoryService {

/**
 * @class  RestoreFromSnapshotResponse
 *
 * @brief  Handles DirectoryService RestoreFromSnapshot responses.
 *
 * @see    DirectoryServiceClient::restoreFromSnapshot
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RestoreFromSnapshotResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectoryServiceResponse(new RestoreFromSnapshotResponsePrivate(this), parent)
{
    setRequest(new RestoreFromSnapshotRequest(request));
    setReply(reply);
}

const RestoreFromSnapshotRequest * RestoreFromSnapshotResponse::request() const
{
    Q_D(const RestoreFromSnapshotResponse);
    return static_cast<const RestoreFromSnapshotRequest *>(d->request);
}

/**
 * @brief  Parse a DirectoryService RestoreFromSnapshot response.
 *
 * @param  response  Response to parse.
 */
void RestoreFromSnapshotResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  RestoreFromSnapshotResponsePrivate
 *
 * @brief  Private implementation for RestoreFromSnapshotResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RestoreFromSnapshotResponsePrivate object.
 *
 * @param  q  Pointer to this object's public RestoreFromSnapshotResponse instance.
 */
RestoreFromSnapshotResponsePrivate::RestoreFromSnapshotResponsePrivate(
    RestoreFromSnapshotQueueResponse * const q) : RestoreFromSnapshotPrivate(q)
{

}

/**
 * @brief  Parse an DirectoryService RestoreFromSnapshotResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void RestoreFromSnapshotResponsePrivate::RestoreFromSnapshotResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RestoreFromSnapshotResponse"));
    /// @todo
}

} // namespace DirectoryService
} // namespace AWS
