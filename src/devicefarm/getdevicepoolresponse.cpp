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

#include "getdevicepoolresponse.h"
#include "getdevicepoolresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace DeviceFarm {

/**
 * @class  GetDevicePoolResponse
 *
 * @brief  Handles DeviceFarm GetDevicePool responses.
 *
 * @see    DeviceFarmClient::getDevicePool
 */

/**
 * @brief  Constructs a new GetDevicePoolResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetDevicePoolResponse::GetDevicePoolResponse(
        const GetDevicePoolRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new GetDevicePoolResponsePrivate(this), parent)
{
    setRequest(new GetDevicePoolRequest(request));
    setReply(reply);
}

const GetDevicePoolRequest * GetDevicePoolResponse::request() const
{
    Q_D(const GetDevicePoolResponse);
    return static_cast<const GetDevicePoolRequest *>(d->request);
}

/**
 * @brief  Parse a DeviceFarm GetDevicePool response.
 *
 * @param  response  Response to parse.
 */
void GetDevicePoolResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetDevicePoolResponsePrivate
 *
 * @brief  Private implementation for GetDevicePoolResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetDevicePoolResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetDevicePoolResponse instance.
 */
GetDevicePoolResponsePrivate::GetDevicePoolResponsePrivate(
    GetDevicePoolQueueResponse * const q) : GetDevicePoolPrivate(q)
{

}

/**
 * @brief  Parse an DeviceFarm GetDevicePoolResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetDevicePoolResponsePrivate::GetDevicePoolResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDevicePoolResponse"));
    /// @todo
}

} // namespace DeviceFarm
} // namespace AWS
