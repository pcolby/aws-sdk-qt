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

#include "createsnapshotresponse.h"
#include "createsnapshotresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EC2 {

/**
 * @class  CreateSnapshotResponse
 *
 * @brief  Handles EC2 CreateSnapshot responses.
 *
 * @see    EC2Client::createSnapshot
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateSnapshotResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new CreateSnapshotResponsePrivate(this), parent)
{
    setRequest(new CreateSnapshotRequest(request));
    setReply(reply);
}

const CreateSnapshotRequest * CreateSnapshotResponse::request() const
{
    Q_D(const CreateSnapshotResponse);
    return static_cast<const CreateSnapshotRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 CreateSnapshot response.
 *
 * @param  response  Response to parse.
 */
void CreateSnapshotResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateSnapshotResponsePrivate
 *
 * @brief  Private implementation for CreateSnapshotResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateSnapshotResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateSnapshotResponse instance.
 */
CreateSnapshotResponsePrivate::CreateSnapshotResponsePrivate(
    CreateSnapshotQueueResponse * const q) : CreateSnapshotPrivate(q)
{

}

/**
 * @brief  Parse an EC2 CreateSnapshotResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateSnapshotResponsePrivate::CreateSnapshotResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateSnapshotResponse"));
    /// @todo
}

} // namespace EC2
} // namespace AWS
