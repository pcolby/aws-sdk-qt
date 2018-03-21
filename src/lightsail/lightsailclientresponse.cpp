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

#include "lightsailclientresponse.h"
#include "lightsailclientresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace AWS {
namespace  {

/**
 * @class  LightsailClientResponse
 *
 * @brief  Handles  LightsailClient responses.
 *
 * @see    Client::lightsailClient
 */

/**
 * @brief  Constructs a new LightsailClientResponse object.
 *
 * @param  parent   This object's parent.
 */
LightsailClientResponse::LightsailClientResponse(QObject * const parent)
    : AwsAbstractResponse(new LightsailClientResponsePrivate(this), parent)
{

}

/**
 * @internal
 *
 * @class  LightsailClientResponsePrivate
 *
 * @brief  Private implementation for LightsailClientResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new LightsailClientResponsePrivate object.
 *
 * @param  q  Pointer to this object's public LightsailClientResponse instance.
 */
LightsailClientResponsePrivate::LightsailClientResponsePrivate(
    LightsailClientQueueResponse * const q) : LightsailClientPrivate(q)
{

}

} // namespace 
} // namespace AWS
