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

#include "iotclientresponse.h"
#include "iotclientresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT {

/**
 * @class  IoTClientResponse
 *
 * @brief  Handles IoT IoTClient responses.
 *
 * @see    IoTClient::ioTClient
 */

/**
 * @brief  Constructs a new IoTClientResponse object.
 *
 * @param  parent   This object's parent.
 */
IoTClientResponse::IoTClientResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new IoTClientResponsePrivate(this), parent)
{

}

/**
 * @internal
 *
 * @class  IoTClientResponsePrivate
 *
 * @brief  Private implementation for IoTClientResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new IoTClientResponsePrivate object.
 *
 * @param  q  Pointer to this object's public IoTClientResponse instance.
 */
IoTClientResponsePrivate::IoTClientResponsePrivate(
    IoTClientQueueResponse * const q) : IoTClientPrivate(q)
{

}

} // namespace IoT
} // namespace QtAws
