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

#include "iotdataplaneclientresponse.h"
#include "iotdataplaneclientresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTDataPlane {

/**
 * @class  IoTDataPlaneClientResponse
 *
 * @brief  Handles IoTDataPlane IoTDataPlaneClient responses.
 *
 * @see    IoTDataPlaneClient::ioTDataPlaneClient
 */

/**
 * @brief  Constructs a new IoTDataPlaneClientResponse object.
 *
 * @param  parent   This object's parent.
 */
IoTDataPlaneClientResponse::IoTDataPlaneClientResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new IoTDataPlaneClientResponsePrivate(this), parent)
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

} // namespace IoTDataPlane
} // namespace QtAws
