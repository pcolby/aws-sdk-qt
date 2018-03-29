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

#include "getinstancesnapshotresponse.h"
#include "getinstancesnapshotresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Lightsail {

/**
 * @class  GetInstanceSnapshotResponse
 *
 * @brief  Handles Lightsail GetInstanceSnapshot responses.
 *
 * @see    LightsailClient::getInstanceSnapshot
 */

/**
 * @brief  Constructs a new GetInstanceSnapshotResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetInstanceSnapshotResponse::GetInstanceSnapshotResponse(
        const GetInstanceSnapshotRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LightsailResponse(new GetInstanceSnapshotResponsePrivate(this), parent)
{
    setRequest(new GetInstanceSnapshotRequest(request));
    setReply(reply);
}

const GetInstanceSnapshotRequest * GetInstanceSnapshotResponse::request() const
{
    Q_D(const GetInstanceSnapshotResponse);
    return static_cast<const GetInstanceSnapshotRequest *>(d->request);
}

/**
 * @brief  Parse a Lightsail GetInstanceSnapshot response.
 *
 * @param  response  Response to parse.
 */
void GetInstanceSnapshotResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetInstanceSnapshotResponsePrivate
 *
 * @brief  Private implementation for GetInstanceSnapshotResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetInstanceSnapshotResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetInstanceSnapshotResponse instance.
 */
GetInstanceSnapshotResponsePrivate::GetInstanceSnapshotResponsePrivate(
    GetInstanceSnapshotResponse * const q) : LightsailResponsePrivate(q)
{

}

/**
 * @brief  Parse an Lightsail GetInstanceSnapshotResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetInstanceSnapshotResponsePrivate::GetInstanceSnapshotResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetInstanceSnapshotResponse"));
    /// @todo
}

} // namespace Lightsail
} // namespace QtAws
