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

#include "createinstancesnapshotresponse.h"
#include "createinstancesnapshotresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Lightsail {

/**
 * @class  CreateInstanceSnapshotResponse
 *
 * @brief  Handles Lightsail CreateInstanceSnapshot responses.
 *
 * @see    LightsailClient::createInstanceSnapshot
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateInstanceSnapshotResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LightsailResponse(new CreateInstanceSnapshotResponsePrivate(this), parent)
{
    setRequest(new CreateInstanceSnapshotRequest(request));
    setReply(reply);
}

const CreateInstanceSnapshotRequest * CreateInstanceSnapshotResponse::request() const
{
    Q_D(const CreateInstanceSnapshotResponse);
    return static_cast<const CreateInstanceSnapshotRequest *>(d->request);
}

/**
 * @brief  Parse a Lightsail CreateInstanceSnapshot response.
 *
 * @param  response  Response to parse.
 */
void CreateInstanceSnapshotResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateInstanceSnapshotResponsePrivate
 *
 * @brief  Private implementation for CreateInstanceSnapshotResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateInstanceSnapshotResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateInstanceSnapshotResponse instance.
 */
CreateInstanceSnapshotResponsePrivate::CreateInstanceSnapshotResponsePrivate(
    CreateInstanceSnapshotQueueResponse * const q) : CreateInstanceSnapshotPrivate(q)
{

}

/**
 * @brief  Parse an Lightsail CreateInstanceSnapshotResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateInstanceSnapshotResponsePrivate::CreateInstanceSnapshotResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateInstanceSnapshotResponse"));
    /// @todo
}

} // namespace Lightsail
} // namespace AWS
