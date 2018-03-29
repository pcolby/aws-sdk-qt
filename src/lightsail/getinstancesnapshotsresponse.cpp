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

#include "getinstancesnapshotsresponse.h"
#include "getinstancesnapshotsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Lightsail {

/**
 * @class  GetInstanceSnapshotsResponse
 *
 * @brief  Handles Lightsail GetInstanceSnapshots responses.
 *
 * @see    LightsailClient::getInstanceSnapshots
 */

/**
 * @brief  Constructs a new GetInstanceSnapshotsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetInstanceSnapshotsResponse::GetInstanceSnapshotsResponse(
        const GetInstanceSnapshotsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LightsailResponse(new GetInstanceSnapshotsResponsePrivate(this), parent)
{
    setRequest(new GetInstanceSnapshotsRequest(request));
    setReply(reply);
}

const GetInstanceSnapshotsRequest * GetInstanceSnapshotsResponse::request() const
{
    Q_D(const GetInstanceSnapshotsResponse);
    return static_cast<const GetInstanceSnapshotsRequest *>(d->request);
}

/**
 * @brief  Parse a Lightsail GetInstanceSnapshots response.
 *
 * @param  response  Response to parse.
 */
void GetInstanceSnapshotsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetInstanceSnapshotsResponsePrivate
 *
 * @brief  Private implementation for GetInstanceSnapshotsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetInstanceSnapshotsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetInstanceSnapshotsResponse instance.
 */
GetInstanceSnapshotsResponsePrivate::GetInstanceSnapshotsResponsePrivate(
    GetInstanceSnapshotsResponse * const q) : LightsailResponsePrivate(q)
{

}

/**
 * @brief  Parse an Lightsail GetInstanceSnapshotsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetInstanceSnapshotsResponsePrivate::GetInstanceSnapshotsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetInstanceSnapshotsResponse"));
    /// @todo
}

} // namespace Lightsail
} // namespace QtAws
