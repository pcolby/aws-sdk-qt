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

#include "listdevicesresponse.h"
#include "listdevicesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace DeviceFarm {

/**
 * @class  ListDevicesResponse
 *
 * @brief  Handles DeviceFarm ListDevices responses.
 *
 * @see    DeviceFarmClient::listDevices
 */

/**
 * @brief  Constructs a new ListDevicesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListDevicesResponse::ListDevicesResponse(
        const ListDevicesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new ListDevicesResponsePrivate(this), parent)
{
    setRequest(new ListDevicesRequest(request));
    setReply(reply);
}

const ListDevicesRequest * ListDevicesResponse::request() const
{
    Q_D(const ListDevicesResponse);
    return static_cast<const ListDevicesRequest *>(d->request);
}

/**
 * @brief  Parse a DeviceFarm ListDevices response.
 *
 * @param  response  Response to parse.
 */
void ListDevicesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListDevicesResponsePrivate
 *
 * @brief  Private implementation for ListDevicesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListDevicesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListDevicesResponse instance.
 */
ListDevicesResponsePrivate::ListDevicesResponsePrivate(
    ListDevicesQueueResponse * const q) : ListDevicesPrivate(q)
{

}

/**
 * @brief  Parse an DeviceFarm ListDevicesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListDevicesResponsePrivate::ListDevicesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDevicesResponse"));
    /// @todo
}

} // namespace DeviceFarm
} // namespace AWS
