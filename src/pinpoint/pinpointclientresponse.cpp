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

#include "pinpointclientresponse.h"
#include "pinpointclientresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace AWS {
namespace  {

/**
 * @class  PinpointClientResponse
 *
 * @brief  Handles  PinpointClient responses.
 *
 * @see    Client::pinpointClient
 */

/**
 * @brief  Constructs a new PinpointClientResponse object.
 *
 * @param  parent   This object's parent.
 */
PinpointClientResponse::PinpointClientResponse(QObject * const parent)
    : AwsAbstractResponse(new PinpointClientResponsePrivate(this), parent)
{

}

/**
 * @internal
 *
 * @class  PinpointClientResponsePrivate
 *
 * @brief  Private implementation for PinpointClientResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PinpointClientResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PinpointClientResponse instance.
 */
PinpointClientResponsePrivate::PinpointClientResponsePrivate(
    PinpointClientQueueResponse * const q) : PinpointClientPrivate(q)
{

}

} // namespace 
} // namespace AWS
