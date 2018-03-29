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

#include "createinstancesfromsnapshotresponse.h"
#include "createinstancesfromsnapshotresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Lightsail {

/**
 * @class  CreateInstancesFromSnapshotResponse
 *
 * @brief  Handles Lightsail CreateInstancesFromSnapshot responses.
 *
 * @see    LightsailClient::createInstancesFromSnapshot
 */

/**
 * @brief  Constructs a new CreateInstancesFromSnapshotResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateInstancesFromSnapshotResponse::CreateInstancesFromSnapshotResponse(
        const CreateInstancesFromSnapshotRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LightsailResponse(new CreateInstancesFromSnapshotResponsePrivate(this), parent)
{
    setRequest(new CreateInstancesFromSnapshotRequest(request));
    setReply(reply);
}

const CreateInstancesFromSnapshotRequest * CreateInstancesFromSnapshotResponse::request() const
{
    Q_D(const CreateInstancesFromSnapshotResponse);
    return static_cast<const CreateInstancesFromSnapshotRequest *>(d->request);
}

/**
 * @brief  Parse a Lightsail CreateInstancesFromSnapshot response.
 *
 * @param  response  Response to parse.
 */
void CreateInstancesFromSnapshotResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateInstancesFromSnapshotResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateInstancesFromSnapshotResponsePrivate
 *
 * @brief  Private implementation for CreateInstancesFromSnapshotResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateInstancesFromSnapshotResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateInstancesFromSnapshotResponse instance.
 */
CreateInstancesFromSnapshotResponsePrivate::CreateInstancesFromSnapshotResponsePrivate(
    CreateInstancesFromSnapshotResponse * const q) : LightsailResponsePrivate(q)
{

}

/**
 * @brief  Parse an Lightsail CreateInstancesFromSnapshotResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateInstancesFromSnapshotResponsePrivate::parseCreateInstancesFromSnapshotResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateInstancesFromSnapshotResponse"));
    /// @todo
}

} // namespace Lightsail
} // namespace QtAws
