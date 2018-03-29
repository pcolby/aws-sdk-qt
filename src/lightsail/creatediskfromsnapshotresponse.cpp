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

#include "creatediskfromsnapshotresponse.h"
#include "creatediskfromsnapshotresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Lightsail {

/**
 * @class  CreateDiskFromSnapshotResponse
 *
 * @brief  Handles Lightsail CreateDiskFromSnapshot responses.
 *
 * @see    LightsailClient::createDiskFromSnapshot
 */

/**
 * @brief  Constructs a new CreateDiskFromSnapshotResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateDiskFromSnapshotResponse::CreateDiskFromSnapshotResponse(
        const CreateDiskFromSnapshotRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CreateDiskFromSnapshotResponse(new CreateDiskFromSnapshotResponsePrivate(this), parent)
{
    setRequest(new CreateDiskFromSnapshotRequest(request));
    setReply(reply);
}

const CreateDiskFromSnapshotRequest * CreateDiskFromSnapshotResponse::request() const
{
    Q_D(const CreateDiskFromSnapshotResponse);
    return static_cast<const CreateDiskFromSnapshotRequest *>(d->request);
}

/**
 * @brief  Parse a Lightsail CreateDiskFromSnapshot response.
 *
 * @param  response  Response to parse.
 */
void CreateDiskFromSnapshotResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateDiskFromSnapshotResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateDiskFromSnapshotResponsePrivate
 *
 * @brief  Private implementation for CreateDiskFromSnapshotResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateDiskFromSnapshotResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateDiskFromSnapshotResponse instance.
 */
CreateDiskFromSnapshotResponsePrivate::CreateDiskFromSnapshotResponsePrivate(
    CreateDiskFromSnapshotResponse * const q) : LightsailResponsePrivate(q)
{

}

/**
 * @brief  Parse an Lightsail CreateDiskFromSnapshotResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateDiskFromSnapshotResponsePrivate::parseCreateDiskFromSnapshotResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDiskFromSnapshotResponse"));
    /// @todo
}

} // namespace Lightsail
} // namespace QtAws
