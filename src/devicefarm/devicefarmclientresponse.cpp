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

#include "devicefarmclientresponse.h"
#include "devicefarmclientresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace AWS {
namespace  {

/**
 * @class  DeviceFarmClientResponse
 *
 * @brief  Handles  DeviceFarmClient responses.
 *
 * @see    Client::deviceFarmClient
 */

/**
 * @brief  Constructs a new DeviceFarmClientResponse object.
 *
 * @param  parent   This object's parent.
 */
DeviceFarmClientResponse::DeviceFarmClientResponse(QObject * const parent)
    : AwsAbstractResponse(new DeviceFarmClientResponsePrivate(this), parent)
{

}

/**
 * @internal
 *
 * @class  DeviceFarmClientResponsePrivate
 *
 * @brief  Private implementation for DeviceFarmClientResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeviceFarmClientResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeviceFarmClientResponse instance.
 */
DeviceFarmClientResponsePrivate::DeviceFarmClientResponsePrivate(
    DeviceFarmClientQueueResponse * const q) : DeviceFarmClientPrivate(q)
{

}

} // namespace 
} // namespace AWS
