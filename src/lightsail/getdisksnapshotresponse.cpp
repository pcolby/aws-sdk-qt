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

#include "getdisksnapshotresponse.h"
#include "getdisksnapshotresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Lightsail {

/**
 * @class  GetDiskSnapshotResponse
 *
 * @brief  Handles Lightsail GetDiskSnapshot responses.
 *
 * @see    LightsailClient::getDiskSnapshot
 */

/**
 * @brief  Constructs a new GetDiskSnapshotResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetDiskSnapshotResponse::GetDiskSnapshotResponse(
        const GetDiskSnapshotRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LightsailResponse(new GetDiskSnapshotResponsePrivate(this), parent)
{
    setRequest(new GetDiskSnapshotRequest(request));
    setReply(reply);
}

const GetDiskSnapshotRequest * GetDiskSnapshotResponse::request() const
{
    Q_D(const GetDiskSnapshotResponse);
    return static_cast<const GetDiskSnapshotRequest *>(d->request);
}

/**
 * @brief  Parse a Lightsail GetDiskSnapshot response.
 *
 * @param  response  Response to parse.
 */
void GetDiskSnapshotResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetDiskSnapshotResponsePrivate
 *
 * @brief  Private implementation for GetDiskSnapshotResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetDiskSnapshotResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetDiskSnapshotResponse instance.
 */
GetDiskSnapshotResponsePrivate::GetDiskSnapshotResponsePrivate(
    GetDiskSnapshotQueueResponse * const q) : GetDiskSnapshotPrivate(q)
{

}

/**
 * @brief  Parse an Lightsail GetDiskSnapshotResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetDiskSnapshotResponsePrivate::GetDiskSnapshotResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDiskSnapshotResponse"));
    /// @todo
}

} // namespace Lightsail
} // namespace AWS
