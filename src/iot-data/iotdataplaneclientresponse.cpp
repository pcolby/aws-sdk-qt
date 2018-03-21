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

#include "iotdataplaneclientresponse.h"
#include "iotdataplaneclientresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace AWS {
namespace  {

/**
 * @class  IoTDataPlaneClientResponse
 *
 * @brief  Handles  IoTDataPlaneClient responses.
 *
 * @see    Client::ioTDataPlaneClient
 */

/**
 * @brief  Constructs a new IoTDataPlaneClientResponse object.
 *
 * @param  parent   This object's parent.
 */
IoTDataPlaneClientResponse::IoTDataPlaneClientResponse(QObject * const parent)
    : AwsAbstractResponse(new IoTDataPlaneClientResponsePrivate(this), parent)
{

}

/**
 * @internal
 *
 * @class  IoTDataPlaneClientResponsePrivate
 *
 * @brief  Private implementation for IoTDataPlaneClientResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new IoTDataPlaneClientResponsePrivate object.
 *
 * @param  q  Pointer to this object's public IoTDataPlaneClientResponse instance.
 */
IoTDataPlaneClientResponsePrivate::IoTDataPlaneClientResponsePrivate(
    IoTDataPlaneClientQueueResponse * const q) : IoTDataPlaneClientPrivate(q)
{

}

} // namespace 
} // namespace AWS
