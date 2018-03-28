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

#include "rekognitionclientresponse.h"
#include "rekognitionclientresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace AWS {
namespace Rekognition {

/**
 * @class  RekognitionClientResponse
 *
 * @brief  Handles Rekognition RekognitionClient responses.
 *
 * @see    RekognitionClient::rekognitionClient
 */

/**
 * @brief  Constructs a new RekognitionClientResponse object.
 *
 * @param  parent   This object's parent.
 */
RekognitionClientResponse::RekognitionClientResponse(QObject * const parent)
    : AwsAbstractResponse(new RekognitionClientResponsePrivate(this), parent)
{

}

/**
 * @internal
 *
 * @class  RekognitionClientResponsePrivate
 *
 * @brief  Private implementation for RekognitionClientResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RekognitionClientResponsePrivate object.
 *
 * @param  q  Pointer to this object's public RekognitionClientResponse instance.
 */
RekognitionClientResponsePrivate::RekognitionClientResponsePrivate(
    RekognitionClientQueueResponse * const q) : RekognitionClientPrivate(q)
{

}

} // namespace Rekognition
} // namespace AWS
