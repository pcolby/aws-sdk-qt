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

#include "getdisksnapshotsresponse.h"
#include "getdisksnapshotsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Lightsail {

/**
 * @class  GetDiskSnapshotsResponse
 *
 * @brief  Handles Lightsail GetDiskSnapshots responses.
 *
 * @see    LightsailClient::getDiskSnapshots
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetDiskSnapshotsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LightsailResponse(new GetDiskSnapshotsResponsePrivate(this), parent)
{
    setRequest(new GetDiskSnapshotsRequest(request));
    setReply(reply);
}

const GetDiskSnapshotsRequest * GetDiskSnapshotsResponse::request() const
{
    Q_D(const GetDiskSnapshotsResponse);
    return static_cast<const GetDiskSnapshotsRequest *>(d->request);
}

/**
 * @brief  Parse a Lightsail GetDiskSnapshots response.
 *
 * @param  response  Response to parse.
 */
void GetDiskSnapshotsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetDiskSnapshotsResponsePrivate
 *
 * @brief  Private implementation for GetDiskSnapshotsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetDiskSnapshotsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetDiskSnapshotsResponse instance.
 */
GetDiskSnapshotsResponsePrivate::GetDiskSnapshotsResponsePrivate(
    GetDiskSnapshotsQueueResponse * const q) : GetDiskSnapshotsPrivate(q)
{

}

/**
 * @brief  Parse an Lightsail GetDiskSnapshotsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetDiskSnapshotsResponsePrivate::GetDiskSnapshotsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDiskSnapshotsResponse"));
    /// @todo
}
